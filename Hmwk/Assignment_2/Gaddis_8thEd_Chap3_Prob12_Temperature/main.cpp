/* 
 * File:   main.cpp
 * Author: KyungJin Shin and Dr. Lehr
 * Created on January 9, 2018, 1:36 PM
 * Purpose:  Calculating Temperature
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float degF,degC,dgChk; //Degree Fahrenheit, Degree Celsius, Check degree
    float x1,x2,y1,y2; 
    
    //Initialize Variables
    x1=32; //Interpolation 32 degrees Fahrenheit
    x2=212;//Interpolation 212 degrees Fahrenheit
    y1=0;  //Interpolation 0 degrees centigrade 
    y2=100;//Interpolation 100 degrees centigrade
    
    //Input the temperature to convert
    cout<<"Input the temperature in degrees Fahrenheit"<<endl;
    cout<<"to convert to degrees Celsius"<<endl;
    cin>>degF;
    
    //Process/Map inputs to outputs
    degC=(degF-32)*5/9;
    dgChk=y1+(y2-y1)*(degF-x1)/(x2-x1);
    
    //Output Data
    cout<<degF<<" degrees Fahrenheit = "
          <<dgChk<<" degrees Celsius = "
          <<degC<<" degrees Celsius"<<endl;

    //Exit
    return 0;
}

