/* 
 * File:   main.cpp
 * Author: KyungJin Shin 
 * Created on January 11, 2018, 8:00 AM
 * Purpose:  Display a story by inserting the user's input
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string name,  //His or her name       
           city,  //The name of a city       
           colle, //The name of a college
           profe, //A profession
           animal,//A type of animal
           pet;   //A pet's name
    string age; //His or her age in years  unsigned char
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program displays a story by inserting the user's input"<<endl;
    cout<<"Enter his or her name: "<<endl;
    getline(cin, name);  
    cout<<"Enter his or her age: "<<endl;
    getline(cin, age); 
    cout<<"Enter the name of a city: "<<endl;
    getline(cin, city);
    cout<<"Enter the name of a college: "<<endl;
    getline(cin, colle); 
    cout<<"Enter a profession: "<<endl;
    getline(cin, profe);  
    cout<<"Enter a type of animal: "<<endl;
    getline(cin, animal);
    cout<<"Enter a pet's name: "<<endl;
    getline(cin, pet); 
    
    //Output data
    cout<<"There once was a person name "<<name<<" who lived in "<<city<<". "
        <<"At the age of "<<age<<", "<<name<<" went to college at "<<colle<<". "
        <<name<<" graduated and went to work as a "<<profe<<". Then, "
        <<name<<" adopted a(n) "<<animal<<" named "<<pet<<". They both lived "
        "happily ever after!"<<endl;      
    
    //Exit stage right!
    return 0;
}