#include <iostream>

using namespace std;
int main ()
{
  /*
  assignment 1
  problem 3

  Program calculates the gross amount paid based on hours worked regularly and
  overtime. Then calculates the amounts witheld and the net total that could
  be taken home after the amounts are witheld.
  */

  //Hours worked both regularly and overtime.
  int regularHours;
  int overtimeHours;
  //Total pay for hours worked regularly and overtime.
  double grossRegularPay;
  double grossOvertimePay;
  //Payments for each hour worked regularly and overtime.
  double hourlyPay = 16.00;
  double hourlyOvertimePay;
  //Medical insurance fee is $10.00
  double medicalInsuranceFee = 10.00;
  //Tax rates. Social Security tax rate is 6%; federal rate is 14%; and state
  //rate is 5%.
  double ssTaxRate = 0.06;
  double federalTaxRate = 0.14;
  double stateTaxRate = 0.05;
  //Gross amount of money made based on hours worked regularly and overtime.
  double grossAmount;
  //Amounts withheld.
  double medicalWitholding;
  double ssWitholding;
  double federalWitholding;
  double stateWitholding;
  //Total amount of money that can be taken home.
  double netTakeHomePay;

  //Prompts the user to add the hours worked regularly and overtime.
  cout << "Enter hours worked for the week: ";
  cin >> regularHours;
  cout << "Enter hours worked overtime for the week: ";
  cin >> overtimeHours;


  //Calculates the gross amount pay that was worked for regular hours.
  grossRegularPay = hourlyPay * regularHours;

  //Calculates the pay for each overtime hour.
  hourlyOvertimePay = (3.0 / 2.0) * hourlyPay;

  //Calculates the gross amount pay that was worked for overtime hours.
  grossOvertimePay = hourlyOvertimePay * overtimeHours;

  //Calculates the gross pay amount based on regular pay and overtime pay.
  grossAmount = grossRegularPay + grossOvertimePay;

  //Calculates the total Social Security amount witheld which is 6% of gross
  //amount.
  ssWitholding = grossAmount * ssTaxRate;

  //Calculates the total Federal tax amount witheld which is 14% of gross
  //amount.
  federalWitholding = grossAmount * federalTaxRate;

  //Calculates the total state tax amount witheld which is 5% of gross amount.
  stateWitholding = grossAmount * stateTaxRate;

  //Makes medical witholding equal to medical insurance fee which is $10.00.
  medicalWitholding = medicalInsuranceFee;

  //Calculates the total take home pay by taking gross amount and subtracting
  //the witholding amounts.
  netTakeHomePay = grossAmount - (ssWitholding + federalWitholding + stateWitholding + medicalWitholding);

  //Prints the gross amount; the witholding amounts; and the total pay that
  //could be taken home.
  cout << "Gross pay is $" << grossAmount << "." << endl;
  cout << "Social Security Tax witholding is $" << ssWitholding << "." << endl;
  cout << "Federal Tax witholding is $" << federalWitholding << "." << endl;
  cout << "State Tax witholding is $" << stateWitholding <<  "." << endl;
  cout << "Medical witholding is $" << medicalWitholding << "." << endl;
  cout << "Net total take-home pay is $" << netTakeHomePay << "." << endl;
}
