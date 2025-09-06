#include<iostream>
using namespace std;

/*
  
  ****     ****  
 ******   ******
******** ********
*****************
 ***************
  *************
   ***********
    *********
     *******
      *****
       ***
        *

*/

int main(){
    int n=3;

    // first 3 lines
    for(int i=0;i<3;i++){

    //space
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }


    //star
    int star=n+(i*2+1);
    for(int j=0;j<star;j++){
        cout<<"*";
    }


    //space
    int space=2*n-(2*i+1);
    for(int j=0;j<space;j++){
        cout<<" ";
    }


    //star
    for(int j=0;j<star;j++){
        cout<<"*";
    }



    //space
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    cout<<endl;
    }

    //invert triangle
    int m=9;
    for(int i=0;i<m;i++){

        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }


        //star
        int star=2*m-(2*i+1);
        for(int j=0;j<star;j++)
        {
            cout<<"*";
        }


        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}