/*
I'm glad you saw my code
I created this code, I am Mahmoud Mohey, I created a calculator application
(C++ code)
On May 20, 2023 while studying Fundamentals Of Programming With C++.
You can find out more about me and contact me through my website.
www.mahmoudmohey.com
*/
#include <iostream>
using namespace std;
int main()
{
   cout << "Hi.In your calculator\n";

   float num1, num2;
   // short oper;
   char oper;

   cout << "enter the first number ";
   cin >> num1;
   // cout << "\nhelp :\n (1) +\t (2) -\t (3) *\t  (4) / " << endl;
   cout << "\nEnter Type the number of the calculation ";
   cin >> oper;

   // if (oper == 1 || oper==2 || oper==3 || oper==4)
   // {
   //    cout << "\nenter the second number ";
   //    cin >> num2;
   //    if (oper == 1)
   //       cout << "\nThe output is " << num1 + num2;
   //    else if (oper == 2)
   //       cout << "\nThe output is " << num1 - num2;
   //    else if (oper == 3)
   //       cout << "\nThe output is " << num1 * num2;
   //    else if (oper == 4)
   //       cout << "\nThe output is " << num1 / num2;
   // }
   // else
   // {
   //    cout <<  "\nSorry, The available arithmetic operations are"<< 
   //             "\naddition, subtraction, multiplication and division.";
   // }

// قمت بتغير نوع المتغير الخاص بالعملية الحسابية لتحسين الأستخدام
//  و قمت بإضافة شرط في عملية القسمة

      if (oper == '+' || oper=='-' || oper=='*' || oper=='/')
   {
      cout << "\nenter the second number ";
      cin >> num2;
      if (oper =='+' )
      {
         cout << "\nThe output is " << num1 + num2;
         cout <<"\n"<< num1 <<" " <<oper<<" "<< num2 <<" " <<  '=' <<" "<< num1 + num2;
      }
      else if (oper == '-')
      {
         cout << "\nThe output is " << num1 - num2;
         cout <<"\n"<< num1 <<" " <<oper<<" "<< num2 <<" " <<  '=' <<" "<< num1 - num2;
      }
   
      else if (oper == '*')
      {
         cout << "\nThe output is " << num1 * num2;
         cout <<"\n"<< num1 <<" " <<oper<<" "<< num2 <<" " <<  '=' <<" "<< num1 * num2;
      }
      else if (oper == '/')
      {
         if(num2 != 0)
         {
         cout << "\nThe output is " << num1 / num2;
         cout <<"\n"<< num1 <<" " <<oper<<" "<< num2 <<" " <<  '=' <<" "<< num1 / num2;
         }
         else
         cout << "Can't be divided by zero";
      }
   }

   else
   {
      cout <<  "\nSorry, The available arithmetic operations are"<< 
               "\naddition, subtraction, multiplication and division.";
   }

   return 0;
}