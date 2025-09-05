#include<iostream>
using namespace std;

/*

A
AB
ABC
ABCD
ABCDE

*/

int main(){
    for(int i=0;i<5;i++){
        char c='A';
        for(int j=0;j<=i;j++){
            cout<<c;
            c=c+1;
        }
        cout<<endl;
    }
}