#include <iostream>
using namespace std;

int findIndex(int arr[], int n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) return i;
    }
    return -1; 
}


void insertElement(int arr[], int &n, int value, int index) {
    if(index == -1) return; 
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[index] = value;
    n++;
}

void deleteElement(int arr[], int &n, int index) {
    if(index == -1) return;
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}


int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a[20] = {3, 7, 2, 4, 8, 1, 9};
    int n = 7;

    cout << "Initial Array: ";
    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;

  
    int idx7 = findIndex(a, n, 7);
    insertElement(a, n, 5, idx7);

   
    int idx4 = findIndex(a, n, 4);
    deleteElement(a, n, idx4);

 
    int idx1 = findIndex(a, n, 1);
    insertElement(a, n, 4, idx1);

    cout << "Array after Operations: ";
    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;

   
    int target = 8;
    int resultIndex = linearSearch(a, n, target);

    if (resultIndex != -1)
        cout << "Element " << target << " is found at index " << resultIndex << " using Linear Search." << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
