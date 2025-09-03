#include<iostream>
using namespace std;
/*
 12345
 1234
 123
 12
 1
*/

int main(){
    // for(int i=1;i<=5;i++){
    //     for(int j=i;j<=5;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
