/*
Multimedia University
Faculty of Computing and Informatics
Trimester 2010
TCP1101 Programming Fundamentals
Lab Test

-----------------------------------------------------------
Question Type : Write a program
-----------------------------------------------------------

Write the needed code to make the program runs correctly.

Prompt the user to input four integers between 0 and 20,
and then output the following horizontal histogram.
Each asterisk should represent one mark.

The sample runs are as follows.


Sample Run 1:

    Input four integers between 0 and 20 => 10 12 18 8

    mark 1: **********
    mark 2: ************
    mark 3: ******************
    mark 4: ********


Sample Run 2:

    Input four integers between 0 and 20 => 19 9 11 6

    mark 1: *******************
    mark 2: *********
    mark 3: ***********
    mark 4: ******


---------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
    int num1,num2,num3,num4;
    cout<<"Input four integers between 0 and 20 => ";
    cin>> num1>>num2>>num3>>num4;

    cout<<endl;

    cout<<"mark 1: ";
    for (int i = 0;i<num1;i++)
         cout<<"*";

    cout<<endl;

    cout<<"mark 2: ";
    for (int i = 0;i<num2;i++)
        cout<<"*";

        
    cout<<endl;

    cout<<"mark 3: ";
    for (int i = 0;i<num3;i++)
        cout<<"*";

    cout<<endl;

    cout<<"mark 4: ";
    for (int i = 0;i<num4;i++)
        cout<<"*";

    cout<<endl;



	return 0;
}
