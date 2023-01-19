#include <iostream>
using namespace std;
main()
{
    string month;
    int number_of_stays;
    int price;
    cout << "ENter month: ";
    cin >> month;
    cout << "Enter number of stays: ";
    cin >> number_of_stays;
    float studio, apartment, studio_price, apartment_price;

    if ((month == "may") || (month == "october"))
    {
        if (number_of_stays == 7)
        {
            studio = (50 - 2.5);
            studio_price = studio * number_of_stays;
            apartment = (65);
            apartment_price = apartment * number_of_stays;
            cout << "$" << studio_price;
            cout << "$" << apartment_price;
        }
    }

    if ((month == "may") || (month == "october"))
    {
        if (number_of_stays >= 14)
        {
            studio = (50 - 15);
            apartment = (65 - 6.5);
            studio_price = studio * number_of_stays;
            apartment_price = apartment * number_of_stays;
            cout << "$" << studio_price << endl;
            cout << "$" << apartment_price;
        }
    }

    if ((month == "june") || (month == "september"))
    {
        if (number_of_stays >= 14)
        {
            studio = (75.20 - 15.04);
            apartment = (68.70 - 6.87);
            studio_price = studio * number_of_stays;
            apartment_price = apartment * number_of_stays;
            cout << "$" << studio_price << endl;
            cout << "$" << apartment_price;
        }
    }

    if ((month == "july") || (month == "august"))
    {
        if (number_of_stays >= 0)
        {
            studio_price = 76 * number_of_stays;
            cout << "$" << studio_price << endl;
        }
    }

    if ((month == "july ") || (month == "august"))
    {
        if (number_of_stays >= 14)
            apartment = (77 - 7.7);
        apartment_price = apartment * number_of_stays;
        cout << "$" << apartment_price;
    }
}