#include <iostream>
using namespace std;
main()
{

    float marks1, marks2, marks3, marks4, marks5;
    string name;
    float percentage;
    int sum;
    cout << "Enter Student name: ";
    cin >> name;

    cout << "Enter English marks: ";
    cin >> marks1;

    cout << "Enter Maths marks: ";
    cin >> marks2;

    cout << "Enter Chemistry marks: ";
    cin >> marks3;

    cout << "Enter Social Science marks: ";
    cin >> marks4;

    cout << "Enter Biology marks: ";
    cin >> marks5;

    sum = marks1 + marks2 + marks3 + marks4 + marks5;

    percentage = (sum * 100 / 500);

    if (percentage >= 90)
    {
        if (percentage <= 100)
            cout << "A+";
    }

    if (percentage >= 80)
    {
        if (percentage <= 90)
            cout << "A";
    }
    if (percentage >= 70)
    {
        if (percentage <= 80)
            cout << "B+";
    }
    if (percentage >= 60)
    {
        if (percentage <= 70)
            cout << "B";
    }
    if (percentage >= 50)
    {
        if (percentage <= 60)
            cout << "C";
    }
    if (percentage >= 40)
    {
        if (percentage <= 45)
            cout << "D";
    }
    if (percentage <= 40)
        cout << "F";
}