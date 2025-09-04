#include<iostream>
using namespace std;

/*
      *
     ***
    *****
   *******
  *********
  *********
   *******
    *****
     ***
      *

*/


void print1(){
    for(int i=0;i<5;i++){

    //space

    for(int j=0;j<5-i-1;j++){
        cout<<" ";
    }

    //star
    for(int j=0;j<2*i+1;j++){
        cout<<"*";
    }

    //space
     for(int j=0;j<5-i-1;j++){
        cout<<" ";
    }
    cout<<endl;
}}

void print2(){
    for(int i=0;i<5;i++){

        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        
        //star
        for(int j=0;j<2*5-(2*i+1);j++){
            cout<<"*";
        }


        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    print1();
    print2();
}

