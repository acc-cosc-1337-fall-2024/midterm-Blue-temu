#include "question2.h"
#include<iostream>
#include <string>

using std::cout; using std::cin; using std::string; 
bool test_config()
{
    return true;
}

int get_factorial_sequence(int num)
{
   //int factorial = num;
   for (int i = num - 1 ; i > 1 ; i--)
   {
    num = num * i;
   }
    cout<<num<<"\n";
    return num;
}



void prompt_user()
{
    int num;
    auto choice = 'y';

    do {
        do {
            cout << "Enter a number between 1 and 10: ";
            cin >> num;
        } while (num < 1 || num > 10);

        get_factorial_sequence(num);

            cout<<"Enter n to exit, y to continue: ";
            cin>>choice;

    } while(choice == 'y' || choice == 'Y');


}


