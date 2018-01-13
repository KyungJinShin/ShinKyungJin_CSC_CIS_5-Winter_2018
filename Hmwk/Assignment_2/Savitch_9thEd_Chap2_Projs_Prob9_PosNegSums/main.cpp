/* 
 * File:   main.cpp
 * Author: KyungJin Shin and Dr. Lehr
 * Created on January 9, 2018, 12:36 AM
 * Purpose:  Calculating Pos/Neg/Sums for 10 numbers
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
    int number, negSum, posSum;
    
    //Initialize Variables
    negSum=posSum=0;
    
    //Process/Map inputs to outputs
    //Heading
    cout<<"This program adds 10 numbers"<<endl;
    cout<<"It determines the negative, positive and total sum"<<endl;
    cout<<"Input 10 numbers, 1 at a time"<<endl;
    
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
    
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
    
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
    
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
    
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
    
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
    
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
    
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
    
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
    
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
    
    //Output Data
    cout<<"The negative sum = "<<negSum<<endl;
    cout<<"The positive sum = "<<posSum<<endl;
    cout<<"The total sum    = "<<negSum+posSum<<endl;

    //Exit
    return 0;
}

