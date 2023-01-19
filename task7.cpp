#include <iostream>
using namespace std;
main()
{
    int hours;
    int minutes;
    int arrival_hour;
    int arrival_minutes;
    int starting_hours_in_minutes;
    int starting_time_in_minutes;
    int arrival_hours_in_minutes;
    int arrival_time_in_minutes;
    int difference;

    cout << "Enter starting time (hours): ";
    cin >> hours;
    cout << "Enter start minutes (minutes): ";
    cin >> minutes;
    cout << "Start hour of arrival: ";
    cin >> arrival_hour;
    cout << "Students minutes of arrival: ";
    cin >> arrival_minutes;

    starting_hours_in_minutes = hours * 60;
    starting_time_in_minutes = starting_hours_in_minutes + minutes;
    arrival_hours_in_minutes = arrival_hour * 60;
    arrival_time_in_minutes = arrival_hours_in_minutes + arrival_minutes;
    
    if ( arrival_time_in_minutes > starting_hours_in_minutes)
    {
        difference =  arrival_time_in_minutes - starting_time_in_minutes ;
        cout << "late " << endl;
       
        if (difference > 60 )
         {
            int answer_in_hours = difference / 60 ;
            int answer_hours_in_minutes = answer_in_hours * 60;
            int answer_in_minutes = difference - answer_hours_in_minutes;     
            cout << answer_in_hours << "hours" << endl;
            cout << answer_in_minutes << "minutes" << endl;
         }
         else
         { cout << difference << " minutes ";}
    }
    if ( arrival_time_in_minutes < starting_time_in_minutes)
    {
        difference = starting_time_in_minutes -  arrival_time_in_minutes;
         cout << " early " << endl;
        

         if (difference > 60 )
         {
            int answer_in_hours = difference / 60 ;
            int answer_hours_in_minutes = answer_in_hours * 60;
            int answer_in_minutes = difference - answer_hours_in_minutes;     
            cout << answer_in_hours << "hours" << endl;
            cout << answer_in_minutes << "minutes" << endl;
         }
         else
         {
            cout << difference << " minutes ";
         }
    }

    if ( arrival_time_in_minutes == starting_time_in_minutes)
    {
       
         cout << " on time " << endl;
       
    }
}
