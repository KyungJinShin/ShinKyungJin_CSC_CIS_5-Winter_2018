/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on February 3, 2018, 8:45 PM
 * Purpose:  Largest smallest array value
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Column Dimension

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num[10]; // 10 values in the lange of - 2 billion to + 2 billion     
    int large;   // Largest
    int small;   // Smallest
    int temp;    // Numbers between largest number and smallest number
    
    //Fill the array
    for (int i=0; i<10; i++){
        cout<<"Input 10 numbers in the lange of - 2 billion to + 2 billion "<<i+1<<endl; 
                                             //Display 1st,2nd,.number..to user 
        cin>>num[i]; //Enter 10 numbers
    } 
    
    temp=0;      //Initialize temp as 0
    small=0;     //Initialize small as 0
    large=0;     //Initialize large as 0
    small=num[0];//Initialize small as 0
    large=num[0];//Initialize large as 0
     
    for (int i=1; i<10; i++){
        temp=num[i]; //If temp is number
        if (temp < small) small=temp; //If temp is the smallest
        if (temp > large) large=temp; //If temp is the largest
    }
    
    cout<<"The Smallest value is "<<small<<endl;
    cout<<"The Largest value is "<<large<<endl;
    
    //Exit stage right!
    return 0;
}