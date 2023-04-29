/*
I'm glad you saw my code
I created this code, I am Mahmoud mohey.I've created code that calculates speed (C++ code)
on April 29, 2023 while I was studying Fundamentals Of Programming With C++.
You can learn more about me and contact me through my personal website.
www.mahmoudmohey.com
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";
    cout << "==  calculate speed   ==\n";
    cout << "===========================\n";

    int distance;
    int time;

    cout << "wite the distance in metres  ";
    cin >> distance;
    cout << "distance in metres is  ";
    cout << distance;
    cout << " m\n";

    cout << " \nwite the time in seconds  ";
    cin >> time;
    cout << "time in seconds is  ";
    cout << time;
    cout << " s\n";

    int speed = distance / time;
    cout << "\nspeed is  ";
    cout << speed;
    cout << " m/s";
    cout << "\nNote: Speed is displayed to the nearest whole number";

    return 0;
}