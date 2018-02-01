/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 22, 2018, 9:00 PM
 * Purpose: Calculates the distance a vehicle travels
 */

//system Libraries
#include <iostream>    //I/O Library
#include <iomanip>     //Formatting Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short speed,//Speed of a vehicle in miles per hour
                   time, //How many hours it has traveled (in hours)
                   dist; //Distance the vehicle has traveled for each hour of that time period
    char answer;  //User answers whether repeat this program or finish 
   
    //Initialize Variables
    dist=0;    //Initialize distance as 0
    cout<<"This program calculates the distance a vehicle travels"<<endl;

    //Process/Map inputs to outputs
    do {
    cout<<"What is the speed of the vehicle in mph?  ";
    cin>>speed;
    cout<<"How many hours has it traveled?  ";
    cin>>time;
        if (speed<=0 || time<=0){   //Speed and Time is unsigned short! No Negative!!!!
        cout<<"Error"<<endl;        //when speed or time is 0,it is error
        }else {
            //Output data
            cout<<"  Hour    Distance Traveled "<<endl;
            cout<<"--------------------------------"<<endl;
            for(int hour=1; hour<=time; hour++) {
                dist=speed*hour;   //Distance Formula = speed * hour
                cout<<setw(4)<<hour<<setw(15)<<dist<<endl;  //Formatting
        }
    }
    
    cout<<"Do you want to try again? (Y/N) ";    //Ask user whether repeat this program or finish 
    cin>>answer;                          //If the user enter 'Y' or 'y', this program will run again
    cout<<"  "<<endl;          //Give a space between first output and second output(which is repeated)
    } while (answer == 'Y' || answer == 'y'); //User can repeat this calculation as the user wishes
        
    //Exit stage right!
        return 0;
}

