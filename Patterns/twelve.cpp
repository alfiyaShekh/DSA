#include<iostream>
using namespace std;
/*

1      1
12    21
123  321
12344321

*/

int main(){
    for(int i=0;i<4;i++){


    // star
      for(int j=1;j<=i+1;j++){
        cout<<j;
      }

    //space

    for(int j=0;j<=8-(2*i+2);j++){
        cout<<" ";
    }

    //star
    for (int j = i + 1; j >= 1; j--) {
            cout << j;
        }
      cout<<endl;
    }
    
}