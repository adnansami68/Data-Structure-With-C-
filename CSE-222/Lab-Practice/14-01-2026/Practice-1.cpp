#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Choose Number : ";
    cin>>n;
    int num;
   
    cout<<"Enter Number 1 : ";
    cin>>num;
    int sum=num;
     
    int maxValue=num;
    int minValue=num;

    for(int i=2 ; i<=n;i++){
        cout<<"Enter number "<<i<<" = ";
        cin>>num;
        sum=sum+num;

    if(num>maxValue){
        maxValue=num;
    }else if(num<minValue){
        minValue=num;
    }

}
    cout<<"Sum ="<<sum<<endl;
    cout<<"Avrage ="<<(sum/n)<<endl;
    cout<<"Maximum Value ="<<maxValue<<endl;
    cout<<"Minimum Value ="<<minValue<<endl;

return 0;

}
