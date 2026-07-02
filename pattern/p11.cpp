#include <bits/stdc++.h>
using namespace std;

// Function to print the pattern
void pattern12(int N) {
    // Initial number of spaces in the first row
    int spaces = 2 * (N - 1);
    
    // Outer loop for the number of rows
    for (int i = 1; i <= N; i++) {
        
        // Inner loop to print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        // Inner loop to print spaces in the middle
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        
        // Inner loop to print numbers in decreasing order
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
        // Move to the next line after printing the row
        cout << endl;
        
        // Decrease spaces by 2 after each row
        spaces -= 2;
    }
}

int main() {
    // Set the value of N
    int N = 5;
    pattern12(N); // Call the function to print the pattern

    return 0;
}
