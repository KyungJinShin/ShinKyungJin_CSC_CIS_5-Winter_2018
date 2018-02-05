/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on February 4, 2018, 3:20 PM
 * Purpose:  Charge account validation
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int list(int[], int, int); //The list is included 18 valid account numbers,

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=18; //18 valid account numbers
    int valid[SIZE]={ 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
    8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
    1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };
    int num; //Account number thatinput
    int result; //Result wheter valid or invalid
    
    //Input Variables
    cout<<"Enter your charge account number in 7-digit numbers"<<endl;
    cin>>num; //input 7-digit numbers 0 to 9
    
    //Output values
    result = list(valid,SIZE,num);
    if(result == -1){ //getting -1 is not valid
        cout<<"Account number "<<num<<" is invalid "<<endl;
    }else{  //anything else than -1
        cout<<"Account number "<<valid[result]<<" is valid "<<endl;
    }
    
    //Exit stage right!
    return 0;
}

int list(int a[], int n, int val){  //a=array, n=size, val=value
    int i=0;      //initialzie integer i is 0
    int posit=-1; //position
    bool found=false; //boolean is true or false
    while (!found && i < n){  //loops until found is not true
        if (a[i] == val){    //if input value and the list numbers are same --
            found=true;      // -- it is true
            posit=i;         // -- then the position will be i (input number)
        }
        i++;
    }
    return posit; //return to position
}
