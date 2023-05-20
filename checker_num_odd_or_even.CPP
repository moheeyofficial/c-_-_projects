/*
    I'm glad you saw my code
I created this code I am Mahmoud Mohy I created a code
He checks the number odd or even
(C++ code)
on May 20, 2023 while studying Fundamentals Of Programming With C++.
You can learn more about me and contact me through my website.
www.mahmoudmohey.com
*/

#include <iostream>
    using namespace std ;
    int main ()
    {
        cout << "Check the number odd or even \n" ;
        cout << "\nenter the number " ;
        int number ;
        cin >> number ;

        cout << (number%2 == 0 ? "The number is even. " : "The number is odd.") ;

        return 0;
    }