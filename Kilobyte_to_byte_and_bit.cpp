/*
I'm glad you saw my code
I created this code, I am Mahmoud Mohi, I created a code
that calculates the number in kilobytes and how much it equals in two units, bytes and bits
(C++ code)
On May 1, 2023 while studying Fundamentals Of Programming With C++.
You can find out more about me and contact me through my website.
www.mahmoudmohey.com
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout << "-------------------------------------\n";
    cout << "Calculate how many kilobytes you want\n";
    cout << "-------------------------------------\n";

    int num_kilobyte;
    cout << "Write the number in kilobytes  ";
    cin >> num_kilobyte;

    // int num_mega = num_kilobyte / 1024 ;
    // int num_giga = num_mega / 1024 ;
    // int num_byte = num_kilobyte * 1024 ;
    // int num_bit  = num_byte * 8 ;

    double num_byte = num_kilobyte * 1024;
    double num_bit = num_byte * 8;

    // cout << "\n the number of gigabytes is " << num_giga << " GB \n" ;
    // cout << "\n the number of megabytes is " << num_mega << " MB \n" ;

    cout << "\n the number of kilobytes is " << num_kilobyte << " kilobytes \n";
    cout << setprecision(15);
    cout << " the number of bytes is " << num_byte << " bytes \n";
    cout << " the number of bit is " << num_bit << " bit \n";
}
