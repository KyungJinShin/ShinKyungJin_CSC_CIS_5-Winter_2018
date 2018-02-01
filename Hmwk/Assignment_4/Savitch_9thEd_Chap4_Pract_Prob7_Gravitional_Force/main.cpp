/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 20, 2018, 11:00 PM
 * Purpose: Calculates gravitional force
 */

//system Libraries
#include <iostream>   //I/O Library
#include <cmath>      //power function
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float mass1, //a body with mass 1 in g
          mass2, //another body with mass 2 in g
           dist, //two bodies separated by a distance in cm
          gravi, //the universal gravitational constant = 6.673e-8 (cm^3/(g*sec^2))
         gForce; //Gravitational attractive force in g*cm/(sec^2)
    char answer; //User answers whether repeat this program or finish 
   
    //Initialize Variables
    gravi=6.673e-8f; //Gravity constant is 6.673e-8 (cm^3/(g*sec^2))
    cout<<"This program calculates gravitational attractive force"<<endl;
    do {
        cout<<"Enter only positive numbers"<<endl;
        cout<<"Enter mass 1"<<endl;
        cin>>mass1;  //mass 1 in g
        cout<<"Enter mass 2"<<endl;
        cin>>mass2;  //mass 2 in g 
        cout<<"Enter distance between mass 1 and mass 2"<<endl; 
        cin>>dist;   //distance in cm (centi-meter)

        //Process/Map inputs to outputs
        if (mass1<=0 || mass2<=0 || dist<=0) {
            cout<<"Error"<<endl;
        }else {
            gForce=(gravi*mass1*mass2)/(pow(dist,2));  //Gravitational Force unit is g*cm/(sec^2)

            //Output data
            cout<<"mass 1 = "<<mass1<<" g"<<endl;    
            cout<<"mass 2 = "<<mass2<<" g"<<endl;                   
            cout<<"Distance = "<<dist<<" cm"<<endl;
            cout<<"Gravitational Force = "<<gForce<<" g*cm/(sec^2)"<<endl;  
        }
        
        cout<<"Do you want to try again? (Y/N)";  //Ask user whether repeat this program or finish 
        cin>>answer;      //If the user enter 'Y' or 'y', this program will run again
    } while (answer == 'Y' || answer == 'y'); //User can repeat this calculation as the user wishes
        
    //Exit stage right!
        return 0;
}

