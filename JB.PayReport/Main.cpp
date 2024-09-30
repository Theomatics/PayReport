
// Pay Report
// Jonathan Bloedorn

#include <iostream>
#include <conio.h>

using namespace std;

struct Employee {
    int ID;
    string FirstName;
    string LastName;
    float HoursWorked;
    float HourlyRate;
};

int main()
{
    // Get the number of employees
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    // Build the array of Employees
    Employee* Employees = new Employee[numEmployees];
    cout << "\n";
    for (int i = 0; i < numEmployees; i++) {
        cout << "Enter the ID for Employee " << i+1 << " : ";
        cin >> Employees[i].ID;
        cout << "Enter the First Name for Employee " << i + 1 << " : ";
        cin >> Employees[i].FirstName;
        cout << "Enter the Last Name for Employee " << i + 1 << " : ";
        cin >> Employees[i].LastName;
        cout << "Enter the Hours Worked for Employee " << i + 1 << " : ";
        cin >> Employees[i].HoursWorked;
        cout << "Enter the Hourly Rate for Employee " << i + 1 << " : ";
        cin >> Employees[i].HourlyRate;
        cout << "\n";
    }

    // Print the report
    cout << "Pay Report\n----------\n";

    float totalPay = 0.0;

    for (int i = 0; i < numEmployees; i++) {
        float weeklyPay = Employees[i].HoursWorked * Employees[i].HourlyRate;
        totalPay += weeklyPay;
        cout << Employees[i].ID << ". " << Employees[i].FirstName << " " << Employees[i].LastName << ": $" << weeklyPay << "\n";
    }
    cout << "\nTotal Pay: $" << totalPay;

	(void)_getch();
	return 0;
}
