#include<iostream>
using namespace std;

/* 
 Recursion : When function called itself called as 'Recursion'
 
 ~ In below program the loop will be continued until the memeory is 
 full or stack overflowd
*/

void fun(){
    cout<<"Hello"<<endl;
    fun();  // non-ending recursion
}

int main(){
    fun();
}