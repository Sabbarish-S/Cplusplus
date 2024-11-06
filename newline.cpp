
#include <iostream>
#include <sstream>//+
using namespace std;


int main() {//+
    string n;
    cout << "Enter the the sentences to be converted to words." << endl;
    getline(cin, n);
    // use stringstream to convert string to word by word conversion//-
    stringstream iss(n);
    string word;

    while (iss >> word) {
        cout << word << endl;
    }

    return 0;//+
}
