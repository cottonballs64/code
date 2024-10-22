/*
1. The display functions: change these to getDisplay functions that return a string representing
the math equation of the two inputs,the opperation, and the result.
string getDisplaySum(double num1, double num2)
string getDisplayProduct(double num1, double num2)
string getDisplayDifference(double num1, double num2)

2.  Make overloaded copies of these functions that take integers instead of doubles.

3.  Then create two functions
void writeToConsole(string text)
void writeToFile(string text, string fileName)

4. Adjust the execute functions to ask the user if they want to print to console or print to string.
Then, call the appropriate function to print the string.

5.  Create static counter variables inside the execute functions that keep track of the number of times that that function has been called.
Each time the execute function is called, increment the count and print out a message to the console reporting how many have been executed.

6.  Put the whole system in an ongoing loop, so the user is continually asked to choose a math function, inputs, and to choose file or console.
*/
#include <iostream>
#include <fstream>
using namespace std;

void displayMenu();
char getChoice();
void displayOption(char selection);
void displayError();
void chooseInputType();
double getDouble();
int getInt();
string displaySum(double num1, double num2);
string displayProduct(double num1, double num2);
string displayDifference(double num1, double num2);
string displaySum(int num1, int num2);
string displayProduct(int num1, int num2);
string displayDifference(int num1, int num2);
void executeAddition();
void executeSubtraction();
void executeMultiplication();
void writeToConsole(string text);
void writeToFile(string text, string fileName);
char inputSelection();
char outputSelection();
void init();

int main() {
    init();
    return 0;
}
void init() {
    char selection;
    displayMenu();
        selection = getChoice();
        char choice;
        displayOption(selection);
        cout << "Would you like to perform another caclulation? (y/n)\n";
        cin >> choice;
        if (choice == 'y') {
            init();
        } else {
            cout << "Thank you, goodbye" << endl;
        }
}

void displayMenu(){
    cout << "Please select the operation you would like to perform:" << endl;
    cout << "A: Find the sum" << endl;
    cout << "B: Find the difference" << endl;
    cout << "C: Find the product" << endl << endl;
    cout << "Please choose (A, B, or C)" << endl;
}

void displayError(string message){
    cout << "Error! " << message << endl;
}

char getChoice(){
    char choice;
    bool validChoice = false;
    while (validChoice == false)
    {
        cin >> choice;
        string invalidInput = "That was not a valid input";
        switch (choice)
        {
            case 'a':
            case 'A':
            case 'b':
            case 'B':
            case 'c':
            case 'C':
            validChoice = true;
                break;
            default: 
            string clearInput;
            getline(cin, clearInput);
            displayError(invalidInput);
            cout << "Please choose (A, B, or C)" << endl;
                break;
        }
    }
    return choice;
}

void displayOption(char selection){
    string somethingHappened = "Oops, looks like something happened and the input selection was lost. Please start the program again.";
    switch (selection)
    {
    case 'A':
    case 'a':
        executeAddition();
        break;
    case 'B':
    case 'b':
        executeSubtraction();
        break;
    case 'C':
    case 'c':
        executeMultiplication();
        break;
    default:
        displayError(somethingHappened);
        break;
    }
}

int getInt(){
    int num;
    cout << "Please enter a number as an integer:" << endl;
    cin >> num;
    return num;
}

double getDouble(){
    double num;
    cout << "Please enter a number as a double:" << endl;
    cin >> num;
    return num;
}

string displaySum(double num1, double num2){
    double sum = (num1 + num2);
    string sumOutput = to_string(num1) + " + " + to_string(num2) + " = " + to_string(sum);
    return sumOutput;
}

string displayDifference(double num1, double num2){
    double difference = (num1 - num2);
    string differenceOutput = to_string(num1) + " - " + to_string(num2) + " = " + to_string(difference);
    return differenceOutput;
}

string displayProduct(double num1, double num2){
    double product = (num1 * num2);
    string productOutput = to_string(num1) + " * " + to_string(num2) + " = " + to_string(product);
    return productOutput;
}

string displaySum(int num1, int num2){
    int sum = (num1 + num2);
    string sumOutput = to_string(num1) + " + " + to_string(num2) + " = " + to_string(sum);
    return sumOutput;
}

string displayDifference(int num1, int num2){
    int difference = (num1 - num2);
    string differenceOutput = to_string(num1) + " - " + to_string(num2) + " = " + to_string(difference);
    return differenceOutput;
}

string displayProduct(int num1, int num2){
    int product = (num1 * num2);
    string productOutput = to_string(num1) + " * " + to_string(num2) + " = " + to_string(product);
    return productOutput;
}

void executeAddition(){
    static int count = 0;    
    char inputChoice, outputChoice;
    inputChoice = inputSelection();
    switch (inputChoice)
    {
    case 'I':
        outputChoice = outputSelection();
        if (outputChoice == 'F')
        {
            string fileName;
            cout << "Enter the name of the file with its type (Ex: result.txt)\n";
            cin >> fileName;
            writeToFile((displaySum(getInt(), getInt())), fileName);
        }
        else writeToConsole(displaySum(getInt(), getInt()));        
        break;
    case 'D':
        outputChoice = outputSelection();
        if (outputChoice == 'F')
        {
            cout << "Enter the name of the file with its type (Ex: result.txt)\n";
            string fileName;
            cin >> fileName;
            writeToFile((displaySum(getDouble(), getDouble())), fileName);
        }
        else writeToConsole(displaySum(getDouble(), getDouble()));
    }
    
    count++;
    cout << "The executeAddition function has been called " << count << " times." << endl;
}

void executeSubtraction(){
    static int count = 0;
    char inputChoice, outputChoice;
    inputChoice = inputSelection();
    switch (inputChoice)
    {
    case 'I':
        outputChoice = outputSelection();
        if (outputChoice == 'F')
        {
            cout << "Enter the name of the file with its type (Ex: result.txt)\n";
            string fileName;
            cin >> fileName;
            writeToFile((displayDifference(getInt(), getInt())), fileName);
        }
        else writeToConsole(displayDifference(getInt(), getInt()));        
        break;
    case 'D':
        outputChoice = outputSelection();
        if (outputChoice == 'F')
        {
            cout << "Enter the name of the file with its type (Ex: result.txt)\n";
            string fileName;
            cin >> fileName;
            writeToFile((displayDifference(getDouble(), getDouble())), fileName);
        }
        else writeToConsole(displayDifference(getDouble(), getDouble()));
    }
    count++;
    cout << "The executeSubtraction function has been called " << count << " times." << endl;
}

void executeMultiplication(){
    static int count = 0;
    char inputChoice, outputChoice;
    inputChoice = inputSelection();
    switch (inputChoice)
    {
    case 'I':
        outputChoice = outputSelection();
        if (outputChoice == 'F')
        {
            cout << "Enter the name of the file with its type (Ex: result.txt)\n";
            string fileName;
            getline(cin, fileName);
            writeToFile((displayProduct(getInt(), getInt())), fileName);
        }
        else writeToConsole(displayProduct(getInt(), getInt()));        
        break;
    case 'D':
        outputChoice = outputSelection();
        if (outputChoice == 'F')
        {
            cout << "Enter the name of the file with its type (Ex: result.txt)\n";
            string fileName;
            getline(cin, fileName);
            writeToFile((displayProduct(getDouble(), getDouble())), fileName);
        }
        else writeToConsole(displayProduct(getDouble(), getDouble()));
    }
    count++;
    cout << "The executeMultiplication function has been called " << count << " times." << endl;
}

void writeToConsole(string text){
    cout << text << endl;
}

void writeToFile(string text, string fileName){
    ofstream output;
    output.open(fileName);
    output << text << endl;
    output.close();
}

char outputSelection(){
    bool validChoice = false;
    char outputChoice;
    cout << "Would you like to output this in the console or save it to a file?\n";
    cout << "Enter C to output to Console, enter F to output to a file.\n";
    while (validChoice == false)
    {    
    cin >> outputChoice;
    if (outputChoice == 'C' || outputChoice == 'c')
    {
        validChoice = true;
        outputChoice = 'C';
    }
    else if (outputChoice == 'F' || outputChoice == 'f')
    {
        validChoice = true;
        outputChoice = 'F';
    }
    else
    cout << "Looks like you entered incorrectly. Enter C to ouput to console or F to output to a file\n";
    }
    return outputChoice;    
}

char inputSelection(){
    bool validChoice = false;
    char inputChoice;
    cout << "What kind of input type would you like to calculate this equation with?\n";
    cout << "Enter I to enter Integers, enter D to enter doubles.\n";
    while (validChoice == false)
    {    
    cin >> inputChoice;
    if (inputChoice == 'I' || inputChoice == 'i')
    {
        validChoice = true;
        inputChoice = 'I';
    }
    else if (inputChoice == 'D' || inputChoice == 'd')
    {
        validChoice = true;
        inputChoice = 'D';
    }
    else
    cout << "Looks like you entered incorrectly. Enter I to input integers or D for doubles\n";
    }
    return inputChoice;
}
