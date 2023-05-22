/*
I'm glad you saw my code
I created this code, I am Mahmoud Mohey, I created a discount application
(C++ code)
On May 21, 2023 while studying Fundamentals Of Programming With C++.
You can find out more about me and contact me through my website.
www.mahmoudmohey.com
*/

#include <iostream>
    using namespace std;

int main ()
{
    int price = 1000 , years , bonus , discount ;
    cout <<"enter years " ;
    cin >> years;
    cout <<"enter bonus " ;
    cin >> bonus ;
    cout <<"\nprice is "<< price << endl;
    switch (years)
    {
        case 1 :
        case 2 :
        discount = 100 ;
        break;
        case 3 :
        discount = 150 ;
        break;
        case 4 :
        discount = 200 ;
        break;
        case 5 :
        discount = 250 ;
        break;
        case 6 :
        discount = 250 ;
        break;
        case 7 :
        discount = 250 ;
        break;
        case 8 :
        discount = 250 ;
        break;
        case 9 :
        discount = 300 ;
        break;
        case 10 :
        discount = 400 ;
        
    }

        switch (bonus)
    {
        case 20 :
        discount += 20 ;
        break;
        case 40 :
        discount += 40 ;
        break;
        case 60 :
        discount += 60 ;
        break;
        case 80 :
        discount += 80 ;
        break;
        case 100 :
        discount += 100 ;
        break;
        
    }
    price -= discount ;
    cout <<"the new discount is "<< discount ;
    cout <<"\nthe new price is "<< price ;
    
    return 0;
}