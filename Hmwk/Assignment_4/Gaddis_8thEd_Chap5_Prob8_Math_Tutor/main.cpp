/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 29, 2018, 1:20 PM
 * Purpose: Math Tutor for Addition, Subtraction, Multiplication, and Division
 */

//system Libraries
#include <iostream> //I/O Library
#include <cstdlib>  //Random Number Generator
#include <ctime>    //Time to Seed Random Number
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Generate Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int num1, num2; // Number 1 and Number 2
    int ans; //Answer of the problems
    int sol; //Solution of the problems, equations
    char prob; //Problem number
    
    //Initialize Variables   
    bool loop = true;
    do{    
        cout<<"This program helps you to practice math"<<endl;
        cout<<"Choose from the following Menu"<<endl;
        cout<<"Enter 1 : Problem 1 -> Addition"<<endl;
        cout<<"Enter 2 : Problem 2 -> Subtraction"<<endl;
        cout<<"Enter 3 : Problem 3 -> Multiplication"<<endl;
        cout<<"Enter 4 : Problem 4 -> Division"<<endl;
        cout<<"Enter 0 : Exit the problems"<<endl; //exit
        cout<<"Do not enter above 50 or less than -50 for the menu choice"<<endl; //error

        //Process/Map inputs to outputs
        //read the choice
        cin>>prob; //1 through 4, and exit to other numbers
        
        //Output data
        switch (prob){
            case '1': {
                num1=rand()%900+100; //Three digit number
                num2=rand()%1000;    //Any 1 to 3 digit number

                cout<<num1<<" + "<<num2<<" = "<<endl; //Display addition
                cout<<"Enter the answer: ";
                cin>>ans;       //answer
                sol=num1+num2; //Addition math
                cout<<(sol==ans?"Correct":"Incorrect")<<endl<<endl; //Answer of the result is correct or incorrect
                break;
            
            }case '2': {
                num1=rand()%900+100; //Three digit number
                num2=rand()%1000;    //Any 1 to 3 digit number

                cout<<num1<<" - "<<num2<<" = "<<endl; //Display subtraction
                cout<<"Enter the answer: ";
                cin>>ans;      //answer
                sol=num1-num2; //Substraction math
                cout<<(sol==ans?"Correct":"Incorrect")<<endl<<endl; //Answer of the result is correct or incorrect
                break;
            
            }case '3': {
                num1=rand()%900+100; //Three digit number
                num2=rand()%1000;    //Any 1 to 3 digit number

                cout <<num1<<" x "<<num2<<" = "<<endl; //Display multiplication
                cout<<"Enter the answer: ";
                cin>>ans;      //answer
                sol=num1*num2; //Multiplication math
                cout<<(sol==ans?"Correct":"Incorrect")<<endl<<endl; //Answer of the result is correct or incorrect
                break;
                   
            }case '4': {
                num1=rand()%900+100; //Three digit number
                num2=rand()%1000;    //Any 1 to 3 digit number
                int prod=num1*num2;  //can be divide with natural number, not decimal number
                num1=prod;
                cout<<num1<<" / "<<num2<< " = " <<endl; //Display division
                cout<<"Enter the answer: ";
                cin>>ans;      //answer
                sol=num1/num2; //Division math
                cout<<(sol==ans?"Correct":"Incorrect")<<endl<<endl; //Answer of the result is correct or incorrect
                break;
            }default:{
                cout << "Exit" <<endl;   //Exit if user did not input 1,2,3,or4.
                loop = false;            //False -> stop the loop
                break;
            }
        };
    } while(loop);  //prob!=1 && prob!=2 && prob!=3 && prob!=4
    
    //Exit stage right!
    return 0;
}