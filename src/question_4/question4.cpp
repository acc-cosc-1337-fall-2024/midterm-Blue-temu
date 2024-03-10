#include "question4.h"

using std::cout; using std::cin;

bool test_config()
{
    return true;
}
void prompt_user()
{

    auto choice = 'y';
    auto mass = -1;
    auto velocity = -1;


    do
    {
        
        cout << "Enter the mass of the object in kilograms: ";
        cin >> mass;
        cout << "Enter the velocity of the object in meters per second: ";
        cin >> velocity;
        get_kinetic_energy(mass, velocity);

        cout<<"Enter n to exit, y to continue: ";
        cin>>choice;

    } while(choice == 'y' || choice == 'Y');

}

void get_kinetic_energy(double mass, double velocity)
{
    double ke = 0.5 * mass * velocity * velocity;
    cout<<ke<<"\n";
   
}

int get_kinetic_energy_do(double mass, double velocity)
{
   return 0.5 * mass * velocity * velocity;

}
