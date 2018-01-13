/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 9, 2018, 9:00 PM
 * Purpose: Babylonian algorithm to compute the square root of a number n
 */

//system Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
//Conversion from metric tons to ounces

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float n,     //Square root of a number (input)
          r,     //1% of the previous guess
          guess; //Guess the square root number n
    
    //Initialize Variables
    r=0.01; 
    
    //Process/Map inputs to outputs
    cout<<"This program estimates the square root of a number by the Babylonian algorithm "<<endl;
    cout<<"Input a number to estimate the square root"<<endl;
    cout<<"In range the number must be a positive float"<<endl;  //Inside the square root always positive number
    cin>>n;
     cout<<"Input the square root n in format positive float"<<endl;
    //First
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the first data
    cout<<"The first calculation is "<<guess<<endl;
    
    //Second
    r=n/guess;
    guess=(guess+r)/2;    
    
    //Output the second data
    cout<<"The second calculation is "<<guess<<endl;
    
    //Third
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the third data
    cout<<"The third calculation is "<<guess<<endl;
    
    //Fourth
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the fourth data
    cout<<"The fourth calculation is "<<guess<<endl;

   
    //Exit stage right!
    return 0;
}

