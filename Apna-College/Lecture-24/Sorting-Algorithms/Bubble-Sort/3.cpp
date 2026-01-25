#include<iostream>
using namespace std;

void bubbleSort(int n, int arr[]){

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printbubblesort(int n, int arr[]){

    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    
    cout<<endl;
}

int main(){

    int n=7;
    int arr[]={2,3,5,6,1,7,10};

    bubbleSort(n , arr);
    printbubblesort(n , arr);

    return  0;

}
