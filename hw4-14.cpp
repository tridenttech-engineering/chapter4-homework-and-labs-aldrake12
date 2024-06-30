// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold 
//Revised by Andrew Drake on 06/30/2024

#include <iostream>
using namespace std;

int main() {

  //declare all variables
  int small = 0;
  int medium = 0;
  int large = 0;
  int family = 0;
  int total = 0;
  double smallPercent = 0.0;
  double mediumPercent = 0.0;
  double largePercent = 0.0;
  double familyPercent = 0.0;

  //ask for input
  cout << "Enter number of small pizzas sold: ";
  cin >> small;
  cout << "Enter number of medium pizzas sold: ";
  cin >> medium;
  cout << "Enter number of large pizzas sold: ";
  cin >> large;
  cout << "Enter number of family pizzas sold: ";
  cin >> family;

  //calculate total
  total = small + medium + large + family;
  
  //calculate percentages
  smallPercent = static_cast<double>(small) / total * 100;
  mediumPercent = static_cast<double>(medium) / total * 100;
  largePercent = static_cast<double>(large) / total * 100;
  familyPercent = static_cast<double>(family) / total * 100;
  
  //display totals and percentages
  cout << "Total pizzas sold: " << total << endl;

  cout << "Percentage that were small pizzas " << smallPercent << endl;
  cout << "Percentage that were medium pizzas " << mediumPercent << endl;
  cout << "Percentage that were large pizzas " << largePercent << endl;
  cout << "Perecentage that were family pizzas " << familyPercent << endl;
  
  return 0;
} // end of main function