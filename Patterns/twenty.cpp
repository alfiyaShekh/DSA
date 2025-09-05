#include<iostream>
using namespace std;

/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/


void first(){
 
    int n=5;
    for(int i=0;i<n;i++){

        //star
         for(int j=0;j<i+1;j++){
            cout<<"*";
         }

        //space
        int space=2*n-(2*i+2);
        for(int j=0;j<=space;j++){
            cout<<" ";
        }


        //star
        for(int j=0;j<i+1;j++){
            cout<<"*";
         }
         cout<<endl;
    }
}

void second(){
    int n=4;
    for(int i=0;i<n;i++){
    //star
     for(int j=0;j<n-i;j++){
        cout<<"*";
     }


    //space
     int space=i*2+2;
     for(int j=0;j<=space;j++){
        cout<<" ";
     }

    //star
    for(int j=0;j<n-i;j++){
        cout<<"*";
     }
     cout<<endl;

}}


int main(){
    first();
    second();
}