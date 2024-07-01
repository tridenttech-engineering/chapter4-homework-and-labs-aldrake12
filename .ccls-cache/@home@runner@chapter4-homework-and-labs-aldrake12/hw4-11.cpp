// Introductory11.cpp - displays ending balance
// Revised by Andrew Drake on 06/28/2024

#include <iostream>
using namespace std;

int main() {
  //declare variables
  double beginningBalance = 0.0;
  double totalDeposits = 0.0;
  double totalWithdrawals= 0.0;
  double endingBalance = 0.0;

  //ask for input
  cout << "Enter the beginning balance: "; 
  cin >> beginningBalance;
  cout << "Enter total deposits for the month: ";
  cin >> totalDeposits;
  cout << "Enter total withdrawals for the month: ";
  cin >> totalWithdrawals;

  //calculate the ending balance
  endingBalance = beginningBalance + totalDeposits - totalWithdrawals;
  
  //display the ending balance
  cout << "Ending balance " << endingBalance << endl;

  return 0;
} // end of main functio