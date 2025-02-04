//Lab4-2.cpp - displays a salesperson's commission
//Revised by Andrew Drake on 06/28/2024

#include <iostream>
using namespace std;

int main()
{
  //declare named constant and variables
  const double COMM_RATE = 0.1;
  double sales = 0.0;
  double commission = 0.0;

  //enter input item
  cout << "Sales amount: ";
  cin >> sales;

  //calculate and display the commision
  commission = sales * COMM_RATE;
  cout << "Commission: $" << commission << endl;

  return 0;

} //end of main function