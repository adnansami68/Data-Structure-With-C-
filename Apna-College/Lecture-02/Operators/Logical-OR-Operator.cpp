#include<iostream>
using namespace std;

int main(){
    cout<<(5<10 || 10>20)<<endl; //true || true -> true->1)
    cout<<(5<3 || 4>2)<<endl; //false || true -> true->1
    cout<<(5>10 || 4<2)<<endl; //false || false -> false->0
    cout<<(5>3 || 4<2)<<endl; //true || false -> true->1

    return 0;
    
}
