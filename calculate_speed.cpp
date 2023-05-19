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
    cout << "====  calculate speed   ===\n";
    cout << "===========================\n";
    // تعديل 19 مايو 2023 
    // قمت بتغير نوع البيانات  بحيث تقبل الكسور 
    float distance;
    float time;

    cout << "wite the distance in metres  ";
    cin >> distance;
    cout << "distance in metres is  " << distance  << " m\n";

    cout << " \nwite the time in seconds  ";
    cin >> time;
    // تعديل 19 مايو 2023 
    //أضفت الدالة بحيث لا يمكن إدخال قيمة للزمن اقل من أو تساوي صفر 
        if (time <= 0)
            {
                cout << "Go back, write the time correctly time in seconds is not   "<< time ;
            }
        else
            {
                cout<<"time in seconds is " << time << "\n";

                float speed = distance / time;
                cout << "\nspeed is  " << speed << " m/s";
            }

    return 0;
}