/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 9, 2018, 4:18 AM
 * Purpose: Convert treadmills miles per hour to minutes and seconds per mile
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
    float mph,    //Speed of the treadmill in miles per hour
          hpm,    //hours per mile
          mpm,    //minutes per mile
          nMint,  //Number of minutes
          secMile;//Seconds per mile
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"This program converts speed of the treadmill in miles per hour(mph) to number of minutes "
        <<"and seconds per mile "<<endl;
    cout<<"Input the speed of the treadmill in  miles per hour"<<endl;
    cin>>mph;
    hpm=1/mph;
    mpm=hpm*60;
    nMint=static_cast<int>(mpm);
    secMile=(mpm-nMint)*60;
    cout<<"The speed in miles per hour = "<<mph<<" mph"<<endl;
    cout<<"The number of minutes = "<<nMint<<" minutes"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The pace in seconds per mile = "<<secMile<<" sec/mile"<<endl;
   
    //Exit stage right!
    return 0;
}

