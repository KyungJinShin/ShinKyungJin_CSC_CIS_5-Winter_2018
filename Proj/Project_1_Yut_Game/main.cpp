/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 28, 2018, 1:20 PM
 * Purpose: Project 1 - Yut Nori(Korean New Years Game)
 */

//system Libraries
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
char userGs();   //
string winner(char,char);
void gameRPS();  //Game Function

//Execution Begins Here
int main(int argc, char** argv) {
    //Generate Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    gameRPS();
    
    //Output data
    
    //Exit stage right!
    return 0;
}

void gameRPS(){
    //Declare variable to end the game
    bool loop=true;
    
    //Start the Game
    cout<<"This is Yut Nori, Korean New Years Game"<<endl;
    cout<<"To choose who goes first, play the Rock - Paper - Scissors"<<endl;
    
    //Loop the game until over
    do{
        //Begin the game
        char comp;
        char user=userGs();  //User Guess = userGs
        if(user!='R'&& user!='S'&& user!='P' || comp==user){ //not equal to r and notequaltos and notequaltop
            loop=false;
        }else{
            char comp=cmptrGs();
            cout<<winner(comp,user)<<endl;  //who is win?
        }
        
    //End the game
    }while(loop); //}while(loop);  //as while(false), if false, stop the loop 
}

string winner(char c,char u){
    if(c==u)return "Tie";
    if(c=='P'){
        if(u=='R')return "Computer goes first";  //computer win, User lose
        else return "User goes first";   //user win
    }
    if(c=='S'){
        if(u=='p')return "Computer goes first";  //computer win, User lose
        else return "User goes first";   //User win
    }
    if(c=='R'){
        if(u=='S')return "Computer goes first";  //Computer win, User lose
        else return "User goes first";   //User Win
    }
}

char userGs(){
    char user;
    cout<<"Input your decision"<<endl;
    cout<<"R for Rock, P for Paper, S for Scissors"<<endl;
    cin>>user;
        
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
    }while(cChoice=='Q');
    return cChoice;
} 

