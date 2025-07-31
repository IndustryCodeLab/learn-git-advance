#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;

    cout << "Enter a string: ";
    getline(cin, sentence);


    for (int i = 0; i < sentence.length() / 2; i++) 
    {
        swap(sentence[i], sentence[sentence.length() - 1 - i]);
    }

    cout << "Reversed string: " << sentence;

    return 0;
}