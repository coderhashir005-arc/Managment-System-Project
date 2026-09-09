#include <iostream>
#include <string>
using namespace std;

class flights
{
    int fff;
    // string fff;

public:
    // void chk_flights();
    void flight_in();
    /*
    this funciton is coming soon.
    void seats_available();
    */
    void all_flights()
    {
        cout << "These Flights are available." << endl;
        cout << "1. Lahore to Islamabad." << endl;
        cout << "2. Pakistan to Turkey." << endl;
        cout << "3. Moroco to Suadi." << endl;
        cout << "4. Peru to Mexico." << endl;
        cout << "5. Nepal to Pakistan." << endl;
    }
};

void flights::flight_in()
{
    // int fff;
    cout << "Enter the number of flight you want to know about" << endl;
    cin >> fff;
    switch (fff)
    {
    case (1):
        cout << "Domestic flight from Pakistan International Airport" << endl;
        cout << "Total seats are 60" << endl;
        break;

    case (2):
        cout << "International flight from Pakistan International Airport" << endl;
        cout << "Total seats are 210" << endl;
        break;

    case (3):
        cout << "International flight from Pakistan International Airport" << endl;
        cout << "Total seats are 95" << endl;
        break;

    case (4):
        cout << "International flight from Pakistan International Airport" << endl;
        cout << "Total seats are 110" << endl;
        break;

    default:
        cout << "International flight from Pakistan International Airport" << endl;
        cout << "Total seats are 30" << endl;
        break;
    }
}


/* void flights ::chk_flights()
{
    for (int i = 0; i < fff.length(); i++)
    {
        if (fff.at(i) == 1)
        {
            cout << "Domestic flight from Pakistan International Airport" << endl;
            cout << "Total seats are: 60" << endl;
        }

        else if (fff.at(i) == 2)
        {
            cout << "International flight from Pakistan International Airport" << endl;
            cout << "Total seats are: 210" << endl;
        }

        else if (fff.at(i) == 3)
        {
            cout << "International flight from Pakistan International Airport" << endl;
            cout << "Total seats are: 95" << endl;
        }

        else if (fff.at(i) == 4)
        {
            cout << "International flight from Pakistan International Airport" << endl;
            cout << "Total seats are: 110" << endl;
        }

        else
        {
            cout << "International flight from Pakistan International Airport" << endl;
            cout << "Total seats are: 30" << endl;
        }
    }
}
*/




int main()
{
    flights hashir_air;
    hashir_air.all_flights();
    hashir_air.flight_in();

    return 0;
}
