#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 0;

    cout << "Enter the number of Fibonacci terms to generate: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    long long first = 0, second = 1;

    cout << "Fibonacci Series: " << endl;

    for (int i = 1; i <= n; ++i) {
        cout << first << " ";

        long long next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}
