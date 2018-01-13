/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 10, 2018, 5:13 PM
 * Purpose: Calculate temperature
 */

//system Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float inLent, //Initial length of the material in meters
          dispmt, //Displacement in meters
          alpha,  //4 values for different materials(Alumium, Copper, Glass, Steel)
          cTemp;  //Change in temperature in Celsius

    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program calculates displacement of 4 different materials"<<endl;
    cout<<"Input the material NUMBER following 4 different options"<<endl;
    cout<<"Aluminum = 2.31e-5,   Copper = 1.70e-5,   Glass = 8.50e-6,   Steel = 1.20e-5 "<<endl;
    cin>>alpha;    
    cout<<"Enter initial length of the material in meters "<<endl;
    cin>>inLent;
    cout<<"Enter the change in temperature in Celsius"<<endl;
    cin>>cTemp;
    dispmt= alpha*inLent*cTemp; 
    
    //Output data
    if (dispmt>0) {
      cout<<"The material will expand by "<<dispmt<<endl;   
    }else {
        cout<<"The material will contract by "<<dispmt*-1<<endl;  //It shouldn't output the displacement as a negative number
    }

    //Exit stage right!
    return 0;
}

