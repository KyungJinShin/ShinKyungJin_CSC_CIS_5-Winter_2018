/* 
 * File:   main.cpp
 * Author: KyungJin Shin and Dr.Lehr
 * Created on January 17, 2018, 10:20 PM
 * Purpose:  Phone call charge
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short cost, //Cost of the phone call in pennies
                strTime, //Start Time Military format 
                 tmSpan; //Duration of the phone call
    char day, //Day of the week 
         dm;  //Dummy input unnecessary to the problem
    
    //Initialize Variables
    cout<<"This program calculates cost of phone call"<<endl;
    cout<<"Input the day a phone call was made"<<endl;
    cout<<"Mo Tu We Th Fr Sa Su"<<endl; //Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
    cin>>day>>dm;                       //dummy to replace read on
    cout<<"Input the start time in military format"<<endl;
    cout<<"1:30 PM = 13:30"<<endl;     
    cin>>setw(2)>>strTime>>dm>>dm>>dm;  //dummy takes : and two digit of minutes, which are unnecssary parts
    cout<<"Input the duration of phone call in minutes"<<endl;
    cin>>tmSpan;                        //Duration of phone call in minutes
    
    //Process/Map inputs to outputs
    if(day=='S'||day=='s'){             //User can input lowercase and uppercase
        cost=tmSpan*15; //15 cents per minute
    }else if(strTime>=8&&strTime<18){   //8:00Am to 6:00Pm
        cost=tmSpan*40; //40 cents per minute
    }else{
        cost=tmSpan*25; //25 cents per minute
    }
    
    //Output data
    cout<<fixed<<setprecision(2)<<endl;  //2 decimal (significant digits)
    cout<<"The phone call cost = $ "<<cost/100.0f<<endl;
    
    //Exit stage right!
    return 0;
}