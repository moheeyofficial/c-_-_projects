/*
I'm glad you saw my code
I created this code, I am Mahmoud Mohey, I created a award system application
(C++ code)
On May 21, 2023 while studying Fundamentals Of Programming With C++.
You can find out more about me and contact me through my website.
www.mahmoudmohey.com
*/
#include <iostream>
    using namespace std;

int main ()
{
    int num ;
    cin >> num ;

    switch (num)
    {
        case 150 :
        case 155 :
        case 160 :
        cout << "congratulations you won a laptop";
        break;

        case 115 :
        cout << "congratulations you won a iphone ";
        break;

        case 15 :
        case 65 :
        cout << "congratulations you won a car ";
        break;

        default :
        cout << "sorry, Better luck next time.";
        
    }

    return 0;
}