#include "question3.h"
#include <vector>
#include<iostream>

using std::cout; using std::cin; using std::vector; 

bool test_config()
{
    return true;
}

vector<double> get_cookie_ingredients(int cookies)
{
    double sugar_per_cookie = 1.5 / 48;
    double butter_per_cookie = 1.0 / 48;
    double flour_per_cookie = 2.75 / 48;

    double sugar = sugar_per_cookie * cookies;
    double butter = butter_per_cookie * cookies;
    double flour = flour_per_cookie * cookies;

    return {sugar, butter, flour};
}
void prompt_user()
{

    auto choice = 'y';
    int cookies;


    do
    {
        cout << "Enter the number of cookies to bake: ";
        cin >> cookies;
       
       vector<double> ingredients = get_cookie_ingredients(cookies);

        cout << "Cups of Sugar: " << ingredients[0] <<"\n";
        cout << "Cups of Butter: " << ingredients[1] <<"\n";
        cout << "Cups of Flour: " << ingredients[2] <<"\n"; 

        cout<<"Enter n to exit, y to continue: ";
        cin>>choice;

    } while(choice == 'y' || choice == 'Y');

}