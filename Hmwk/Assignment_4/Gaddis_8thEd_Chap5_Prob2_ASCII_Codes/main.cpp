/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 22, 2018, 7:00 PM
 * Purpose: Displays the characters for the ASCII Codes 0 through 127
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
    unsigned char codes; //Characters for the ASCII Codes 0 through 127.
   
    //Initialize Variables
    cout<<"This program displays the characters for the ASCII Codes"<<endl;
    
    for(codes=0; codes<128; codes++) {  //Display 16 characters on each line
        cout<<codes;
        if( ( codes ) % 16 == 0 ) cout<<endl;
    }                                                  //Just different style to display
    cout<<"  "<<endl;                                  //         Same
    for(unsigned char codes=1; codes<=127; codes++) {  // # number = # characeter
        cout<<"Ascii Code Number = "<<static_cast<int>(codes)<<"  -> "<<setw(25)
            <<"Ascii Code Character = "<<codes<<endl;
    }
    
    //Exit stage right!
        return 0;
}

