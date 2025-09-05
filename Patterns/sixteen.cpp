#include<iostream>
using namespace std;
/*
A
BB
CCC
DDDD
EEEEE

*/

int main(){
    for(int i=0;i<5;i++){
        char c='A';
        c=c+i;
        for(int j=0;j<=i;j++){
           cout<<c;
        }
        cout<<endl;
    }
}