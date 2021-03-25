/*File: salariedemployee.h*/
#ifndef SALARIEDEMPLOYEE
#define SALARIEDEMPLOYEE

#include "employee.h" 

#include <string>

class SalariedEmployee : public Employee
{
	public:
		SalariedEmployee(long = 0, const string & ="" , const string & ="", const string & = "", int = 0, double = 0.0);
	 				
		
		void setSalary(double); // sets the annual salary
		double getSalary(); // returns the annual salary
		double SalaryCalc(); // calculates the monthly salary
		void printSalariedEmployee(); // ptints annual and monthly salary
	
	protected:
		double mySalary, myMonthlySalary; 
		double fraction;
};

#endif

