#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int org=num;
    int cube=0;
    
    while(num>0){
        int rem=num%10;
        cube=cube+(rem*rem*rem);
        num=num/10;
    }
    if(org==cube){
        cout<<"ok";
    }
    else{
        cout<<"no";
    }

}