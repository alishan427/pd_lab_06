#include <iostream>
using namespace std;
main()
{

    char type_of_customer;
    char time;
    int minutes;
    float price, answer;

    cout << "which type of customer are you (residential or premium) select (r/p) ";
    cin >> type_of_customer;
    cout << "Enter minutes: ";
    cin >> minutes;

    if (type_of_customer == 'p')
    {
        cout << "enter time select (d / n )";
        cin >> time;
        if (time == 'd')
        {

            if (minutes > 75)
            {
                answer = minutes - 75;
                price = answer * 0.10;
                cout << "$" << price;
            }
            else
            {
                cout << "$ 25 ";
            }
        }
    }

    if (type_of_customer == 'p')
    {

        if (time == 'n')
        {

            if (minutes > 100)
            {
                answer = minutes - 100;
                price = answer * 0.05;
                cout << "$" << price;
            }
            else
            {
                cout << "$ 25 ";
            }
        }
    }

    if (type_of_customer == 'r')

    {
        if (minutes > 50)
        {
            answer = minutes - 50;
            price = answer * 0.20;
            cout << "$" << price;
        }
        else
        {
            cout << "$ 10 ";
        }
    }
}
