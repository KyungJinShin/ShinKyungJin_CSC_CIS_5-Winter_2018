/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on February 4, 2018, 3:20 PM
 * Purpose:  Lottery Winners
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int list(int[], int, int); //The list is 10 lottery numbers,

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=10; //10 lottery numbers
    int win[SIZE]={ 513579, 26791, 26792, 33445, 55555,
    62483, 77777, 79422, 85647, 93121 }; //The list of winning numbers
    int num; //Numbers that user inputs
    int result; //Result wheter winning or losing lottery
    
    //Input Variables
    cout<<"In the range of 0 to 9 only"<<endl;  //Only 0,1,2,3,4,5,6,7,8,9
    cout<<"Enter this week's winning 5-digit number"<<endl;
    cin>>num;  //Input of 5-digit numbers
    
    //Output values
    result = list(win,SIZE,num);
    if(result == -1){  //-1 because it is not possible in winning number
        cout<<"Your 5-digit number "<<num<<" is not a winning ticket "<<endl;
    }else{  //Anything else than -1
        cout<<"Your 5-digit number "<<win[result]<<" is a winning ticket "<<endl;
    }
    
    //Exit stage right!
    return 0;
}

int list(int a[], int n, int val){  //a=array, n=size, val=value
    int i=0;      //Initialize integer i is 0
    int posit=-1; //position is -1
    bool found=false;  //boolean is true or false
    while (!found && i < n){ //loops until found is not true,
        if (a[i] == val){  //if input numbers and the list number are same, --
            found=true;    // -- it will be true
            posit=i;       // -- then the position becomes input numbers, not -1
        }
        i++;
    }
    return posit; //return to position
}
