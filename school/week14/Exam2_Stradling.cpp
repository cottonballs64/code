/*
MICAH STRADLING

Output:
                                                                                Team Ranking Report
RANKING   Team Name      Team #    Points                                  Total PointsAverage/Game
--------- -------------- --------- --------------------------------------- --------- ---------
         1         25  36  24  31  42  34  35  16  24  33  300       30.00     
         2         19  14  25  32  41  36  35  26  24  33  285       28.50     
    3         31  22  12  30  28  25  35  26  34  33  276       27.60     
       4         11  21  22  25  34  11  25  46  34  23  252       25.20     
    5         41  37  35  33  35  35  35  37  28  32  348       34.80     
        6         31  25  32  33  34  25  35  36  34  34  319       31.90     
      7         41  42  33  43  44  35  45  36  44  33  396       39.60     
      8         31  32  42  33  29  35  35  36  44  35  352       35.20     
         9         44  37  35  33  44  35  25  37  44  37  371       37.10     
      10        34  55  22  33  44  23  45  54  43  33  386       38.60     
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - %   

*/


#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include <iomanip>
using namespace std;

// Constants
const int MAXTEAMS = 24;
// const int MAXTEAMNAME = 15;
const int GAMESPLAYED = 10;

// Structures
struct Team{
    int ranking;
    string teamName;
    int teamNumber;
    int points[GAMESPLAYED];
    int totalPoints;
    double average;
};

// Function prototypes
void readScore(Team[], int&, const string& fileName);
void calcRanking(Team[], int);
void bubbleSortTeamByRank(Team[], int);
void displayRankingReport(Team[], int);

int main(){
    //Initialize
    int size;
    Team teams[MAXTEAMS];

    readScore(teams, size, "teamPoints.txt");

    calcRanking(teams, size);

    displayRankingReport(teams, size);

}

// Function to read teams and points scored from file 
void readScore(Team teams[], int& size, const string& fileName)
{
    ifstream file;
    file.open(fileName);
    int count = 0;
    size = 1;

    if (!file) 
    {
        cout << "\n\n**** ERROR OPENING FILE. ******\n" << endl;
    }
    else
    {
        while (!file.eof())
        {
            string temp = "";
            file >> teams[count].teamNumber;
            getline(file, teams[count].teamName);
            // file >> teams[count].teamName;
            // getline(file, temp);
            // cout << temp;
                for (int i = 0; i < GAMESPLAYED; i++)
                {                
                file >> teams[count].points[i];
                }
            count++;
            size++;

            if (file.eof())
                break;
        }
    }
    file.close();
}

// Function to calculate each team's total points, average score, and assign a ranking
void calcRanking(Team teams[], int size){
    // First add up total and calculate Average for each team

    // Loop for all the teams stored in the array
    for (int i = 0; i < size; i++)
    {    
        int total = 0;
        double ave;

        // Loop to add up all the points from the games played
        for (int j = 0; j < GAMESPLAYED; j++)
        {
            total += teams[i].points[j];
        }

        // Calculate team's average score across all games
        ave = total / static_cast<double>(GAMESPLAYED);

        // Feed data back to the Team array
        teams[i].totalPoints = total;
        teams[i].average = ave;
    }

    // Now take Averages and sort teams in ranked order from highest to lowest average
    bubbleSortTeamByRank(teams, size);
}

// Bubble sort to assign ranks to teams based off average score
void bubbleSortTeamByRank(Team array[], int size)
    {
    bool swap;
    int bottom = size - 1;
    // Initialize the first entry as the lowest rank before checking to swap ranks
    array[0].ranking = size;
    do
        {
        swap = false;
        for (int count = 0; count < bottom; count++)
            {            
            if (array[count].average > array[count+1].average)
                {
                array[count+1].ranking = array[count].ranking;
                array[count].ranking -= 1;
                swap = true;
                }
                else
                array[count+1].ranking = array[count].ranking;
            }
        bottom--;
        } while(swap != false);
    }

// Function to display a formatted Ranking Report to the user
void displayRankingReport(Team teams[], int size){
    // Title
    cout << fixed << setprecision(2) << setw(100) << "Team Ranking Report\n";

    //Column definitions
    cout << left << setw(10) << "RANKING"
        << setw(15) << "Team Name"
        << setw(10) << "Team #"
        << setw(40) << "Points"
        << setw(10) << "Total Points"
        << setw(10) << "Average/Game" << endl;

    //Seperator
    cout << string(9, '-')
    << " " << string(14, '-')
    << " " << string(9, '-')
    << " " << string(39, '-')
    << " " << string(19, '-')
    << " " << string(19, '-') << endl;

    for (int i = 0; i < size-2; i++) 
    {
        cout << left << setw(10) << teams[i].ranking
            << setw(15) << teams[i].teamName
            << setw(10) << teams[i].teamNumber;
            for (int j = 0; j < GAMESPLAYED; j++)
            {
                cout << setw(4) << teams[i].points[j];
            }
        cout << setw(20) << teams[i].totalPoints
            << setw(20) << teams[i].average << endl;
    }
}

