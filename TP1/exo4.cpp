//
// Created by justine on 15/10/2025.
//
#include <iostream>

using namespace std;

// Recursive fonction to calculate the PGCD
int pgcd(int a, int b) {
    // "Anchor" part : when b = 0, the PGCD is a
    if (b == 0)
        return a;
    // "Recursive" part : PGCD(a, b) = PGCD(b, a % b)
    return pgcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter 2 integers : ";
    cin >> a >> b;

    cout << "PGCD of " << a << " & " << b << " is : " << pgcd(a, b) << endl;
    return 0;
}