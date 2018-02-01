/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 21, 2018, 9:00 AM
 * Purpose: Finds the best fuel efficiency car
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
         gallon1, //conversion of nLiter (unit is liter) to (unit is gallon) of car1
         gallon2, //conversion of nLiter (unit is liter) to (unit is gallon) of car2
         nLiter1, //number of liters of gasoline consumed by the car1
         nLiter2, //number of liters of gasoline consumed by the car2
         nMiles1, //number of miles traveled by the car1
         nMiles2, //number of miles traveled by the car2 
            mpg1, //number of miles per gallon the car1 delivered
            mpg2; //number of miles per gallon the car2 delivered
    char answer;  //User answers whether repeat this program or finish 
   
    //Initialize Variables
    cout<<"This program calculates number of miles per gallon the car delivered"<<endl;
    do {
        cout<<"Enter the number of liters of gasoline consumed by the First car"<<endl;
        cin>>nLiter1;  //car1 Liter of gasoline
        cout<<"Enter the number of miles traveled by the First car"<<endl;
        cin>>nMiles1;  //car1 Miles
        cout<<"Enter the number of liters of gasoline consumed by the Second car"<<endl;
        cin>>nLiter2;  //car2 Liter of gasoline
        cout<<"Enter the number of miles traveled by the Second car"<<endl;
        cin>>nMiles2;  //car2 Miles   
        if (nLiter1<=0 || nLiter2<=0 || nMiles1<=0 || nMiles2<=0) {
            cout<<"Error"<<endl; 
        }else {
            liter=0.264179f ;//1 Liter = 0.264179 Gallons

            //Process/Map inputs to outputs
            gallon1=liter*nLiter1;  //Convert the number of liter to gallon of car1
            gallon2=liter*nLiter2;  //Convert the number of liter to gallon of car2
            mpg1=nMiles1/gallon1;   //Number of miles per gallon of car1
            mpg2=nMiles2/gallon2;   //Number of miles per gallon of car2

            //Output data
            cout<<"Number of miles per gallon of the First car = "<<mpg1<<endl; //car1 mpg
            cout<<"Number of miles per gallon of the Second car = "<<mpg2<<endl; //car2 mpg

            if (mpg1==mpg2) {               //When first car and second car are equal mpg
                cout<<"Both cars are the best fuel efficiency cars "<<endl;   
            }else if (mpg1>mpg2) {          //When first car is larger/bigger mpg
                cout<<"The First car is the best fuel efficiency car"<<endl;    
            }else if (mpg2>mpg1) {          //When second car is larger/bigger mpg
                cout<<"The Second car is the best fuel efficiency car"<<endl;
            }
        }
            
        cout<<"Do you want to try again? (Y/N)"; //Ask user whether repeat this program or finish 
        cin>>answer;                          //If the user enter 'Y' or 'y', this program will run again
        cout<<"                    "<<endl;
    } while (answer == 'Y' || answer == 'y'); //User can repeat this calculation as the user wishes
        
    //Exit stage right!
        return 0;
}

