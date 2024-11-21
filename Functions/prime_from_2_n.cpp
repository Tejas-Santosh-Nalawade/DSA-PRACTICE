#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to print prime numbers from 2 to n
void printPrimes(int n) {
    if (n < 2) {
        cout << "No primes in this range." << endl;
        return;
    }
    cout << "Prime numbers from 2 to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cout << "Enter the value of n: ";
        cin >> n;
        printPrimes(n);
    }
   
    return 0;
}
