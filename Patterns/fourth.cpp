#include<iostream>
using namespace std;
/* 
 1
 22
 333
 4444
 55555
*/

void print(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    print();
}