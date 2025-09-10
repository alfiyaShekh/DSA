#include<iostream>
using namespace std;

/*
Base Condition :- The condition where we can stop the rescursive function 
                  called as base condition.
*/
int cut=0;
void exe(){
    if(cut==5) // base condition
    return;
    
    cout<<cut<<endl;;
    cut++;
    exe();
}

int main(){
    exe();
}