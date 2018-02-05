/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on February 4, 2018, 3:20 PM
 * Purpose:  Charge account validation modification
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int search(int[], int, int); //The list is included 18 valid account numbers,

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=18; //18 valid account numbers
    int valid[SIZE]={ 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
    8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
    1005231, 6545231, 3852085, 7576651, 7881200, 4581002 }; //The list of valid numbers
    int num;    //Account number thatinput
    int result; //Result wheter valid or invalid
    
    //Input Variables
    cout<<"Enter your charge account number in 6-digit numbers"<<endl;
    cin>>num; //Input of 6 numbers
    
    //Output values
    result = search(valid,SIZE,num);
    if(result == -1){ //If the number from result is negative 1(not possible for valid)
        cout<<"Account number "<<num<<" is invalid "<<endl;
    }else{             //Anything else than -1
        cout<<"Account number "<<valid[result]<<" is valid "<<endl;
    }
    
    //Exit stage right!
    return 0;
}

int search(int a[], int n, int val){  //a=array, n=size, val=value
    int i=0;      //Initialize i is 0
    int posit=-1; //position
    bool found=false; //boolean is true or false
    while (!found && i < n){ //loops until found is not true
        if (a[i] == val){       //if my list and input numbers are same,-- 
            found=true;         // -- it is true
            posit=i;            // -- then position will be i (input value)
        }
        i++;
    }
    return posit; //return to position
}
