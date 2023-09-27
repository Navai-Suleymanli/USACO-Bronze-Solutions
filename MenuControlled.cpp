#include <iostream>
using namespace std;

int Restore(int n) {
    return 1;
}

int Add(int n) {
    return n + 1;
}

int Negate(int n) {
    return -n;
}

int Multiply(int n) {
    return n * 2;
}

int main() {
    int n = 1;
    int choice;

    do {
        cout << "Current value of n: " << n << endl;
        cout << "Menu:" << endl;
        cout << "0. Restore the initial value (n = 1)" << endl;
        cout << "1. Add 1" << endl;
        cout << "2. Negate the number (+/-)" << endl;
        cout << "3. Multiply by 2" << endl;
        cout << "9. Exit" << endl;

        cin >> choice; // Get user input for the menu choice

        switch (choice) {
            case 0:
                n = Restore(n);
                break;
            case 1:
                n = Add(n);
                break;
            case 2:
                n = Negate(n);
                break;
            case 3:
                n = Multiply(n);
                break;
            case 9:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }

    } while (choice != 9);

    return 0;
}
