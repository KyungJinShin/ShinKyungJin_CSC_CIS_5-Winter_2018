/* 
 * File:   main.cpp
 * Author: KyungJin Shin and Dr.Mark Lehr
 * Created on January 25, 2018, 1:05 PM
 * Purpose:  Attempt at Rock Paper Scissors //isPrime Function
 */

//System Libraries
#include <iostream> //I/O Library
#include <cmath>    //Math Library
#include <iomanip>  //Formatting Library
#include <cstdlib>  //Random Number Generator
#include <ctime>    //Time to Seed Random Number
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
char cmptrGs();  //() because we don't need input
char userGs();   //() because we don't need input
string winner(char,char);
void gameRPS();  //Game Function

//Execution Begins Here
int main(int argc, char** argv) {
    //Generate Random Number Seed
    srand(static_cast<unsigned int>(time(0))); //Randomly give R,P,or S
    
    //Declare Variables                    //no need to declare
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    gameRPS();
 
    //Output data
    
    //Exit stage right!
    return 0;
}   

void gameRPS(){
    //Declare variable to end the game
    bool loop=true;  //boolean true or false only
    
    //Start the Game
    cout<<"This is a game of Rock - Paper - Scissors"<<endl;
    
    //Loop the game until over
    do{
        //Begin the game
        char user=userGs();  //User Guess = userGs
        if(user!='R'&& user!='S'&& user!='P'){ //not equal to r and not equal t os and not equal to p
            loop=false;
        }else{
            char comp=cmptrGs();
            cout<<winner(comp,user)<<endl;  //who is win?
        }
        
    //End the game
    }while(loop);  //as while(false), if false, stop the loop 
}

string winner(char c,char u){
    if(c==u)return "Tie";
    if(c=='P'){
        if(u=='R')return "Computer";  //computer win, User lose
        else return "User";   //user win
    }
    if(c=='S'){
        if(u=='p')return "Computer";  //computer win, User lose
        else return "User";   //User win
    }
    if(c=='R'){
        if(u=='S')return "Computer";  //Computer win, User lose
        else return "User";   //User Win
    }
}

char userGs(){
    char user;
    cout<<"Input your decision"<<endl;
    cout<<"R for Rock, P for Paper, S for Scissors"<<endl;
    cout<<"Anything else ends the Game"<<endl;
    cin>>user;     // User in put rock, or scissor, or paper
    return user;
}

//char userGs(){
//    char user;
//    do{
//        cout<<"Input your decision"<<endl;
//        cout<<"R for Rock, P for Paper, S for Scissors"<<endl;
//        cin>>user;
//    }while(!(user=='R'||user'S'||user=='P'));//Type anything else, question comeback  
//    return user;
//}

char cmptrGs(){
    char cChoice; //Computer choice
    do{
        cChoice=rand()%4+80; //P,Q,R,S Ascci code
    }while(cChoice=='Q');    //Loops until computer choice is not Q
    return cChoice;
} 