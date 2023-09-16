/* Prompt: Write a program that displays a weekly payroll report. A loop in the program should ask the user for
the employee number, gross pay, state tax, federal tax, and FICA withholdings. The loop will terminate when 0
is entered for the employee number. After the data is entered, the program should display totals for gross pay,
state tax, federal tax, FICA withholdings, and net pay. */

#include <iostream>
using namespace std;

int main()
{
    double employeeNum;
    float grossPay, stateTax, federalTax, ficaWithholdings;

    while (true)
    {
        cout << "Enter the employee number (0 to terminate): ";
        cin >> employeeNum;

        if (employeeNum == 0) // if 0 is inputted,
            break;            // loop is terminated

        cout << "Enter the gross pay: $";
        cin >> grossPay;

        cout << "Enter the state tax: $";
        cin >> stateTax;

        cout << "Enter the federal tax: $";
        cin >> federalTax;

        cout << "Enter the FICA withholdings: $";
        cin >> ficaWithholdings;

        float netPay = grossPay - stateTax - federalTax - ficaWithholdings;

        cout << "\n Weekly Payroll Report\n";
        cout << "-------------------------\n";

        cout << "Total Gross Pay: $" << grossPay << endl;
        cout << "Total State Tax: $" << stateTax << endl;
        cout << "Total Federal Tax: $" << federalTax << endl;
        cout << "Total FICA Withholdings: $" << ficaWithholdings << endl;
        cout << "Total Net Pay: $" << netPay << endl;
    }

    return 0;
}
