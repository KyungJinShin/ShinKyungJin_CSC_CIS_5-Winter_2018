/* 
 * File:   main.cpp
 * Author: KyungJin Shin and Dr.Lehr
 * Created on January 16, 2018, 11:30 PM
 * Purpose: Math Tutor
 */

//system Libraries
#include <iostream> //I/O Library
#include <cstdlib>  //Random number function
#include <ctime>    //Time Library for rabdom Seed
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));  //Random number function
    
    //Declare Variables
    unsigned short op1, //Operator 1
                   op2, //Operator 2
                result, //Result of the addition
                answer; //Answer of the result is correct or incorrect
    
    //Initialize Variables
    op1=rand()%900+100; //Three digit number
    op2=rand()%1000;    //Any 1 to 3 digit number
    
    //Process/Map inputs to outputs
    result=op1+op2;     //Addition of operator1 and operator2
    
    //Output data
    cout<<"Test your addition skills, Solve the following"<<endl;
    cout<<setw(5)<<op1<<endl;      //Formating 5 spaces
    cout<<"+ "<<setw(3)<<op2<<endl; //Formating 3 spaces
    cout<<"-----"<<endl<<(result>1000?" ":"  ");  //Lines between operators and results
    cin>>answer;
    cout<<(result==answer?"Correct":"Incorrect")<<endl; //Answer of the result is correct or incorrect
    
    //Exit stage right!
    return 0;
}

