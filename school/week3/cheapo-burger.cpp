#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int item1Selection, item2Selection, item3Selection, tip15 = 15, tip20 = 20, tip25 = 25;
double totalTipAmount, subtotalPrice, totalPrice, totalTip, tipRate15 = 0.15, tipRate20 = 0.20, tipRate25 = 0.25, tipZero = 0, tipSelection, tipRate, totalTax, taxState, taxStateRate = 0.065, taxCounty, taxCountyRate = 0.005, taxCity, taxCityRate = 0.0175, item1Price, burgerPrice = 4.99, chickenSandwichPrice = 4.50, chickenStripsPrice = 4.75, item2Price, friesPrice= 1.49, onionRingsPrice = 1.59, drinkPrice= 1.69;
char recieptResponse;
string customerName, taxStateName = "Arkansas State Sales tax: 6.5%", taxCountyName = "Faulkner County Sales Tax: 0.5%", taxCityName = "Conway Municipal Sales Tax: 1.75%", item1, item2, item3, burger = "Burger", chickenSandwich = "Chicken Sandwich", chickenStrips = "Chicken Strips", fries = "Fries", onionRings = "Onion Rings", drinkCoke = "Coca Cola", drinkFanta = "Orange Fanta", drinkSprite = "Sprite", drinkWater = "Water", dashDollar =  " - $", selectOne = "1) ", selectTwo = "2) ", selectThree = "3) ", selectFour = "4) ", tipNone = "No Tip?", tip404NotFound = "0.00 -_- bruh"; 

// Ask customer's name
void askCustomerName() {
cout << "Welcome to Cheapo Burger!\n" << "What is your name?\n" << endl;
cin >> customerName;
};

// Calculate subtotal and taxes
void crunchNumbers() {
subtotalPrice = item1Price + item2Price + drinkPrice;
taxState = subtotalPrice * taxStateRate;
taxCounty = subtotalPrice * taxCountyRate;
taxCity = subtotalPrice * taxCityRate;
totalTax = taxState + taxCounty + taxCity;
totalPrice = subtotalPrice + totalTax;
};

// Prompt for receipt
void askReceipt() {
cout << endl << customerName << ", would you like a copy of your receipt? (y/n)" << endl << endl;
cin >> recieptResponse;
if (recieptResponse == 'y')
{
    cout << endl << "Cheapo Burger - Customer Copy" << endl << endl;
    cout << customerName << ", you have ordered the following items:" << endl;
    cout << setprecision(2) << showpoint << fixed << item1 << dashDollar << item1Price << endl;
    cout << setprecision(2) << showpoint << fixed << item2 << dashDollar << item2Price << endl;
    cout << setprecision(2) << showpoint << fixed << item3 << dashDollar << drinkPrice << endl;
    cout << setprecision(2) << showpoint << fixed << "Subtotal" << dashDollar << subtotalPrice << endl << endl;
    cout << "The following taxes were applied to your order:" << endl;
    cout << setprecision(2) << showpoint << fixed << taxCityName << dashDollar << taxCity << endl;
    cout << setprecision(2) << showpoint << fixed << taxCountyName << dashDollar << taxCounty << endl;
    cout << setprecision(2) << showpoint << fixed << taxStateName << dashDollar << taxState << endl;
    cout << setprecision(2) << showpoint << fixed << "Total Taxes" << dashDollar << totalTax << endl << endl;
    cout << setprecision(2) << showpoint << fixed << "Total" << dashDollar << totalPrice << endl;
    cout << setprecision(2) << showpoint << fixed << "Tip" << dashDollar;
    if (totalTip != 0) {cout << totalTip;}
    else if (totalTip == 0){cout << tip404NotFound;};
    cout << endl << endl;
    cout << "Thank you, " << customerName << ", for shopping with us!" << endl;
}
else if (recieptResponse != 'y')
{
    cout << endl << "Thank you " << customerName << " for shopping with us!" << endl;
};
};

int main()
{
askCustomerName ();

// Prompt for first item of the meal
cout << endl << setprecision(2) << showpoint << fixed << "What would you like today? Please enter the number matching your selection." << endl << selectOne << burger << dashDollar << burgerPrice << endl << selectTwo << chickenSandwich << dashDollar << chickenSandwichPrice << endl << selectThree << chickenStrips << dashDollar << chickenStripsPrice << endl << endl;
cin >> item1Selection;
if (item1Selection == 1)
{
    item1 = burger;
    item1Price = burgerPrice;
}
else if (item1Selection == 2)
{
    item1 = chickenSandwich;
    item1Price = chickenSandwichPrice;
}
else if (item1Selection == 3)
{
    item1 = chickenStrips;
    item1Price = chickenStripsPrice;
}
else if (item1Selection != 1,2,3)
{
    cout << "Please make a selection from the options provided" << endl;
    cin >> item1Selection;
    if (item1Selection == 1)
    {
    item1 = burger;
    item1Price = burgerPrice;
    }
    else if (item1Selection == 2)
    {
    item1 = chickenSandwich;
    item1Price = chickenSandwichPrice;
    }
    else if (item1Selection == 3)
    {
    item1 = chickenStrips;
    item1Price = chickenStripsPrice;
    }
    else if (item1Selection != 1,2,3)
    {
        cout << "-_- I asked nicely... Please come back when you're ready to make an actual selection" << endl;
        return 0;
    }
};

// Prompt for second item of the meal:
cout << endl << setprecision(2) << showpoint << fixed << "Would you like fries or onion rings with your meal? Please enter the number matching your selection." << endl << selectOne << fries << dashDollar << friesPrice << endl << selectTwo << onionRings << dashDollar << onionRingsPrice << endl << endl;
cin >> item2Selection;
if (item2Selection == 1)
{
    item2 = fries;
    item2Price = friesPrice;
}
else if (item2Selection == 2)
{
    item2 = onionRings;
    item2Price = onionRingsPrice;
}
else if (item2Selection != 1,2)
{
    cout << "Please make a selection from the options provided" << endl;
    cin >> item2Selection;
    if (item2Selection == 1)
    {
        item2 = fries;
        item2Price = friesPrice;
    }
    else if (item2Selection == 2)
    {
        item2 = onionRings;
        item2Price = onionRingsPrice;
    }
    else if (item2Selection != 1,2)
    {
        cout << "-_- I asked nicely... Please come back when you're ready to make an actual selection" << endl;
        return 0;
    }
};

// Prompt for drink selection:
cout << endl << setprecision(2) << showpoint << fixed << "What would you like to drink with your meal? Please enter the number matching your selection." << endl << selectOne << drinkCoke << dashDollar << drinkPrice << endl << selectTwo << drinkFanta << dashDollar << drinkPrice << endl << selectThree << drinkSprite << dashDollar << drinkPrice << endl << selectFour << drinkWater << dashDollar << drinkPrice << endl << endl;
cin >> item3Selection;
if (item3Selection == 1)
{
    item3 = drinkCoke;
}
else if (item3Selection == 2)
{
    item3 = drinkFanta;
}
else if (item3Selection == 3)
{
    item3 = drinkSprite;
}
else if (item3Selection == 4)
{
    item3 = drinkWater;
}
else if (item3Selection != 1,2,3,4)
{
    cout << "Please make a selection from the options provided" << endl;
    cin >> item3Selection;
    if (item3Selection == 1)
    {
        item3 = drinkCoke;
    }
    else if (item3Selection == 2)
    {
        item3 = drinkFanta;
    }
    else if (item3Selection == 3)
    {
        item3 = drinkSprite;
    }
    else if (item3Selection == 4)
    {
        item3 = drinkWater;
    }
        else if (item3Selection != 1,2,3,4)
    {
        cout << "-_- I asked nicely... Please come back when you're ready to make an actual selection" << endl;
        return 0;
    }
}

crunchNumbers();

// Prompt for tip selection
cout << "How large of a tip would you like to give me? ;)" << endl << endl;
cout << selectOne << tip15 << "%?" << endl << selectTwo << tip20 << "%?" << endl << selectThree << tip25 << "%?" << endl << selectFour << tipNone << endl << endl;
cin >> tipSelection;
if (tipSelection == 1)
{
    tipRate = tipRate15;
}
else if (tipSelection== 2)
{
    tipRate = tipRate20;
}
else if (tipSelection == 3)
{
    tipRate = tipRate25;
}
else if (tipSelection == 4)
{
    cout << "Oops, that wasn't supposed to be an option o_O" << endl << endl << "How large of a tip would you like to give me? :p" << endl;
    cout << selectOne << tip15 << "%?" << endl << selectTwo << tip20 << "%?" << endl << selectThree << tip25 << "%?" << endl << endl;
    cin >> tipSelection;
    if (tipSelection == 1)
    {
        tipRate = tipRate15;
    }
    else if (tipSelection== 2)
    {
        tipRate = tipRate20;
    }
    else if (tipSelection == 3)
    {
        tipRate = tipRate25;
    }
    else if (tipSelection != 1,2,3)
    {
        cout << "-_- Fine... I get the idea. No tip this time." << endl;
        tipRate = tipZero;
    }
}
else if (tipSelection != 1,2,3,4)
{
    cout << "-_- Fine... We can just skip this part" << endl;
    tipRate = tipZero;
}
totalTip = (tipRate * subtotalPrice);

askReceipt();

}
