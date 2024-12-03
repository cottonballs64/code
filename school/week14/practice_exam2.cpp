// Yuka Nagayoshi
// Create an employee database ranking system

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// Max number of employees
const int MAX_EMPLOYEES = 100;


// Struct definition
struct Employee 
{
    int id;
    string name;
    string department;
    float salary;
    int yearsOfExperience;
    float bonus;
};

// Function prototypes
void readData(Employee employees[], int& size, const string& fileName);
void calculateBonuses(Employee employees[], int size);
void sortEmployeesByBonus(Employee employees[], int size);
void displayEmployees(const Employee employees[], int size);

int main() 
{
    int size = 0;
    Employee employees[MAX_EMPLOYEES];

    // Read data from file
    readData(employees, size, "employees.txt");

    // Calculate bonuses
    calculateBonuses(employees, size);

    // Sort employees by bonus
    sortEmployeesByBonus(employees, size);

    // Display sorted employees
    displayEmployees(employees, size);

    return 0;
}

// Function to read data from file
void readData(Employee employees[], int& size, const string& fileName)
{
    ifstream file;
    file.open(fileName);
    int count = 0;
    size = 0;

    if (!file) 
    {
        cout << "\n\n**** ERROR OPENING FILE. ******\n" << endl;
    }
    else
    {
        while (!file.eof())
        {
            file >> employees[count].id
                >> employees[count].name
                >> employees[count].department
                >> employees[count].salary
                >> employees[count].yearsOfExperience;

            count++;
            size++;

            if (file.eof())
                break;
        }
    }
    file.close();
}

// Function to calculate bonuses
void calculateBonuses(Employee employees[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        employees[i].bonus = employees[i].yearsOfExperience * 0.05 * employees[i].salary;
    }
}

// Function to sort employees by bonus in descending order
void sortEmployeesByBonus(Employee employees[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (employees[j].bonus < employees[j + 1].bonus) 
            {
                Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
}

// Function to display employees
void displayEmployees(const Employee employees[], int size) {
    cout << left << setw(5) << "ID"
        << setw(10) << "Name"
        << setw(15) << "Department"
        << setw(10) << "Salary"
        << setw(20) << "Years of Experience"
        << setw(10) << "Bonus" << endl;

    cout << string(70, '-') << endl;

    for (int i = 0; i < size; i++) 
    {
        cout << left << setw(5) << employees[i].id
            << setw(10) << employees[i].name
            << setw(15) << employees[i].department
            << setw(10) << employees[i].salary
            << setw(20) << employees[i].yearsOfExperience
            << setw(10) << employees[i].bonus << endl;
    }
}
