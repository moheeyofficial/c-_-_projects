#include <iostream>
using namespace std ;
int main ()
{
    cout << "Welcome to our application that converts Character to ASCII . " << endl ;
    char character ;
    cout << "enter character value   " ;
    cin >> character ;
    cout << "\n your character value is   " << character << endl ;
    cout << " your character value in ASCII is   " << int (character) << endl ;
    
    return 0;
}