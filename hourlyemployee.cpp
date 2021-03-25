/*File: hourlyemployee.cpp*/
#include <iostream>
#include <iomanip>
#include <string>

#include "hourlyemployee.h"

using namespace std;

HourlyEmployee::HourlyEmployee(long id, const string &last, const string &first, const string &initial, int dept, double HoursWorked, double HourlyRate) 
{
	setIdNum(id);
	setLastName(last);
	setFirstName(first);
	setMiddleInitial(initial);
	setDeptCode(dept);
	
	setHR(HourlyRate);
	setHours(HoursWorked);
	SalaryCalc();
	
}

void HourlyEmployee::setHR(double HourlyRate)
{
	myHourlyRate = HourlyRate;
}

double HourlyEmployee::getHR() 
{
	return myHourlyRate;
}

void HourlyEmployee::setHours(double HoursWorked)
{
	myHours = HoursWorked;
}

double HourlyEmployee::getHours() 
{
	return myHours;
}

void HourlyEmployee::SalaryCalc() 
{
	
	myWeeklySalary = 0;
	if (myHours > 40)
	{
		overtime = myHours - 40;
		myWeeklySalary = ((40 * myHourlyRate) + (1.5 * myHourlyRate * overtime));
	}
	else if (myHours >= 0 && myHours <= 40 )
	{
	 	overtime = 0;
		myWeeklySalary = (myHours * myHourlyRate);	
	}
 	
}

void HourlyEmployee::printSalary() 
{
	cout << endl;
	printEmployee();
	cout << "The Hours Worked is: " << myHours << endl;
	cout << "The Hourly Rate is: " << myHourlyRate << endl;
	cout << "Overtime: " << overtime << endl;
	cout << "The weekly salary is: " << myWeeklySalary << endl;
	
}
