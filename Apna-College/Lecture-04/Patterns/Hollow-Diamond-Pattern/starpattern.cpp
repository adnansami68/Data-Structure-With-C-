#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // --- TOP PART ---
    for(int i = 0; i < n; i++) {
        // Outer Spaces 
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        if(i != 0) {
            // Inner Spaces
            
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // --- BOTTOM PART ---
    for(int i = n - 2; i >= 0; i--) {
        // Outer Spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        if(i != 0) {
           
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
