#include <iostream>
using namespace std;
double sumTwoNumbers(double num1, double num2);

int main()
{
    int choice;

    do
    {
        cout << "1) Sum two numbers" << endl;
        cout << "2) Calculate area of a circle" << endl;
        cout << "3) Calculate circumference of a circle" << endl;
        cout << "4) Calculate price with VAT" << endl;
        cout << "5) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {

            double num1, num2;

            cout << "Enter first number: ";

            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;
            cout << "Sum: " << sumTwoNumbers(num1, num2) << endl;
            break;
        }
        case 5:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
    } while (choice != 5);

    return 0;
}
double sumTwoNumbers(double num1, double num2)
{
    return num1 + num2;
}