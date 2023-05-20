/*
I'm glad you saw my code
I created this code, I am Mahmoud Mohey, I  Created app
Scans three numbers and determines which one is the largest
(C++ code)
On May 20, 2023 while studying Fundamentals Of Programming With C++.
You can find out more about me and contact me through my website.
www.mahmoudmohey.com
*/

#include <iostream>
    using namespace std ;
    int main ()
    {
        int fNumber, sNumber, tNumber ;
        cout << "enter the first number ";
        cin >> fNumber ;
        cout << "\nenter the second number ";
        cin >> sNumber ;
        cout << "\nenter the third number ";
        cin >> tNumber ;
            if (fNumber > sNumber)
            {
                if (fNumber > tNumber)
                {
                    cout << "The biggest number is " << fNumber ;
                }
                else 
                {
                    cout << "The biggest number is " << tNumber ;
                }
            }
            else
            {
                  if (sNumber > tNumber)
                {
                    cout << "The biggest number is " << sNumber ;
                }
                else 
                {
                    cout << "The biggest number is " << tNumber ;
                }
            }
        return 0;
    }