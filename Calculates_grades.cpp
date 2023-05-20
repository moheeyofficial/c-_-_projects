// حساب التقديرات 
/*
I'm glad you saw my code
I created this code, I am Mahmoud Mohey, I  Created Calculates grades app
(C++ code)
On May 20, 2023 while studying Fundamentals Of Programming With C++.
You can find out more about me and contact me through my website.
www.mahmoudmohey.com
*/

#include <iostream>
    using namespace std ;
    int main ()
    {
        float Degree, Total_marks, Appr , percentage ;
        cout << "enter Your score ";
        cin >> Degree ;
        cout << "enter total score ";
        cin >> Total_marks ;

        percentage = (Degree / Total_marks)*100 ;
        if (percentage >=90 )
        cout << "Your grade is excellent";
        else if (percentage >=80 && percentage < 90)
        cout << "Your grade is very good";
         else if (percentage >=70 && percentage < 80)
        cout << "Your grade is good";
         else if (percentage >=50 && percentage < 70)
        cout << "Your grade is poor";
        else 
        cout << "you are fail";

        return 0;
    }

