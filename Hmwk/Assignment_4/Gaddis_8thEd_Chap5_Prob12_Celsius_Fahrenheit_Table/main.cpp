/* 
 * File:   main.cpp
 * Author: KyungJin Shin 
 * Created on January 21, 2018, 1:00 PM
 * Purpose:  Make Celsius to Fahrenheit Table temperature 0 to 20 0nly
 */

//System Libraries Here
#include <iostream>   //I/O Library
#include <iomanip>    //Formatting Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    //float degC, dgChk;
    float degF; //Degree Fahrenheit, Degree Celsius, Check degree
    float x1,x2,y1,y2; 
    
    //Initialize Variables
    x1=32; //Interpolation 32 degrees Fahrenheit
    x2=212;//Interpolation 212 degrees Fahrenheit
    y1=0;  //Interpolation 0 degrees centigrade 
    y2=100;//Interpolation 100 degrees centigrade
    
    //Process/Map inputs to outputs
    cout<<"This program is Celsius & Fahrenheit Table"<<endl;
    
    //Output Data
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"----------------------------"<<endl;
    cout<<" Celsius      Fahrenheit "<<endl;
    for (int degC=0; degC<=20; degC++) {
        degF=(degC*9.0f/5)+32.0f;
        cout<<setw(5)<<degC<<setw(15)<<degF<<endl;
    }

    //Exit
    return 0;
}

