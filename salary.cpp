#include <iostream>
using namespace std;

int main() {
    const int size = 5;   
    int *salArray = new int[size];   // dynamic memory allocation

    // Input salaries
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> salArray[i];
    }

    // Apply increment formula
    for (int i = 0; i < size; i++) {
        salArray[i] = salArray[i] + salArray[i] / (i + 1);
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << salArray[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] salArray;

    return 0;
}