#include <iostream>
#include <string>
using namespace std;

string digitName(int digit);
string teenName(int number);
string tensName(int number);
string intName(int number);


int main()
{
    int digit;
 string x;

    cin >> digit;
    if (digit == 1) x = "one";
   else  if (digit == 2) x= "two";
    else if (digit == 3) x = "three";
    else if (digit == 4) x = "four";
    else if (digit == 5) x= "five";
    else if (digit == 6) x= "six";
    else if (digit == 7) x= "seven";
    else if (digit == 8) x= "eight";
    else if (digit == 9) x= "nine";
    else x="Greater than 9";
     
    cout << x;
   

    return 0;
}



