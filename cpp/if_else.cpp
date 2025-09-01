#include<iostream>
using namespace std;
int main(){
    // ** if else **
    // int age;
    // cout<<"Enter the age: ";
    // cin>>age;
    // if(age>=18){
    //     cout<<"You are an adult";
    // }
    // else{
    //     cout<<"You are not an adult";
    // }


    // ** if-elseif-else **
    // int grade;
    // cout<<"Enter your grade: ";
    // cin>>grade;
    // if(grade>=80 && grade<=100){
    //     cout<<"A grade";
    // }
    // else if(grade<=79 && grade>=60){
    //    cout<<"B grade";
    // }
    // else if(grade>=50 && grade<=59){
    //     cout<<"C grade";
    // }
    // else if(grade>=45 && grade<=49){
    //     cout<<"D grade";
    // }
    // else if(grade>=25 && grade<=44){
    //     cout<<"E grade";
    // }
    // else{
    //     cout<<"F grade";
    // }


    // ** Nested if-else **
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age<18){
        cout<<"Not eligible for job";
    }
    else if(age>=18 && age<=54){
        cout<<"Eligible for Job";
    }
    else if(age<=57){
        cout<<"Eligible for Job";
        if(age>=55){
            cout<<"Retirment is soon !!";
        }
    }
    else{
        cout<<"Retirement :))";
    }

    return 0;
}