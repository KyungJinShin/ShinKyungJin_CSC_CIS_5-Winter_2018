/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 10, 2018, 12:28 PM
 * Purpose: Calculate the total grade for N classroom as a percentage
 */

//system Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    short N1,     //First N scores
          N2,     //Second N scores
          N3,     //Third N scores
          total1, //Total points possible for exercise 1
          total2, //Total points possible for exercise 2
          total3, //Total points possible for exercise 3
          nSum,   //Sum of N
          totSum; //Sum of total
    float allPrt; //The overall percentage
    
    //Initialize Variables
    cout<<"This program calculates overall percentage of total grade for N classroom"<<endl;
    cout<<"Input 3 numbers of the exercieses"<<endl;
    
    //Process/Map inputs to outputs
    cout<<"Score received for exercise 1: ";
    cin>>N1;
    cout<<"Total points possible for exercise 1: ";
    cin>>total1;

    cout<<"Score received for exercise 2: ";
    cin>>N2;
    cout<<"Total points possible for exercise 2: ";
    cin>>total2;
    
    cout<<"Score received for exercise 3: ";
    cin>>N3;
    cout<<"Total points possible for exercise 3: ";
    cin>>total3;
        
    //Output data
    nSum=N1+N2+N3;
    totSum=total1 + total2 + total3;
    allPrt=100*static_cast<float>(nSum)/totSum;
    cout<<fixed<<setprecision(2)<<showpoint; 
    cout<<"Your total is "<<nSum<<" out of "<<totSum<<", or "    
        <<static_cast<float>(allPrt)<<"%."<<endl;
   
    //Exit stage right!
    return 0;
}

