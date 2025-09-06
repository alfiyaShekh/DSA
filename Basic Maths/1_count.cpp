#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int digit=0;
    while(n>0){
        int rem=n%10;
        digit+=1;
        n=n/10;
        
    }
    cout<<digit;
}