/*File: salariedemployee.cpp*/
#include <iostream>
#include "employee.h"

#include "salariedemployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(long id,
				  				   const string &last,
				 				   const string &first,
								   const string &initial,
		        				   int dept,
								   double Sal) // for Salary assigned from user
{
	setIdNum(id);
	setLastName(last);
	setFirstName(first);
	setMiddleInitial(initial);
	setDeptCode(dept);
	setSalary(Sal);   // user assigned value is passed to the private member of derived class
	SalaryCalc();
	
}

void SalariedEmployee::setSalary(double Sal)
{
	mySalary = Sal; //assign the private member mySalary
 } 
				
double SalariedEmployee::getSalary()
{
	return mySalary;
}

double SalariedEmployee::SalaryCalc()
{
	fraction = 1.000;
	myMonthlySalary = (mySalary * fraction)/12;
	return myMonthlySalary;
}
void SalariedEmployee::printSalariedEmployee() 
{
	cout << endl;
	printEmployee();
	cout << "The Annual Salary is: " << mySalary << endl;
	cout << "The Monthly Salary is: " << myMonthlySalary << endl;
 
}
	
