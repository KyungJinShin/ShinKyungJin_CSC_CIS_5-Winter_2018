/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 17, 2018, 3:20 PM
 * Purpose: Calculates the approximate value of pi
 */

//system Libraries
#include <iostream> //I/O Library
#include <cmath>    //Math Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float aprxPi; //Approximate value of Pi
    float pi;     //5 decimal digits of Pi
    int n;        //n is the term of series from {(-1)^n} / {2n+1}
    int sign;     //Negative sign (-1) from {(-1)^n} / {2n+1}
    
    //Initialize Variables
    sign= -1;    //(-1)^n leads to alternative positive sign and negative sign
    n=0;         //{(-1)^n} / {2n+1} this formula starts with n=0 to make 1
    pi=3.14159;  //5 decimal digits of Pi
    
    //Process/Map inputs to outputs
    aprxPi=pow(sign, n)/((2*n++)+1);              //code for {(-1)^n} / {2n+1} term to make +1/1
    cout<<"Pi approximately = "<<aprxPi*4<<endl;  //Multiply four to make 4*(+1/1)
    aprxPi+=pow(sign, n)/((2*n++)+1);             //code for {(-1)^n} / {2n+1} term to make -1/3
    cout<<"Pi approximately = "<<aprxPi*4<<endl;  //Multiply four to make 4*(-1/3)
    aprxPi+=pow(sign, n)/((2*n++)+1);             //code for {(-1)^n} / {2n+1} term to make +1/5
    cout<<"Pi approximately = "<<aprxPi*4<<endl;  //Multiply four to make 4*(+1/5)
    aprxPi+=pow(sign, n)/((2*n++)+1);             //code for {(-1)^n} / {2n+1} term to make -1/7
    cout<<"Pi approximately = "<<aprxPi*4<<endl;  //Multiply four to make 4*(-1/7)
    aprxPi+=pow(sign, n)/((2*n++)+1);             //code for {(-1)^n} / {2n+1} term to make +1/9
    cout<<"Pi approximately = "<<aprxPi*4<<endl;  //Multiply four to make 4*(+1/9)
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    aprxPi+=pow(sign, n)/((2*n++)+1);
    cout<<"Pi approximately = "<<aprxPi*4<<endl;
    
    //Output the results
    aprxPi+=pow(sign, n)/((2*n++)+1);             //code for {(-1)^n} / {2n+1} term
    aprxPi*=4;                                    //Multiply four to make 4*(approximate Pi)       
    cout<<"Pi approximately = "<<aprxPi<<endl;
    cout<<"Pi exactly       = "<<pi<<endl;        //5 decimal digits of Pi
    
    //Exit stage right
    return 0;
}