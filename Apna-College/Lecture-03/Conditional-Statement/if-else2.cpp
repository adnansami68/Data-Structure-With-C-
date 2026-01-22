#include<iostream>
using namespace std;
int main(){

    int age;

    cout<<"Enter your Age: ";
    cin>>age;

    if(age>=18){
        cout<<"You can Vote"<<endl;
    }else{
        cout<<"You can not Vote"<<endl;
    }

    return 0;

}
