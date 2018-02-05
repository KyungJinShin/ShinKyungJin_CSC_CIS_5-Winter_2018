/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 28, 2018, 1:20 PM
 * Purpose: Project 1 - Yut Nori(Korean New Years Game)
 */
//board?, bool
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

    //without array - bool - sticks
    if( stick1 && stick2 && stick3 && stick4 )
    stick1 && !stick2 && !st3 && !stick4
    !st1 && st2 && !stic3 && !stic
    
//    //Initialize Variables
//    num=rand()%3; // number of 0 to 3
//    
//    //Start the Game
//    cout<<"This is Yut Nori, Korean New Years Game"<<endl;
//    cout<<"To choose who goes first, play the Rock - Paper - Scissors"<<endl;
//    
//    //Rock - Paper - Scissors Game  
//    if (num==0)      comput='R';  //When number=0, computer is Rock 
//    else if (num==1) comput='S';  //When number=1, computer is Scissor
//    else if (num==2) comput='P';  //When number=2, computer is Paper 
//    cout<<"What is your choice between rock as R, paper as P, and scissor as S ?"<<endl;
//    cin>>player;
//    
//    //Process/Map inputs to outputs
//    cout<<"The player plays "<<player<<endl;
//    cout<<"The computer plays "<<comput<<endl;
//    if(comput==player) {
//        cout<<"This game is tie"<<endl;
//        do{
//            cout<<"What is your choice between rock as R, paper as P, and scissor as S ?"<<endl;
//            cin>>player;
//        }while(comput!=player);
//    }else if(comput=='R' && player=='P') {  //When player choose Paper,and computer choose Rock 
//        cout<<"The player is win, so the player goes first"<<endl;    
//    }else if(comput=='R' && player=='S') {  //When player choose Scissor,and computer choose Rock 
//        cout<<"The player is lose, so the player goes second"<<endl;
//    }else if(comput=='P' && player=='S') {  //When player choose Scissor,and computer choose Paper 
//        cout<<"The player is win, so the player goes first"<<endl;     
//    }else if(comput=='P' && player=='R') {  //When player choose Rock,and computer choose Paper 
//        cout<<"The player is lose, so the player goes second"<<endl;
//    }else if(comput=='S' && player=='R') {  //When player choose Rock,and computer choose Scissor
//        cout<<"The player is win, so the player goes first"<<endl;
//    }else if(comput=='S' && player=='P') {  //When player choose Paper,and computer choose Scissor
//        cout<<"The player is lose, so the player goes second"<<endl;
//    }
    
    //Process/Map inputs to outputs

//    cout<<user<<" is first, "<<comp<<" is second"<<endl;
//    cout<<"0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"| a7"<<setw(5)<<" | b7"<<setw(5)<<" | c7"<<setw(5)<<" | d7"<<setw(5)<<" | e7"<<setw(5)<<" | f7 |"<<endl;
//    cout<<"0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"| a6"<<setw(5)<<" | b6"<<setw(5)<<" | c6"<<setw(5)<<" | d6"<<setw(5)<<" | e6"<<setw(5)<<" | f6 |"<<endl;
//    cout<<"0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"| a5"<<setw(5)<<" | b5"<<setw(5)<<" | c5"<<setw(5)<<" | d5"<<setw(5)<<" | e5"<<setw(5)<<" | f5 |"<<endl;
//    cout<<"0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"| a4"<<setw(5)<<" | b4"<<setw(5)<<" | c4"<<setw(5)<<" | d4"<<setw(5)<<" | e4"<<setw(5)<<" | f4 |"<<endl;
//    cout<<"0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"| a3"<<setw(5)<<" | b3"<<setw(5)<<" | c3"<<setw(5)<<" | d3"<<setw(5)<<" | e3"<<setw(5)<<" | f3 |"<<endl;
//    cout<<"0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"| a2"<<setw(5)<<" | b2"<<setw(5)<<" | c2"<<setw(5)<<" | d2"<<setw(5)<<" | e2"<<setw(5)<<" | f2 |"<<endl;
//    cout<<"0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"| a1"<<setw(5)<<" | b1"<<setw(5)<<" | c1"<<setw(5)<<" | d1"<<setw(5)<<" | e1"<<setw(5)<<" | f1 |"<<endl;
//    cout<<"0----0----0----0----0----0----0"<<endl;
//    
//    cout<<" "<<endl;
//    cout<<"0----0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"| a7"<<setw(5)<<" | b7"<<setw(5)<<" | c7"<<setw(5)<<" | d7"<<setw(5)<<" | e7"<<setw(5)<<" | f7"<<" | g7 |"<<endl;
//    cout<<"0----0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"| a6"<<setw(5)<<" | b6"<<setw(5)<<" |   "<<setw(5)<<" |   "<<setw(5)<<" |   "<<setw(5)<<" | f6"<<" | g6 |"<<endl;
//    cout<<"0----0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"| a5"<<setw(5)<<" |   "<<setw(5)<<" | c5"<<setw(5)<<" |   "<<setw(5)<<" | e5"<<setw(5)<<" |   "<<" | g5 |"<<endl;
//    cout<<"0----0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"|   "<<setw(5)<<" |   "<<setw(5)<<" |   "<<setw(5)<<" | d4"<<setw(5)<<" |   "<<setw(5)<<" |   "<<" |    |"<<endl;
//    cout<<"0----0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"| a3"<<setw(5)<<" |   "<<setw(5)<<" | c3"<<setw(5)<<" |   "<<setw(5)<<" | e3"<<setw(5)<<" |   "<<" | g3 |"<<endl;
//    cout<<"0----0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"| a2"<<setw(5)<<" | b2"<<setw(5)<<" |   "<<setw(5)<<" |   "<<setw(5)<<" |   "<<setw(5)<<" | f2"<<" | g2 |"<<endl;
//    cout<<"0----0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"| a1"<<setw(5)<<" | b1"<<setw(5)<<" | c1"<<setw(5)<<" | d1"<<setw(5)<<" | e1"<<setw(5)<<" | f1"<<" | g1 |"<<endl;
//    cout<<"0----0----0----0----0----0----0----0"<<endl;
    
    
//    cout<<" "<<endl;
//    cout<<setw(10)<<"    a "<<setw(5)<<"   b "<<setw(5)<<"   c "<<setw(5)<<"   d "<<setw(5)<<"   e "<<setw(5)<<"   f "<<"   g   "<<endl;
//    cout<<"     0----0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"  1  |   "<<setw(5)<<" |   "<<setw(5)<<" |   "<<setw(5)<<" |   "<<setw(5)<<" |   "<<setw(5)<<" |   "<<" |    |"<<endl;
//    cout<<"     0----0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"  2  |   "<<setw(5)<<" |   "<<setw(5)<<" ||||"<<setw(5)<<"|||||"<<setw(5)<<"|||||"<<setw(5)<<"||   "<<" |    |"<<endl;
//    cout<<"     0----0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"  3  |   "<<setw(5)<<" ||||"<<setw(5)<<"||   "<<setw(5)<<" ||||"<<setw(5)<<"||   "<<setw(5)<<" ||||"<<"||    |"<<endl;
//    cout<<"     0----0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"  4  |   "<<setw(5)<<" ||||"<<setw(5)<<"|||||"<<setw(5)<<"||   "<<setw(5)<<" ||||"<<setw(5)<<"|||||"<<" |    |"<<endl;
//    cout<<"     0----0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"  5  |   "<<setw(5)<<" ||||"<<setw(5)<<"||   "<<setw(5)<<" ||||"<<setw(5)<<"||   "<<setw(5)<<" ||||"<<"||    |"<<endl;
//    cout<<"     0----0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"  6  |   "<<setw(5)<<" |   "<<setw(5)<<" ||||"<<setw(5)<<"|||||"<<setw(5)<<"|||||"<<setw(5)<<"||   "<<" |    |"<<endl;
//    cout<<"     0----0----0----0----0----0----0----0"<<endl;
//    cout<<setw(4)<<"  7  |   "<<setw(5)<<" |   "<<setw(5)<<" |   "<<setw(5)<<" |   "<<setw(5)<<" |   "<<setw(5)<<" |   "<<" |    |"<<endl;
//    cout<<"     0----0----0----0----0----0----0----0"<<endl;
    

    
    
//    //Declare Variables
//    int f0,f1,f2,f3,f4,f5;//Frequency of the sum x -> fx
//    int nThrows;
//    
//    //Initialize Variables
//    f5=f1=f2=f3=f4=0;
//    nThrows=36000;
//    
//    //Process/Map inputs to outputs
//    for(int thrw=1;thrw<=nThrows;thrw++){ 
//        char stick1=rand()%2;//Range [0,1]
//        char stick2=rand()%2;//Range [0,1]
//        char stick3=rand()%2;//Range [0,1]
//        char stick4=rand()%2;//Range [0,1]
//            switch(stick1+stick2+stick3+stick4){
//                case 1: f1++; break;
//                case 2: f2++; break;
//                case 3: f3++; break;
//                case 4: f4++; break;
//                //if (case 4 || case 0)//{
//                    
//                //}
//                case 0: f5++; break;
//                default:cout<<"Error"<<endl;
//            }
//    }
////    return 0;
////}    
//         
//    cout<<"Press enter to throw the 4 wood sticks"<<endl;
//    cin.getline>>user;
//    
//    bool stick1,stick2,stick3,stick4;
//    if(stick1=='B' && stick2=='B' && stick3=='B' && stick4=='B') {
//        cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
//        cout<<"You will move 5 steps, and you have bonus to throw the sticks again"<<endl;
//        cout<<"Press enter to throw the 4 wood sticks"<<endl;
//        cin.getline>>user;
//    }else if(stick1=='F' && stick2=='F' && stick3=='F' && stick4=='F') {
//        cout<<cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
//        cout<<"You will move 4 steps, and you have bonus to throw the sticks again"<<endl;
//        cout<<"Press enter to throw the 4 wood sticks"<<endl;
//        cin.getline>>user;
//    }else if(stick1=='F' && stick2=='B' && stick3=='B' && stick4=='B') {
//        cout<<cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
//        cout<<"You will move 1 step"<<endl;
//    }else if(stick1=='F' && stick2=='F' && stick3=='B' && stick4=='B') {
//        cout<<cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
//        cout<<"You will move 2 steps"<<endl;
//    }else if(stick1=='F' && stick2=='F' && stick3=='F' && stick4=='B') {
//        cout<<cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
//        cout<<"You will move 3 steps"<<endl;
    
    return 0;
}
    
    //Output data
    
    //Exit stage right!
//    return 0;
//}
//
//void gameRPS(){
//    //Declare variable to end the game
//    bool loop=true;
//    
//    
//    
//    //Loop the game until over
//    do{
//        //Begin the game
//        char comp;
//        char user1=userGs();  //User Guess = userGs
//        char user2=userGs();
//        if(user1!='R'&& user1!='S'&& user1!='P' || comp==user1 ||user2!='R'&& user2!='S'&& user2!='P'|| comp==user2){ //not equal to r and notequaltos and notequaltop
//            loop=false;
//        }else{
//            char comp=cmptrGs();
//            cout<<winner(comp,user1,user2)<<endl;  //who is win?
//        }
//        
//    //End the game
//    }while(loop); //}while(loop);  //as while(false), if false, stop the loop 
//}
//
//string winner(char c,char u1,char u2){
//    if(c==u1==u2)return "Tie";
//    if(c=='P'){
//        if(u1=='R')return "Computer goes first";  //computer win, User lose
//        else return "User goes first";   //user win
//    }
//    if(c=='S'){
//        if(u1=='p')return "Computer goes first";  //computer win, User lose
//        else return "User goes first";   //User win
//    }
//    if(c=='R'){
//        if(u1=='S')return "Computer goes first";  //Computer win, User lose
//        else return "User goes first";   //User Win
//    }
//}

//char userGs(){
//    char user;
//    cout<<"Input your decision"<<endl;
//    cout<<"R for Rock, P for Paper, S for Scissors"<<endl;
//    cin>>user;
//        
//    return user;
//}

//char userGs(){
//    char user;
//    do{
//        cout<<"Input your decision"<<endl;
//        cout<<"R for Rock, P for Paper, S for Scissors"<<endl;
//        cin>>user;
//    }while(!(user=='R'||user'S'||user=='P'));//Type anything else, question comeback  
//    return user;
//}

//char cmptrGs(){
//    char cChoice; //Computer choice
//    do{
//        cChoice=rand()%4+80; //P,Q,R,S Ascci code
//    }while(cChoice=='Q');
//    return cChoice;
//} 

        //    cout<<endl<< a5 <<setw(4)<< b5 <<setw(4)<< c5 <<setw(4)<< d5 <<setw(4)<< e5 <<setw(4)<< f5 <<endl;
//    cout<<endl<< a4 <<setw(4)<< b4 <<setw(4)<< c4 <<setw(4)<< d4 <<setw(4)<< e4 <<setw(4)<< f4 <<endl;
//    cout<<endl<< a3 <<setw(4)<< b3 <<setw(4)<< c3 <<setw(4)<< d3 <<setw(4)<< e3 <<setw(4)<< f3 <<endl;            
//    cout<<endl<< a2 <<setw(4)<< b2 <<setw(4)<< c2 <<setw(4)<< d2 <<setw(4)<< e2 <<setw(4)<< f2 <<endl;
//    cout<<endl<< a1 <<setw(4)<< b1 <<setw(4)<< c1 <<setw(4)<< d1 <<setw(4)<< e1 <<setw(4)<< f1 <<endl;        
//   

//   bool stick1,stick2,stick3,stick4;  //int?
    if(stick1=='B' && stick2=='B' && stick3=='B' && stick4=='B') {
        cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
        cout<<"You will move 5 steps, and you have bonus to throw the sticks again"<<endl;
        cout<<"Press enter to throw the 4 wood sticks"<<endl;
        cin.getline>>user;
    }else if(stick1=='F' && stick2=='F' && stick3=='F' && stick4=='F') {
        cout<<cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
        cout<<"You will move 4 steps, and you have bonus to throw the sticks again"<<endl;
        cout<<"Press enter to throw the 4 wood sticks"<<endl;
        cin.getline>>user;
    }else if(stick1=='F' && stick2=='B' && stick3=='B' && stick4=='B') {
        cout<<cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
        cout<<"You will move 1 step"<<endl;
    }else if(stick1=='F' && stick2=='F' && stick3=='B' && stick4=='B') {
        cout<<cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
        cout<<"You will move 2 steps"<<endl;
    }else if(stick1=='F' && stick2=='F' && stick3=='F' && stick4=='B') {
        cout<<cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
        cout<<"You will move 3 steps"<<endl;
    