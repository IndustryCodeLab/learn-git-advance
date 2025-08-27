#include <iostream>

using namespace std;

int main (){

    int num;
    int rv= 0;

    cout << "Enter a three digit number : ";
    cin >> num;


    while (num != 0 ){

        int digit = num % 10;
        rv = rv * 10 + digit ;
        num /= 10;

    }

    cout << "Revrsed number : " << rv ;
}