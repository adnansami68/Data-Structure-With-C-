#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
      
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}


void naivePatternMatch(string text, string pattern, int indices[], int &count) {
    int n = text.length();
    int m = pattern.length();

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m) {
            indices[count] = i; 
            count++;
        }
    }
}

int main() {
    string T = "aabcabaacba";
    string P1 = "ab", P2 = "ba", P3 = "cb";
    
    int indices[50]; 
    int count = 0;   

   
    naivePatternMatch(T, P1, indices, count);
    naivePatternMatch(T, P2, indices, count);
    naivePatternMatch(T, P3, indices, count);

    cout << "Unsorted Starting Indices: ";
    for (int i = 0; i < count; i++) {
        cout << indices[i] << " ";
    }
    cout << endl;

    selectionSort(indices, count);

    cout << "Sorted Starting Indices (Ascending): ";
    for (int i = 0; i < count; i++) {
        cout << indices[i] << " ";
    }
    cout << endl;

    return 0;
}
