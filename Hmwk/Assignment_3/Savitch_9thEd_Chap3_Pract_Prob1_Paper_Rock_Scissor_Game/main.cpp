/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 14, 2018, 11:00 PM
 * Purpose: Make a paper rock scissor game
 */

//system Libraries
#include <iostream>
#include <cstdlib>  //Random number function
#include <ctime>    //Time Library for rabdom Seed
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0))); //To make Random number(play) for computer
    
    //Declare Variables
    char comput; //Computer plays
    char player; //Player plays
    int num;     //Integer Number, but I will range to 0 to 3
    num=rand()%3; // number of 0 to 3
    if (num==0)      comput='R';  //When number=0, computer is Rock 
    else if (num==1) comput='S';  //When number=1, computer is Scissor
    else if (num==2) comput='P';  //When number=2, computer is Paper 
   
    //Initialize Variables
    cout<<"This program is paper-rock-scissor game"<<endl;
    cout<<"What is your choice between rock as R, paper as P, and scissor as S ?"<<endl;
    cin>>player;
    
    //Process/Map inputs to outputs
    cout<<"The player plays "<<player<<endl;
    cout<<"The computer plays "<< comput<<endl;
    if(comput==player) {
        cout<<"This game is tie"<<endl;
    }else if(comput=='R' && player=='P') {  //When player choose Paper,and computer choose Rock 
        cout<<"The player is win"<<endl;    
    }else if(comput=='R' && player=='S') {  //When player choose Scissor,and computer choose Rock 
        cout<<"The player is lose"<<endl;
    }else if(comput=='P' && player=='S') {  //When player choose Scissor,and computer choose Paper 
        cout<<"The player is win"<<endl;     
    }else if(comput=='P' && player=='R') {  //When player choose Rock,and computer choose Paper 
        cout<<"The player is lose"<<endl;
    }else if(comput=='S' && player=='R') {  //When player choose Rock,and computer choose Scissor
        cout<<"The player is win"<<endl;
    }else if(comput=='S' && player=='P') {  //When player choose Paper,and computer choose Scissor
        cout<<"The player is lose"<<endl;
    }
    
    //Output data
    
    //Exit stage right!
    return 0;
}

