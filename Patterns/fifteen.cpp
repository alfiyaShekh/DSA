#include<iostream>
using namespace std;

/*

ABCDE
ABCD
ABC
AB
A

*/

// for(int i=5;i<=1;i--){
//     char c='A';
//     for(int j=1;j<=i;j++)
//     {
//         cout<<ch;
//         ch=ch+1;
//     }
// }

int main(){
                                                                                                                                                                                                                                                                                                                                                                                                                                                
for(int i=0;i<5;i++){
    char ch='A';
    for(int j=5;j>i;j--){
        cout<<ch;
        ch=ch+1;
    }
    cout<<endl;
}

}