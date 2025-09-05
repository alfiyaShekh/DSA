#include<iostream>
using namespace std;

/*

4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int value = max(abs(i - (n/2)), abs(j - (n/2))) + 1;
            cout<<value;

        }
        cout<<endl;
    }
}