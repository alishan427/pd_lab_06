#include <iostream>
using namespace std;
main()
{    

string temperature;
string humidity;
string activity;
cout << "What Temperature is: ";
cin >> temperature;
cout << "Enter Humidity: ";
cin >> humidity;

if (temperature == "warm" && humidity == "dry")
{cout << "play tennis";}

if (temperature == "warm" && humidity == "humid")
{cout << "swim ";}

if (temperature == "cold" && humidity == "dry")
{cout << "play basket ball";}

if (temperature == "cold" && humidity == "humid")
{cout << "play watch tv";}

}