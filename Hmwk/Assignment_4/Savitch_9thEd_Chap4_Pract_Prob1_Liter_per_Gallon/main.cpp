/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 21, 2018, 8:00 AM
 * Purpose: Calculates the number of liters per gallon
 */

//system Libraries
#include <iostream>    //I/O Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float liter, //liter is 0.264179 gallons
         gallon, //conversion of nLiter (unit is liter) to (unit is gallon) 
         nLiter, //number of liters of gasoline consumed by the car
         nMiles, //number of miles traveled by the car
            mpg; //number of miles per gallon the car delivered
    char answer; //User answers whether repeat this program or finish 
   
    //Initialize Variables
    cout<<"This program calculates number of miles per gallon the car delivered"<<endl;
    do {
        cout<<"Enter the number of liters of gasoline consumed"<<endl;
        cin>>nLiter;  
        cout<<"Enter the number of miles traveled by the car"<<endl;
        cin>>nMiles;  
        if (nLiter<=0 || nMiles<=0) {       // If the input values are less than 0, it is error
            cout<<"Error"<<endl; 
        }else {
            liter=0.264179f ;//1 Liter = 0.264179 Gallons

            //Process/Map inputs to outputs
            gallon=liter*nLiter;  //Convert the number of liter to gallon
            mpg=nMiles/gallon;    //Number of miles per gallon

            //Output data
            cout<<"Number of miles per gallon = "<<mpg<<endl; //Miles per gallon
            liter=0.264179f ;//1 Liter = 0.264179 Gallons

            //Process/Map inputs to outputs
            gallon=liter*nLiter;  //Convert the number of liter to gallon
            mpg=nMiles/gallon;    //Number of miles per gallon

            //Output data
            cout<<"Number of miles per gallon = "<<mpg<<endl; //Miles per gallon
        }
        
        cout<<"Do you want to try again? (Y/N) ";    //Ask user whether repeat this program or finish 
        cin>>answer;                          //If the user enter 'Y' or 'y', this program will run again
    } while (answer == 'Y' || answer == 'y'); //User can repeat this calculation as the user wishes
        
    //Exit stage right!
        return 0;
}

