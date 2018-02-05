/* 
 * File:   main.cpp
 * Author: KyungJin Shin and Dr.Mark Lehr
 * Created on January 25, 2018, 12:45 PM
 * Purpose:  isPrime function
 */

//System Libraries
#include <iostream> //I/O Library
#include <cmath>    //Math Library
#include <iomanip>  //Formatting Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    for(int i=2; i<=100; i++){    //Starting at number 2 to 100. increment by 1
        cout<<setw(3)<<i<<(isPrime(i)?" is ":" is not ")<<"Prime"<<endl; //If it is prime -> print out "is"
    }                                                                     //If it is not prime -> print out "is not"

    //Output data
    
    //Exit stage right!
    return 0;
}    
    
bool isPrime(int n){
    bool test=true;    //bool(true or false) only
    float nLoop=sqrt(n);
    for(int num=2; num<=nLoop&&test; num++){  //Staring at 2, because 1 is not count as prime
        if(n%num==0)test=false;  //if number can be divided by 2, it is not prime
    }
    return test;  //return to test
}
