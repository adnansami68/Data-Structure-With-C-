#include<iostream>
using namespace std;

int main(){

    string a;
    cin >> a;
    string b;
    cin >> b;
    

    int m=a.size();
    int n=b.size();

    int ans=-1;

    for(int i=0;i<(m-n)+1;i++){
       bool flag=true;
    for(int j=0;j<n&&flag==true;j++){
        if(a[j+i]!=b[j]){
            flag = false;
            break;
        }
    }
    if(flag==true){
        ans=i+1;
        break;
    }
  }
  cout << ans << endl;
}
