#include<iostream>
using namespace std;

/*  ****
    ****
    ****
    ****  */

// for pattern printing outer one is for rows and inner one is for column
// 1)count number of lines (for outer loop)
// 2) focus on the columns and connect them somehow to the rows
// 3) whatever u are printing print them inside the inner for loop
// 4)Observe symmetry



void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<"*";
    //     }
    //      cout<<endl;
    // }
   
    int row;
    cin>>row;
    print(row);

}