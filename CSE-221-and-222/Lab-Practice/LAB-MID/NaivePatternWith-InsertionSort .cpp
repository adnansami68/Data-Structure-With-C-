#include <iostream>
using namespace std;


void insertionsort(int n , int arr[]){
    for(int i=1; i<n; i++){
        int currentValue= arr[i];
        int previousValue= i-1;

        while(previousValue>=0 && arr[previousValue]>currentValue){
            arr[previousValue + 1]= arr[previousValue];
            previousValue --;
        }
        arr[previousValue + 1]=currentValue;
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
    string P1 = "bca", P2 = "ba", P3 = "aca";
    
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

    insertionsort(count, indices);

    cout << "Sorted Starting Indices: ";
    for (int i = 0; i < count; i++) {
        cout << indices[i] << " ";
    }
    cout << endl;

    return 0;
}
