#include<iostream>
using namespace std;
/*

****
*  *
*  *
****

*/

int main(){
    int n,m;
    cout<<"Enter num of rows: "<<endl;;
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;

    for(int i=0;i<n;i++){

        if(i==0 || i==n-1){
            for(int j=0;j<m;j++){
                cout<<"*";

            }}
        else{

            //star
            for(int k=0;k<1;k++){
                cout<<"*";
            }
            //space
            for(int k=0;k<m-2;k++){
                cout<<" ";
            }


            //star
            for(int k=0;k<1;k++){
                cout<<"*";
            }
        }
       
        
        cout<<endl;

    }
}