/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on February 4, 2018, 1:55 PM
 * Purpose:  Rainfall Statistics
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Column Dimension

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float rain[12]; // 12 months          
    float total;    // Total rainfall for the year
    float ave;      // Average monthly rainfall
    float high;     // The months with the highest 
    float low;      // The months with the lowest
    float temp;     // Neither highest or lowest rainfall months
    
    //Initialize Variables
    temp=0;  //Initialize temp as 0
    low=0;   //Initialize lowest as 0
    high=0;  //Initialize highest as 0
    ave=0;   //Initialize average as 0
    total=0; //Initialize total as 0
    
    //Process 
    for (int i=0; i<12; i++){ //starting from 0 to until 12, incresement each month
        cout<<"Input only positive numbers"<<endl;
        cout<<"Enter the total rainfall in millimeter(mm) for each of 12 months "<<i+1<<endl; //Display 1st,2nd,.number..to user 
        cin>>rain[i]; //Enter 12 months rainfall amounts
        total+=rain[i]; //Add up each month rainfall amounts
    } 

    ave=total/12;    
    high=rain[0]; //Initialize highest as 0 
    low=rain[0];  //Initialize lowest as 0
    
    for (int i=1; i<12; i++){
        temp=rain[i]; //If temp is rainfall
        if (temp < low) low=temp; //If temp is the lowest
        if (temp > high) high=temp; //If temp is the highest,
    }
    
    cout<<fixed<<setprecision(2)<<showpoint<<endl; //Formatting, output 2 decimal points
    cout<<"The total rainfall for this year = "<<total<<endl;
    cout<<"The average monthly rainfall     = "<<ave<<endl;
    cout<<"The months with the highest      = "<<high<<endl;
    cout<<"The months with the lowest       = "<<low<<endl;
    
    //Exit stage right!
    return 0;
}