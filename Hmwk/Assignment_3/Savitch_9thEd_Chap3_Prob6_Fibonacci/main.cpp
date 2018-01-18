/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 16, 2018, 12:45 PM
 * Purpose: Fibonacci Sequence
 */

//system Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int fi, //Fibonacci initial number
               fim1, //Fibonacci initial minus 1
               fim2; //Fibonacci initial minus 2
    
    //Initialize Variables
    fim1=1;  //Fibonacci initial minus 1 = 1
    fim2=1;  //Fibonacci initial minus 2 = 1
    cout<<"This program calculates Fibonacci numbers and ratio"<<endl;
    cout<<fim2<<","<<fim1;
    
    //Process/Map inputs to outputs
    fi=fim1+fim2;   //Fibonacci initial = Fibonacci initial minus 1 + Fibonacci initial minus 2
    cout<<","<<fi;
    fim2=fim1;      //Fibonacci initial minus 2 = Fibonacci initial minus 1
    fim1=fi;        //Fibonacci initial minus 1 = Fibonacci initial
    
    //Process/Map inputs to outputs
    fi=fim1+fim2;   //Repeat to get more Fibonacci numbers
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    
    //Process/Map inputs to outputs
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    
    //Process/Map inputs to outputs
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;    
    
    //Process/Map inputs to outputs
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    
    //Process/Map inputs to outputs
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;

    //Process/Map inputs to outputs
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;

    //Process/Map inputs to outputs
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;

    //Process/Map inputs to outputs
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;

    //Comparison of the ratio Fibonacci to Golden Ratio
    cout<<endl<<endl<<"Ratio = "<<1.0f*fim1/fim2<<endl;  //Ratio of the Fibonacci number
    
    //Exit stage right!
    return 0;
}

