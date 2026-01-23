#include<iostream>
using namespace std;

int main(){
    int n ;
    int sum=0;
    cout<<"Enter a Number :";
    cin>>n;

    for(int i=1 ;i<=n;i++){
        if(i%3==0){
            sum = sum+i;
        }

    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}
