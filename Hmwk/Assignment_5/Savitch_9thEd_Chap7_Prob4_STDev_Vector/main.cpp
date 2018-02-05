/* 
 * File:   main.cpp
 * Author: KyungJin Shin and Dr.Mark Lehr
 * Created on January 30, 2018, 1:10 PM
 * Purpose:  Standard Deviation
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Contains srand
#include <ctime>     //Time Library
#include <cmath>     //Math Library
#include <iomanip>   //Formating Library
#include <vector>    //Vector Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float zeroOne();
float mean(const vector<float>& );    //(float[],int)
float stdDev(const vector<float> &);  //(float[],int)
float stdNorm(); //Stand Normal
void fillAry(vector<float> &);

//Execution Begins Here
int main(int argc, char** argv) {
    //Setting the random number seed
    srand(static_cast<unsigned int>(time(0))); //randomly give numbers
    
    //Declare Variables
    const int SIZE=1000000;
    vector<float> x(SIZE); // vector with float
    
    //Fill the array
    fillAry(x);  //fill the array with x and 1000000 size 
    
    //Output the results
    cout<<fixed<<setprecision(2)<<showpoint; //Formatting, 2 decimal points
    cout<<"N("<<mean(x)
            <<","<<stdDev(x)
            <<")"<<endl;
   
    //Exit stage right!
    return 0;
}
void fillAry(vector<float>& array){
    for(int i=0; i<array.size(); i++){ //Stariting at 0 to size , // integer i
        array[i]=stdNorm();
    }
}

float stdNorm(){
    //Declare a sum
    float sum=0.0f; //double  //one decimal point to use float
    //Sum 12 [0,1] Random Variables
    for(int i=1; i<=12; i++){  // integer i
        sum+=zeroOne();  //Adds up each zeroOne() function
    }
    //Return the centered result
    return sum-6; //[-6,6]
}

float stdDev(const vector<float>& array){
    //Declare a sum and initialize
    float sum=0.0f;                //Double  //one decimal point to use float
    float avg=mean(array);         //Double
    //Loop
    for(int i=0; i<array.size(); i++){  //Stariting at 0 to size, // integer i
        sum+=pow(array[i]-avg,2);  //power function
    }
    
    //Results
    return sqrt(sum/(array.size()-1));  //division
}

float mean(const vector<float>& array){
    //Declare a sum and initialize
    double sum=0.0f;  //one decimal point to use float
    //Loop
    for(int i=0; i<array.size(); i++){  //Stariting at 0 to size, // integer i 
        sum+=array[i];  //Adds up each array function
    }
    //Results
    return sum/array.size();  //division 
}

float zeroOne(){
    static const unsigned int mxRand=(1<<31)-1;  //2^31 - 1
    float random=static_cast<float>(rand())/mxRand;//[0,1]
    return random;
}