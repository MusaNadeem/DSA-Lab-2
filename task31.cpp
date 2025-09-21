#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Pointer is pointing to memory address: " << ptr << endl;
    cout << "Value at that memory address: " << *ptr << endl;
}

int main() {
    // Stack allocation
    int iValue = 42;
    cout << "Analyzing stack-allocated int:" << endl;
    analyze_pointer(&iValue);

    // Heap allocation
    int *hValue = new int;
    *hValue = 99;
    cout << "\nAnalyzing heap-allocated int:" << endl;
    analyze_pointer(hValue);

    // Free memory
    delete hValue;

    return 0;
}
