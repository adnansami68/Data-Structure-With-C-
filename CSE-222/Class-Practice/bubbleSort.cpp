#include<iostream>
using namespace std;

void bubbleSort(int n, int arr[]){
    for(int i=0; i<n-1; i++){

        for(int j=0; j<n-i-1; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printbubbleSort(int n , int arr[]){
    for(int i=0; i<n ; i++){

        cout<<arr[i]<< " ";

    }
    cout<<endl;
}

int main(){
    int n=7;
    int arr[]={7, 4, 1, 3, 9, 2, 5};
    bubbleSort(n, arr);
    printbubbleSort(n, arr);

    return 0;
}
