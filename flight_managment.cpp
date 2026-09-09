#include <iostream>
#include <string>
using namespace std;

class flights
{
    int fff;
    // string fff;

public:
    // void new_in();
    // void chk_flights();
    void flight_in();
    void all_flights()
    // void seats_available();
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

// void flights ::seats_available()
// {
// }

// void flights::new_in()
// {
//     cin >> fff;
// }

// void flights ::chk_flights()
// {
//     for (int i = 0; i < fff.length(); i++)
//     {
//         if (fff.at(i) == 1)
//         {
//             /* code */
//             cout << "Domestic flight from Pakistan International Airport" << endl;
//             cout << "Total seats are: 60" << endl;
//         }

//         else if (fff.at(i) == 2)
//         {
//             /* code */
//             cout << "International flight from Pakistan International Airport" << endl;
//             cout << "Total seats are: 210" << endl;
//         }

//         else if (fff.at(i) == 3)
//         {
//             /* code */
//             cout << "International flight from Pakistan International Airport" << endl;
//             cout << "Total seats are: 95" << endl;
//         }

//         else if (fff.at(i) == 4)
//         {
//             /* code */
//             cout << "International flight from Pakistan International Airport" << endl;
//             cout << "Total seats are: 110" << endl;
//         }

//         else
//         {
//             /* code */
//             cout << "International flight from Pakistan International Airport" << endl;
//             cout << "Total seats are: 30" << endl;
//         }
//     }
// }

int main()
{
    flights hashir_air;
    hashir_air.all_flights();
    hashir_air.flight_in();
    // hashir_air.new_in();
    // hashir_air.chk_flights();

    return 0;
}