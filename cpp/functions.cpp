#include<iostream>
using namespace std;

// NOTE: void does not return anything
void print(string name){
    cout<<"hey "<<name;
}

int sum(int no1,int no2){
   return no1+no2;
}

int main(){
    string name;
    cin>>name;
    print(name);

    string name2;
    cin>>name2;
    print(name2);
    return 0;

    int no1,no2;
    cout<<"Enter first number: ";
    cin>>no1;
    cout<<"Enter second number: ";
    cin>>no2;
    cout<<"sum is: "<<sum(no1,no2)<<endl;

    cout<< sum(4,5);

}