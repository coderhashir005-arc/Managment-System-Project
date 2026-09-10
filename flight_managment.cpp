#include <iostream>
#include <string>
using namespace std;

int seats_total[] = {60, 210, 95, 110, 30};
int seats_booked[] = {14, 74, 53, 97, 23};
int seats_available[] = {};
class flights
{
    int fff;
    // string fff;

public:
    void flight_in();
    void seats_booking();
    void book();
    void booking();
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
        cout << "Total seats are " << seats_total[0] << endl;
        break;

    case (2):
        cout << "International flight from Pakistan International Airport" << endl;
        cout << "Total seats are " << seats_total[1] << endl;
        break;

    case (3):
        cout << "International flight from Moroco International Airport" << endl;
        cout << "Total seats are " << seats_total[2] << endl;
        break;

    case (4):
        cout << "International flight from Peru International Airport" << endl;
        cout << "Total seats are " << seats_total[3] << endl;
        break;

    case (5):
        cout << "International flight from Peru International Airport" << endl;
        cout << "Total seats are " << seats_total[4] << endl;
        break;

    default:
        cout << "Not Available" << endl;
        break;
    }
}
void flights::book()
{
    string reply;
    cout << "Do you want to check the seats details." << endl;
    // cout << "Yes or No" << endl;
    cin >> reply;

    if (reply == "Yes")
    {
        seats_booking();
    }
    else
    {
        cout << "Thank you for visting the system" << endl;
    }
}

void flights::seats_booking()
{
    cout << "Press the number of flight, if you want to book" << endl;
    cin >> fff;
    switch (fff)
    {
    case (1):
        cout << "Available seats in this Airbus : " << seats_total[0] - seats_booked[0] << endl;
        cout << "Enter how many seats you want to book" << endl;
        cin >> seats_available[0];
        break;

    case (2):
        cout << "Available seats in this Airbus : " << seats_total[1] - seats_booked[1] << endl;
        cout << "Enter how many seats you want to book" << endl;
        cin >> seats_available[1];
        break;

    case (3):
        cout << "Available seats in this Airbus : " << seats_total[2] - seats_booked[2] << endl;
        cout << "Enter how many seats you want to book" << endl;
        cin >> seats_available[2];
        break;

    case (4):
        cout << "Available seats in this Airbus : " << seats_total[3] - seats_booked[3] << endl;
        cout << "Enter how many seats you want to book" << endl;
        cin >> seats_available[3];
        break;

    case (5):
        cout << "Available seats in this Airbus : " << seats_total[4] - seats_booked[4] << endl;
        cout << "Enter how many seats you want to book" << endl;
        cin >> seats_available[4];
        break;
    default:
        cout << "Not Available" << endl;
        break;
    }
}

int main()
{
    flights hashir_air;
    hashir_air.all_flights();
    hashir_air.flight_in();
    hashir_air.book();
    // hashir_air.seats_available();

    return 0;
}
