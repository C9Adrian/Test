//Adrian Ruiz
//Lecture Section 1001
//Lab Section 1004
//Assignment 01

#include <iostream> //The preprocessor directive to the iostream library
#include <iomanip>// The preprocessor directive to include the iomanipulator library
using namespace std;

const double TAX_RATE= 0.1;//Constannt for the tax rate
const double CLOTHES_RATE= 0.08;//Constant for the percentage of money spent on clothes
const double SCHOOL_RATE= 0.15;//Constant for the percentage of money spent on school supplies
const double SAVINGS_RATE= 0.3;//Constant for the percentage of money put into savings

int main()
{
  cout <<"Adrian Ruiz"<< endl;//Display for name
  cout <<"Lec Sec 1001"<< endl;
  cout <<"Lab Sec 1004"<< endl;
  cout <<"Assignment 01"<< endl;

  double hours_worked;//Variable for the hours worked
  double pay_rate;//Variable for the pay rate
  double gross_earnings;//Variable for the gross earnings before taxes

  cout<<fixed<<setprecision(2);//Setprecision to 2 for two decimal spots
  cout<<endl;
  cout<<"Please enter your pay rate"<< endl;//Prompt to enter pay rate
  cin>>pay_rate;//Input for the pay rate
  cout<<"Please enter your hours worked"<<endl;//Prompt to enter hours worked
  cin>>hours_worked;//Input for the hours worked
  gross_earnings= pay_rate * hours_worked;//Calculation for the gross earnings

  double taxes;//Variable for the amount paid in taxex
  double leftover;//Variable for the amount of money left after money is spent

  taxes = gross_earnings * TAX_RATE;//Calculation for taxes using the tax constant
  leftover = gross_earnings - taxes;//Calculation for money left after taxes
  double clothes;//Variable for money spent on clothes
  clothes = leftover * CLOTHES_RATE;//Calculation for money spent on clothes using the clothes constant
  double school;//Variable for money spent on school supplies
  school = leftover * SCHOOL_RATE;//Calculation for money spent on school supplies using the school constant
  leftover = leftover - (school+ clothes);//Calculation for the money left after both school and clothes is subtracted
  double savings;//Variable for the amount put into savings
  savings = leftover * SAVINGS_RATE;//Calculations for saving using the saving constant
  leftover = leftover - savings;//Calculation for the final amount

  cout <<"Estimated Gross Earnings: $"<< gross_earnings<< endl;//Display for different Variables
  cout <<"Estimated Taxes: $"<<taxes<< endl;
  cout <<"Amount Spent on Clothes: $"<< clothes<< endl;
  cout <<"Amount Spent on School Supplies: $"<< school<< endl;
  cout <<"Amoumt Put in Savings: $" << savings<< endl;
  cout <<"Leftover Spending Money: $"<< leftover<<endl;

  return 0;
}
