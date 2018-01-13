/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 10, 2018, 1:00 PM
 * Purpose: Estimate the number of calories your body needs
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
    float bmrF;  //Her Basal metabolic rate in calories
    short weitF, //Her weight in pounds
          heitF, //Her height in inches
          ageF;  //Her age in years
    float bmrM;  //His Basal metabolic rate in calories
    short weitM, //His weight in pounds
          heitM, //His height in inches
          ageM;  //His age in years
    short cholat; //A chocolate bar in calories
    short nCholM; //Number of chocolate bar for him
    short nCholF; //Number of chocolate bar for her
    
    //Initialize Variables
    cholat=230; //230 calories
    
    //Process/Map inputs to outputs
    //Woman
    cout<<"This program estimate the number of calories your body needs to maintain your weight"<<endl;
    cout<<"The calories needed for a woman"<<endl;
    cout<<"Input her weight in pounds: ";
    cin>>weitF;
    cout<<"Input her height in inches: ";
    cin>>heitF;
    cout<<"Input her age in years: ";
    cin>>ageF;
    bmrF=655+(4.3*weitF) + (4.7*heitF) - (4.7*ageF);
    cout<<fixed<<setprecision(2)<<showpoint; 
    cout<<"The calories needed for a woman (BMR): "<<bmrF<<" calories"<<endl;
    nCholF=bmrF/cholat + 0.5;  //Add 0.5 to compensate for truncation
    cout<<"The number of chocolate bars for the woman: "<<nCholF<<endl;
    cout<<"  "<<endl;
    
    //Output data
    //Man
    cout<<"The calories needed for a man"<<endl;
    cout<<"Input his weight in pounds: ";
    cin>>weitM;
    cout<<"Input his height in inches: ";
    cin>>heitM;
    cout<<"Input his age in years: ";
    cin>>ageM;
    bmrM=66+(6.3*weitM) + (12.9*heitM) - (6.8*ageM);
    cout<<fixed<<setprecision(2)<<showpoint; 
    cout<<"The calories needed for a man (BMR): "<<bmrM<<" calories"<<endl;
    nCholF=bmrM/cholat + 0.5;  //Add 0.5 to compensate for truncation
    cout<<"The number of chocolate bars for the man: "<<nCholF<<endl;
    
    //Exit stage right!
    return 0;
}

