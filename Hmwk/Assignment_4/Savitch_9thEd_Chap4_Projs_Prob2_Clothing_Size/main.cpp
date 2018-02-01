/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 20, 2018, 10:00 PM
 * Purpose: Calculates clothing sizes
 */

//system Libraries
#include <iostream>    //I/O Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short heit, //User's height in inches
                   weit, //User's weight in pounds
                    age, //User's age in years
                   size, //User's size
                    hat, //Hat size
                 jacket, //Jacket size (chest in inches)
                  waist; //Waist in inches
    char answer;         //User answers whether repeat this program or finish 
   
    //Initialize Variables
    cout<<"This program calculates clothing sizes"<<endl;
    do {
        cout<<"Input the positive number only"<<endl;  //Unsigned short is not covering Negative number!
        cout<<"Enter your height in inches"<<endl;
        cin>>heit;  //User's height in inches
        cout<<"Enter your weight in pounds"<<endl;
        cin>>weit;  //User's weight in pounds
        cout<<"Enter your age"<<endl;   //age with the unit is years
        cin>>age;   //User's age in years

        //Process/Map inputs to outputs
        hat=(weit/heit)*2.9;  //Hat size = (weight(lb)/height(inches))*(2.9)

        if (0<age<=39) {                     //Add 1/8 of an inche for each 10 years with starting at 40
            jacket=(heit*weit/288);          //When user's age is 1 through 39 years old -> No 1/8 add
        }else if (40<=age<=49) {        
            jacket=(heit*weit/288)+(1/8);    //When user's age is 40 through 49 years old -> Add 1/8 once
        }else if (50<=age<=59) {
            jacket=(heit*weit/288)+(1/8)*2;  //When user's age is 50 through 59 years old -> Add 1/8 twice
        }else if (60<=age<=69) {
            jacket=(heit*weit/288)+(1/8)*3;  //When user's age is 60 through 69 years old -> Add 1/8 third
        }else if (70<=age<=79) {
            jacket=(heit*weit/288)+(1/8)*4;  //When user's age is 70 through 79 years old -> Add 1/8 fourth
        }else if (80<=age<=89) {
            jacket=(heit*weit/288)+(1/8)*5;  //When user's age is 80 through 89 years old-> Add 1/8 fifth
        }else if (90<=age<=99) {
            jacket=(heit*weit/288)+(1/8)*6;  //When user's age is 90 through 99 years old -> Add 1/8 sixth
        }else if (100<=age<=109) {
            jacket=(heit*weit/288)+(1/8)*7;  //When user's age is 100 through 109 years old -> Add 1/8 seventh
        }else {
            do{
            cout<<"Enter your age in years in the range of "
                  "1 to 109 years old"<<endl; //Enter your age again
            cin>>age;
            } while (age<1 || age>109);       //Repeat the loop until age(number)is less than 1 or bigger than 109
        }
                                                    //In the range of 28 to 109,  
        if (28<=age || age<=109 && age%2==0) { // only takes place after a full 2 years (even number years, 28,30,32...)
            waist=(weit/5.7)+(1/10)*((age-28)/2);   //Add 1/10 inch for each 2 years over age 28
        }else if (0<age<28) {   //When the user's age is less than 28 years old
            waist=(weit/5.7);   //No addition of 1/10
        }               

        //Output data
        cout<<"Hat size = "<<hat<<endl;                         //The user's hat size
        cout<<"Jacket size (Chest in inches) = "<<jacket<<endl; //The user's jacket size
        cout<<"Waist in inches = "<<waist<<endl;                //The user's waist size
        cout<<"Do you want to try again? (Y/N)";    //Ask user whether repeat this program or finish 
        cin>>answer;                          //If the user enter 'Y' or 'y', this program will run again
    } while (answer == 'Y' || answer == 'y'); //User can repeat this calculation as the user wishes
        
    //Exit stage right!
        return 0;
}

