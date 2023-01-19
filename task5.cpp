#include <iostream>
using namespace std;
main()
{
    string fruit_name;
    string day;
    float quantity;
    float price;

    cout << "Enter Fruit name: ";
    cin >> fruit_name;
    cout << "Enter Day: ";
    cin >> day;
    cout << "ENter Quantity: ";
    cin >> quantity;

    if ((day != "saturday") && (day != "sunday"))
    {
        if (fruit_name == "banana")
        {
            price = quantity * 2.50;
            cout << price;
        }
        if (fruit_name == "apple")
        {
            price = quantity * 1.20;
            cout << price;
        }

        if (fruit_name == "orange")
        {
            price = quantity * 0.85;
            cout << price;
        }

        if (fruit_name == "grape fruit")
        {
            price = quantity * 1.45;
            cout << price;
        }

        if (fruit_name == "kiwi")
        {
            price = quantity * 2.70;
            cout << price;
        }

        if (fruit_name == "pineapple")
        {
            price = quantity * 5.50;
            cout << price;
        }

        if (fruit_name == "grapes")
        {
            price = quantity * 3.85;
            cout << price;
        }
    }

    if ((day == "saturday") || (day == "sunday"))
    {
        if (fruit_name == "banana")
        {
            price = quantity * 2.70;
            cout << price;
        }
        if (fruit_name == "apple")
        {
            price = quantity * 1.25;
            cout << price;
        }

        if (fruit_name == "orange")
        {
            price = quantity * 0.90;
            cout << price;
        }

        if (fruit_name == "grape fruit")
        {
            price = quantity * 1.60;
            cout << price;
        }

        if (fruit_name == "kiwi")
        {
            price = quantity * 3.00;
            cout << price;
        }

        if (fruit_name == "pineapple")
        {
            price = quantity * 5.60;
            cout << price;
        }

        if (fruit_name == "grapes")
        {
            price = quantity * 4.20;
            cout << price;
        }
    }
}