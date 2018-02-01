/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 22, 2018, 5:55 PM
 * Purpose: Calculates the occupancy rate for a hotel
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
    unsigned short nroomH=0, //How many rooms the hotel has
                    nfloorH=0, //How many floors the hotel has 
                    nroomF=0, //Number of rooms on the floor
                    occupF=0, //How many of the rooms on the floor are occupied
                    occupH=0, //How many of rooms in the hotel are occupied
                    unocup=0; //How many are unoccupied
    float prtOcup=0; //Percentage of rooms that are occupied
   
    //ignore the rest of cin
    //cin.ignore(128, '\n'); //ignore 128 or until a newline
    
    //Initialize Variables
    cout<<"This program calculates the occupancy rate for a hotel"<<endl;
    cout<<"In the range of more than 1 floor only"<<endl; //Because Unsigned short, No negative number!!
    cout<<"How many floors the hotel has? "<<endl;
    cin>>nfloorH;
    if (nfloorH<1) {                           //Less than 1 floor in hotel is error
        cout<<"Error on input"<<endl;
    }else {
        for(int floors=1; floors<=nfloorH; floors++){
            cout<<"in the range of more than 10 rooms"<<endl;
            cout<<"How many rooms on the floor? "<<endl;
            cin>>nroomF;
            if (nroomF<10) {                   //Less than 10 rooms in each floor is error
                cout<<"Error on input"<<endl;
            }else {
                cout<<"How many rooms on the floor are occupied? "<<endl;
                cin>>occupF;
                
            nroomH+=nroomF;   //Number of rooms in hotel = addition of room numbers of floor
            occupH+=occupF;   //Occupied hotel rooms = additoin of occupied each floor rooms
            unocup=nroomH-occupH; //unoccupied rooms = total rooms in hotel - occupied rooms in hotel
            static_cast<float>(prtOcup);  //change to float, which is able to show decimal points
            prtOcup=100.0f*occupH/nroomH; //percentage of occupied rooms in hotel
            }
        }
    }

    //Process/Map inputs to outputs
       
    //Output data
    cout<<"The number of rooms the hotel has = "<<nroomH<<endl;
    cout<<"The number of occupied rooms the hotel has = "<<occupH<<endl;
    cout<<"The number of unoccupied rooms the hotel has = "<<unocup<<endl;
    cout<<fixed<<setprecision(1)<<endl;  //1 decimal point
    cout<<"The percentage of rooms that are occupied = "<<prtOcup<<"%"<<endl; //Percentage

    //Exit stage right!
        return 0;
}

