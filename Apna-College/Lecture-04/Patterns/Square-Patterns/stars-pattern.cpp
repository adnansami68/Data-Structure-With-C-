#include<iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=0;i<n;i++){ //outer loop
        for(int j=0;j<n;j++){ //inner loop
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
