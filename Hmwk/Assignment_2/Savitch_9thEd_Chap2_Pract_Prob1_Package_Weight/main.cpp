/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 9, 2018, 6:30 AM
 * Purpose: Calculate the weight of a package in metric tons
 */

//system Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float mtTon,  //A metric ton
          wtOun,  //Weight of cereal in ounces
          wtTon,  //Weight of cereal in metric tons
          nboxTn; //Number of cereal boxes in 1 metric ton
    
    //Initialize Variables
    mtTon=3.527392e4f; //Metric ton= 35273.92 ounces
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"This program converts the weight of cereal ounces to metric tons and "
        <<"number of boxes needed to yield 1 metric ton "<<endl;
    cout<<"Input the weight of cereal content box in format ###.### ounces"<<endl;
    cin>>wtOun;
    wtTon=wtOun/mtTon;
    nboxTn= 1/wtTon;
    cout<<"The weight of cereal in metric tons = "<<wtTon<<" tons"<<endl;
    cout<<"The number of cereal boxes in 1 metric ton = "<<nboxTn<<" boxes"<<endl;
   
    //Exit stage right!
    return 0;
}

