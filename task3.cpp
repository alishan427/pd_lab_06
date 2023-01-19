#include <iostream>
using namespace std;
main()
{
    int day;
    string month;

    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;

    if ((day >= 21 && month == "march") || (day <= 19 && month == "april"))
    {

        cout << " Aries ";
    }
     
      if ((day >= 20 && month == "april") || (day <= 20 && month == "may"))
    {

        cout << " Taurus ";
    }
    
    if ((day >= 21 && month == "may") || (day <= 20 && month == "june"))
    {

        cout << " Gemini ";
    }

    if ((day >= 21 && month == "june") || (day <= 22 && month == "july"))
    {

        cout << " Cancer ";
    }

    if ((day >= 23 && month == "july") || (day <= 22 && month == "august"))
    {

        cout << " leo ";
    }

    if ((day <= 23 && month == "august") || (day <= 22 && month == "september"))
    {

        cout << " virgo ";
    }

    if ((day >= 23 && month == "september") || (day <= 22 && month == "october"))
    {

        cout << " libra ";
    }

    if ((day >= 23 && month == "october") || (day <= 21 && month == "november"))
    {

        cout << " scorpio";
    }

    if ((day >= 22 && month == "november") || (day <= 21 && month == "december"))
    {

        cout << " Sagittarius ";
    }

    if ((day >= 22 && month == "december") || (day <= 19 && month == "january"))
    {

        cout << " Capricorn ";
    }

     if ((day >= 20 && month == "january") || (day <= 18 && month == "febuary"))
    {

        cout << " Aquarius  ";
    }
     if ((day >= 19 && month == "february") || (day <= 20 && month == "march"))
    {

        cout << " Pisces ";
    }
    

}