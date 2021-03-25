/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "employee.h"
#include "hourlyemployee.h"
#include "salariedemployee.h"

#include "employee.cpp"
#include "salariedEmployee.cpp"
#include "hourlyemployee.cpp"

using namespace std;

int main() 
{
  Employee
  e1 (001, "Jones", "Booker", "T", 22),
  e2 (002, "Hendrix", "Jimi", "NMI", 14),
  e3 (003, "Morrison", "Jim", "D", 03);
  
  e1.printEmployee();
  e2.printEmployee();
  

SalariedEmployee
  e4 (004, "Poudyal", "Oshan", "S", 21, 256000); //Annual Salary is 256,000
  
HourlyEmployee 
	e5 (003, "Morrison", "Jim", "D", 03, 80, 25), //Hourly Rate is 25 and Hours Worked is 80 (overtime)
	e6 (001, "Jones", "Booker", "T", 69, 25, 20); //Hourly Rate is 20 and Hours Worked is 25 (no overtime)
  
   
  e4.printSalariedEmployee();
  
  e5.printSalary();
  e6.printSalary();
 
  
	return 0;  
}

