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


void insertElement(int arr[], int &n, int value, int index) {
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[index] = value;
    n++;
}

void deleteElement(int arr[], int &n, int index) {
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}


int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int a[20] = {3, 7, 2, 4, 8, 1, 9};
    int n = 7;

    cout << "Initial Array: ";
    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;

   
    insertElement(a, n, 6, 2);

   
    deleteElement(a, n, 1);

    
    insertElement(a, n, 5, 1);

    cout << "Array after Operations: ";
    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;

 
    insertionsort(n, a);

    cout << "Sorted Array (Ready for Binary Search): ";
    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;

   
    int target = 8;
    int resultIndex = binarySearch(a, 0, n - 1, target);

    if (resultIndex != -1)
        cout << "Element " << target << " is found at index " << resultIndex << " in the sorted array." << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
