/*
I'm glad you saw my code
I created this code, I am Mahmoud mohey. I created a code that displays
your age in days, hours, minutes, and seconds in C++
on April 29, 2023 while I was studying Fundamentals Of Programming With C++.
You can learn more about me and contact me through my personal website.
www.mahmoudmohey.com
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";
    cout << "==  calculate your age   ==\n";
    cout << "===========================\n";

    cout << "write you age  ";
    int age;
    cin >> age;
    cout << "your age is  ";
    cout << age;

    int age_in_days = age * 365;
    int age_in_hours = age_in_days * 24;
    int age_in_minute = age_in_hours * 60;
    int age_in_second = age_in_minute * 60;

    cout << " \nyour age in deys is  ";
    cout << age_in_days;
    cout << "\nyour age in hours is ";
    cout << age_in_hours;
    cout << "\nyour age in minute is ";
    cout << age_in_minute;
    cout << "\nyour age in second is ";
    cout << age_in_second;

    return 0;
}