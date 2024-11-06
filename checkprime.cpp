#include <iostream>
using namespace std;
//create a class to check if the given number is prime or not

class PrimeChecker {
public:
    string isPrime(int num) {
        if (num <= 1) {
            cout << "It is already said that 1 is Not a prime number" << endl;
        }
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                cout << "Not a prime number" << endl;
            }
            else{
                cout << "It is a prime number" << endl;
            }
        }
        
    }
};

int main() {
    PrimeChecker p;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << p.isPrime(n) << endl;
    return 0;
}


