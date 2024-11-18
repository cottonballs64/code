/*
Driver's License Exam

The local Driver's License Office has asked you to write a program
that grades the written portion of the driver's license exam.

The exam has 5 multiple-choice questions. 

Here are the correct answers(in order of question):
A, D, B, B, C.

Your program should store the correct answers shown above in an array.

It should ask the user to enter the student's answers for each of the 5 questions,
and the answers should be stored in another array. 

After the student's answers have been entered,
the program should display a message indicating whether the student passed or failed the exam.
(A student must correctly answer 4 of the 5 questions to pass the exam.)

It should then display the total number of correctly answered questions,
the total number of incorrectly answered questions,
and a list showing the question numbers of the incorrectly answered questions.
*/
#include <iostream>
using namespace std;

const int TESTSIZE = 5;
int incorrectAns = 0, correctAns = 0;

const char ANSWERKEY [TESTSIZE] = {'A', 'D', 'B', 'B', 'C'};
char userAnswers [TESTSIZE];

void getUserAnswers();
void findExamGrade();

int main() {
getUserAnswers();
findExamGrade();
return 0;

}

void getUserAnswers(){
    cout << "Please submit your answer to each question here." << endl;
    cout << "Enter your answer as a capital letter and hit enter to move onto the next question." << endl;
    for (int i = 0; i < TESTSIZE; i++)
    {
        cout << "Question " << (i +1) << "'s answer:" << endl;
        cin >> userAnswers[i];
    }
    cout << endl;
}

void findExamGrade(){
    for (int i = 0; i < TESTSIZE; i++ )
      if (userAnswers[i] != ANSWERKEY[i]) {
          incorrectAns++;
          cout << "Answer " + to_string(i + 1) + " was wrong." << endl;
      }
      else {
           correctAns++;
       }
    cout << endl;
    cout << "Total correct answers: " << correctAns << endl;
    cout << "Total incorrect answers: " << incorrectAns << endl << endl;
    if (correctAns < (TESTSIZE - 1))
    {
        cout << "You failed the exam. You need at least 4/5 correct. Better luck next time." << endl;
    }
    else {
        cout << "You passed! Congratulations!" << endl;
    }
}
