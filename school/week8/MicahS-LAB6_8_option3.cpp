/*
MICAH STRADLING

Option 3: Write a program that outputs a dentist bill. For members of a dental
plan, the bill consists of the service charge (for the particular procedure
performed) and test fees, input to the program by the user. To nonmembers the charges consist of the above services plus medicine (also
input by the user). The program first asks if the patient is a member of the
dental plan. The program uses two overloaded functions to calculate the
total bill. Both are value returning functions that return the total charge.
*/

#include<iostream>
#include<iomanip>
using namespace std;

float inputServiceCharge();
float inputTestFees();
float inputMedicineFees();
void outputMemberBill(float serviceCharge, float testFees);
void outputNonmemberBill(float serviceCharge, float testFees, float medicineFees);

int main(){
    char dentalPlan;
    bool validInput;
    cout << fixed << setprecision(2);
    cout << "This program outputs a dentist bill.\n";
    cout << "Are you a member of the dental plan?\n";
    cout << "Enter Y/N" << endl;
    while (validInput == false)
    {
        cin >> dentalPlan;
        if (dentalPlan == 'Y' || dentalPlan == 'y')
        {
            validInput = true;
            outputMemberBill(inputServiceCharge(), inputTestFees());
            return 0;
        }
        else if (dentalPlan == 'N' || dentalPlan == 'n')
        {
            validInput = true;
            outputNonmemberBill(inputServiceCharge(), inputTestFees(), inputMedicineFees());
            return 0;
        }
        else
        cout << "Looks like you entered something wrong. Please enter Y/N:\n";
    }
}

float inputServiceCharge(){
    float serviceCharge;
    cout << "Please enter the sercive charges in dollars:\n";
    cin >> serviceCharge;
    return serviceCharge;
}

float inputTestFees(){
    float testFees;
    cout << "Please enter the test fees in dollars:\n";
    cin >> testFees;
    return testFees;
}
float inputMedicineFees(){
    float medicineFees;
    cout << "Please enter the medicine fees in dollars:\n";
    cin >> medicineFees;
    return medicineFees;
}

void outputMemberBill(float serviceCharge, float testFees){
cout << "Your Bill:" << endl << endl;
cout << "Sevice Charges - $" << serviceCharge << endl;
cout << "Test Fees - $" << testFees << endl;
float total = serviceCharge + testFees;
cout << "Total: $" << total << endl;
}

void outputNonmemberBill(float serviceCharge, float testFees, float medicineFees){
cout << "Your Bill:" << endl << endl;
cout << "Sevice Charges - $" << serviceCharge << endl;
cout << "Test Fees - $" << testFees << endl;
cout << "Medicine Fees - $" << medicineFees << endl;
float total = serviceCharge + testFees + medicineFees;
cout << "Total: $" << total << endl;
}
