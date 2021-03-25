/*File: hourlyemployee.h*/
#ifndef HOURLYEMPLOYEE
#define HOURLYEMPLOYEE

#include "employee.h"

class HourlyEmployee : public Employee
{
	public:
		
		HourlyEmployee(long = 0, const string & ="" , const string & ="", const string & = "", int =0, double = 0, double = 0);

	
		void setHours(double); //set hours worked
		void setHR(double); // set hourly rate
		double getHours(); // return hours worked
		double getHR(); // return hourly rate
		void SalaryCalc(); //calculates the salary
		void printSalary(); //prints the salary
	
	protected:
		double myHours, myHourlyRate, overtime, myWeeklySalary;
};

#endif
	
