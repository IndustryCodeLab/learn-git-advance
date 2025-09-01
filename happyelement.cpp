#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter number from 10 to 20: ";
    cin >> num;

    if (num > 10 && num < 20) {
        if (num % 2 == 0 && num % 3 == 0) {
            cout << num << endl;
        } else {
            cout << "invalid input" << endl;
        }
    } else {
        cout << "invalid input" << endl;
    }

    return 0;
}
