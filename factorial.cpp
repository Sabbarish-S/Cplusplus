#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;

    // Get input from the user
    cout << "Enter a positive integer: ";
    cin >> n;

    // Calculate factorial
    for (int i = 1; i <= n; i++) {
        factorial *= i; // Multiply factorial by i
        cout << "After multiplying by " << i << ", factorial is: " << factorial << endl;
    }

    // Display the result
    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}
