#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter Character: ";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"LowerCase"<<endl;
    }else{
        cout<<"Upper Case"<<endl;
    }

    return 0;

}
