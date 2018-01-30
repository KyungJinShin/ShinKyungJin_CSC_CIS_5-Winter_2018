/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 28, 2018, 1:20 PM
 * Purpose: Project 1 - Yut Nori(Korean New Years Game)
 */
//board?, 2 -3 players?,
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

//Execution Begins Here
int main(int argc, char** argv)  {    
    //Generate Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char comput;
    char comp; //computer
    char player;//player
    char user1;//user 1
    int num;   //Integer Number, but I will range to 0 to 3
    //char user2;//user 2

    //Initialize Variables
    num=rand()%3; // number of 0 to 3
    
    //Start the Game
    cout<<"This is Yut Nori, Korean New Years Game"<<endl;
    cout<<"To choose who goes first, play the Rock - Paper - Scissors"<<endl;
    
    //Rock - Paper - Scissors Game  
    if (num==0)      comput='R';  //When number=0, computer is Rock 
    else if (num==1) comput='S';  //When number=1, computer is Scissor
    else if (num==2) comput='P';  //When number=2, computer is Paper 
    cout<<"What is your choice between rock as R, paper as P, and scissor as S ?"<<endl;
    cin>>player;
    
    //Process/Map inputs to outputs
    cout<<"The player plays "<<player<<endl;
    cout<<"The computer plays "<<comput<<endl;
    if(comput==player) {
        cout<<"This game is tie"<<endl;
        do{
            cout<<"What is your choice between rock as R, paper as P, and scissor as S ?"<<endl;
            cin>>player;
            cout<<"The player plays "<<player<<endl;
            cout<<"The computer plays "<<comput<<endl;         
        }while(comput==player);
    }
    if(comput=='R' && player=='P') {  //When player choose Paper,and computer choose Rock 
        cout<<"The player is win, so the player goes first"<<endl;    
    }else if(comput=='R' && player=='S') {  //When player choose Scissor,and computer choose Rock 
        cout<<"The player is lose, so the player goes second"<<endl;
    }else if(comput=='P' && player=='S') {  //When player choose Scissor,and computer choose Paper 
        cout<<"The player is win, so the player goes first"<<endl;     
    }else if(comput=='P' && player=='R') {  //When player choose Rock,and computer choose Paper 
        cout<<"The player is lose, so the player goes second"<<endl;
    }else if(comput=='S' && player=='R') {  //When player choose Rock,and computer choose Scissor
        cout<<"The player is win, so the player goes first"<<endl;
    }else if(comput=='S' && player=='P') {  //When player choose Paper,and computer choose Scissor
        cout<<"The player is lose, so the player goes second"<<endl;
    }
    return 0;
}
    