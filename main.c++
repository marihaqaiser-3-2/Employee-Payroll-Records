#include <iostream>
#include <string>
using namespace std;

// Defining a structure to capture basic employee attributes
struct Employee {
    string employeeName;
    float employeeCompensation;
};

int main() {
    // Declaring an array of structures to hold data for 3 distinct employees
    Employee e[3];

    // Iterating through the array to collect dynamic user input
    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details for Employee " << i + 1 << endl;
        
        cout << "Employee Name: ";
        cin >> e[i].employeeName;
        
        // Clearing the trailing newline character from the input buffer
        cin.ignore(); 
        
        cout << "Employee Compensation: ";
        cin >> e[i].employeeCompensation;
    }

    return 0;
}
