#include<iostream>
using namespace std;

/*
     A     
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA

*/

int main(){
//  int n;
//  cin>>n;
int n=5;


    for(int i=0;i<n;i++){
       
    //space
     for(int j=0;j<=n-i-1;j++){
        cout<<" ";
    }

 // characters
 char ch='A';
 for(int j=0;j<=i;j++){
    cout<<ch;
    ch++;
 }

 //step back
  ch -=2;
  for(int j=0;j<i;j++){
    cout<<ch;
    ch--;
  }


    //space
     for(int j=0;j<=n-i-1;j++){
        cout<<" ";
    }

    cout<<endl;

    }
}