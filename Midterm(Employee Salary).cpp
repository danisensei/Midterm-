#include<iostream>
using namespace std;

int main() {
	float salary;
		int i,choice, years;
	cout << "Enter Salary of an Employee :";
	cin >> salary;
	cout << "Enter how many years of increment do u want(years should not be 0): ";
	cin >> years;
	cout << "Does ur employee have Exceptional rating?\n Enter 1 for Yes and 2 for No : ";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		for ( i = 1;i <= years;i++) {
			salary = salary + (salary * 5 / 100);
			salary = salary + (salary * 2 / 100);
			cout << "The salary after " << i << " year/years is: " << salary<<endl;
		}
		break;

	}
	case 2:
	{for ( i = 1;i <= years;i++) {
		salary = salary + (salary * 5 / 100);
		cout << "The salary after " << i << " year/years is: " << salary << endl;
	}
	break;
	}
	default:
	{
		cout << "entered choice doesnt exist";
	}
	}
	

	return 0;
}
