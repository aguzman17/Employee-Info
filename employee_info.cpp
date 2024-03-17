#include <iostream>
using namespace std;

struct date
{
	int day, year;
	string month;

};
struct emp_info
{
	date birthday;
	date hire_date;
	int id_number;
	double salary;
};
date some_day;
emp_info some_employee;
emp_info* all_employees[100];

int main()
{
	some_day.day = 14;
	some_day.month = 'June';
	some_day.year = 1995;

	some_employee.salary = 4500;
	some_employee.hire_date = some_day;

	cout << "Date: " << some_day.month << " " << some_day.day
		<< ", " << some_day.year << endl;

	cout << "Hire date: " << some_day.day << " " << some_day.month
		<< " " << some_day.year << " .And the salary is: $" << some_employee.salary << endl;

	for (int i = 0; i < 100; i++)
	{
		cout << "Insert the day of birth of employee" << i + 1;
		cin >> all_employees[i]->birthday.day;

		cout << "Insert the month of birth of employee" << i + 1;
		cin >> all_employees[i]->birthday.month;

		cout << "Insert the year of birth of employee" << i + 1;
		cin >> all_employees[i]->birthday.year;

		cout << "Insert the id of employee: " << i + 1;
		cin >> all_employees[i]->id_number;
	}

	for (int i = 0; i < 101; i++)
	{
	
		cout << "Employee: " << i + 1 << " id: ------ " << all_employees[i]->id_number 
			<< " birthday: " << all_employees[i]->birthday.day << " " << all_employees[i]->birthday.month 
			<< " " << all_employees[i]->birthday.year << endl;
	}

	return 0;
}
