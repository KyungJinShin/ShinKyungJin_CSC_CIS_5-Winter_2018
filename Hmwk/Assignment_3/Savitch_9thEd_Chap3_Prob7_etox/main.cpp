/* 
 * File:   main.cpp
 * Author: KyungJin Shin and Dr.Lehr
 * Created on January 16, 2018, 1:10 PM
 * Purpose: e to the x
 */

//system Libraries
#include <iostream> //I/O Library
#include <cmath>    //Math Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float aproxE,  //Approximate of e 
            term,  //Term of the (x^n)/n!
               x;  //x from the (x^n)/n!
    int counter;   //counter = n!
    
    //Initialize Variables
    cout<<"This program calculates e value"<<endl;
    aproxE=1.0f;      //float to get decimals
    counter=1;        //Denominator starts with one
    x=1.0f;
    term=x/counter++; //Denominator increase one by one
    
    //Process/Map inputs to outputs
    aproxE+=term;   //Addition of terms are approximate of e
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl; 
    term*=x/counter++; //Another term which denominator is increased one  
    
    //Process/Map inputs to outputs
    aproxE+=term;   //Repeat it to get closer e value
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Map inputs to outputs
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Map inputs to outputs
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Map inputs to outputs
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Map inputs to outputs
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Map inputs to outputs
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Map inputs to outputs
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;

    //Output data
    cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl;  //Actual e value
    
    //Exit stage right!
    return 0;
}

