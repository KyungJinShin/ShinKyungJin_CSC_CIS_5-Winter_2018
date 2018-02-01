/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 20, 2018, 9:00 AM
 * Purpose: Calculates total pay of the salary by pennies
 */

//system Libraries
#include <iostream>    //I/O Library
#include <iomanip>     //Formatting
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int ndays;//Number of days of work. 1day=1 penny, 2day=2 pennies
    int pennies = 1; // cents
    float totpay=pennies/100.f; //Total salary of the total days, in dollars
   
    //Initialize Variables
    cout<<"This program calculates total pay of the salary by pennies"<<endl;
    cout<<"In the range of 0 to 31 only"<<endl;
    cout<<"Enter the number of days"<<endl;
    cin>>ndays;  //number of days the user worked
    if (ndays<1 || ndays>31) { // why not while(ndays<1) { cout << ".."; cout<<"Enter..."; cin>>ndays;
        do {
            cout<<"Number of days should be greater or equal than 1 or less than 31"<<endl;
            cout<<"Enter the number of days"<<endl; //Enter the number days again
            cin>>ndays;  //number of days the user worked
        }while (ndays<1 || ndays>31); //This question will repeat until the user put number equal or bigger than 1
    }else {
        cout<<setw(4)<<"Day"<<setw(15)<<"$ Salary"<<setw(15)<<"$ Total"<<endl;
    }

    //Process/Map inputs to outputs
    //?????totpay+=(ndays/2);            ???????

    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int day=1; day<=ndays; day++) {
        //if(day>1) {
            pennies*=2;
            totpay+=pennies/100.0f;
        //}
        cout<<setw(4)<<day<<setw(15)<<pennies/100.0f<<setw(15)<<totpay<<endl;
    };
        
    //Exit stage right!
        return 0;
}

