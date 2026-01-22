#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Your Marks:  ";
    cin>>n;

    if(n>=80){

        cout<<"A+"<<endl;
        cout<<"Congratulations"<<endl;

    }else if(n>=40){

        cout<<"Pass"<<endl;

    }else{

        cout<<"Fail"<<endl;

    }
    return 0;
}

