/*
I'm glad you saw my code
I created this code, I am Mahmoud Mohey, I created a code
It prepares the income statement based on what you have learned
  During a lecture preparing financial statements
  in financial accounting
(C++ code)
On May 4, 2023 while studying Fundamentals Of Programming With C++.
You can find out more about me and contact me through my website.
www.mahmoudmohey.com
*/
#include <iostream>
using namespace std ;
int main ()
{
    cout << "==============================\n";
    cout << "== Income statement account ==\n";
    cout << "==============================\n";
    
    int sales, salesCost, profit_loss, administrative_expenses, net_profit_loss ;

    cout << " Enter the sales value  " ;
    cin >> sales ;
    cout << " Enter the sales cost value  " ;
    cin >> salesCost ;
    cout << " Enter the administrative expenses value  " ;
    cin >> administrative_expenses;

    profit_loss = sales - salesCost ;
    net_profit_loss = profit_loss - administrative_expenses;

    cout << " \n the sales value is   " << sales << endl ;
    cout << " the sales cost value is   " << salesCost << endl ;
    cout << " the total profit loss value is   " << profit_loss << endl  ;
    cout << " the administrative expenses value is   " << administrative_expenses <<endl ;
    cout << " the net profit or loss value is   " << net_profit_loss ;
    return 0; 

}