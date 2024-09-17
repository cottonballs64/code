// This program illustrates the use of logical operators
// MICAH STRADLING

#include <iostream>
using namespace std;

int main()

{
char year;
float gpa;
cout << "What year student are you ?" << endl;
cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
<< endl << endl;
cin >> year;
cout << "Now enter your GPA" << endl;
cin >> gpa;
if (! (gpa < 2.0) && year == '4')
cout << "It is time to graduate soon" << endl;
else if (year != '4'|| gpa <2.0)
cout << "You need more schooling" << endl;
return 0;
}

/*
Exercise 1: How could you rewrite gpa >= 2.0 in the first if statement using
the NOT operator?

! (gpa < 2.0)

Exercise 2: Could you replace year !='4' in the else if statement with
year < 4 or year <= 3? Why or why not?

No because then it's comparing a character to an integer. If year was defined as an int instead of a char, then it might work better

Exercise 3: If you replace
if ( gpa >= 2.0 && year == '4')
with
if ( gpa >= 2.0 || year == '4')
and replace
else if ( year != '4'|| gpa < 2.0)
with
else if ( year != '4' && gpa < 2.0)
which students will graduate and which will not graduate according to this
new program?

It makes any students in their 4th year graduate soon regardless of GPA
It makes any students with a GPA of a 2.0 or higher graduate soon regardless of year
It makes all students below a 2.0 who also aren't in their 4th year need more schooling

Does this handle all cases (i.e., all combinations of year and gpa)?

Seems to handle all cases, albeit incorrectly

Exercise 4: Could you replace else if ( year != '4'|| gpa < 2.0) with the
single word else?

Yes, since it will handle all cases that aren't the graduating soon cases

*/