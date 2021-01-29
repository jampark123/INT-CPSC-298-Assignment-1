#include <iostream>

using namespace std;
int main ()

{
  /*
  assignment 1
  problem 1

  Program takes the package weight in ounces and converts it into tons.
  */
  
  //Package weight in ounces.
  double packageWeight;
  //Package weight in tons.
  double metricTonWeight;

  //Prompts the user to add the package weight in ounces.
  cout << "Enter package weight in ounces: ";
  cin >> packageWeight;

  //Calculates the package weight in tons based on the fact that one ton
  //contains 35,273.92 ounces.
  metricTonWeight = packageWeight / 35273.92;
  //Outputs the weight of the package in tons.
  cout << "Package is " << metricTonWeight << " tons." << endl;
}
