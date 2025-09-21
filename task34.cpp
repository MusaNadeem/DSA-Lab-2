#include <iostream>
#include <cstring> // for strlen
using namespace std;

int main() {
    int size;

    cout << "Enter the length of the string: ";
    cin >> size;

    // Allocate memory dynamically (+1 for null terminator)
    char *str = new char[size + 1];

    cout << "Enter the string: ";
    cin.ignore(); // clear newline left in buffer
    cin.getline(str, size + 1);

    // Reverse the string in place
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;

    // Free the allocated memory
    delete[] str;

    return 0;
}
