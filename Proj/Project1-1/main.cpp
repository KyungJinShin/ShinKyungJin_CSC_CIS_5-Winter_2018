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
#include <vector>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void showGrid(vector<char> &);

//Execution Begins Here
int main(int argc, char** argv)  {    
    //Generate Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char comput; //computer for rock game
    char comp; //computer
    char player;//player
    char user;//user 1
    int num;   //Integer Number, but I will range to 0 to 3
    //char user2;//user 2
    // unsigned short sticks = 4;
    //VARIABLES FOR WOOD STICKS GAME
    vector<char> x(7, ' '); // to store 'x' on a current position and a space on other positions
    unsigned short position = 0; // to store curr
    
    //Start the Game
    cout<<"This is Yut Nori, Korean New Years Game"<<endl;
    cout<<"To choose who goes first, play the Rock - Paper - Scissors"<<endl;
    
    //Rock - Paper - Scissors Game  
    //Initialize Variables
    num=rand()%3; // number of 0 to 2
    
    if (num==0)      comput='R';  //When number=0, computer is Rock 
    else if (num==1) comput='S';  //When number=1, computer is Scissor
    else  comput='P';  //When number=2, computer is Paper -> if (num==2)
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
            // while (player!='R' && .. !='P' && !='S') cout << "Please enter R, S, or P only."<<endl;
            // (cout<<"(or type X to exit the program."<<endl; if(player=='X') exit();  )
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

    cout<<"This is the Yut Nori Game Board"<<endl;
    cout<<"Arriving from a7 to a1 is winning the game"<<endl<<endl;
    showGrid(x);
    // I WOULD MAKE IT A FUNCTION
//    cout<<setw(8)<<"a"<<endl;
//    cout<<setw(11)<<right<<"0----0"<<endl;
//    
//    for(short i=0; i<7; i++) {
//        cout<<setw(3)<<i<<"  |  "<<x[i]<<" |"<<endl;
//        cout<<setw(11)<<"0----0"<<endl;
//    } // UNTIL HERE
    
//    cout<<setw(6)<<"2  |  "<<a2>>"  |"<<endl;
//    cout<<"     0----0"<<endl;
//    cout<<setw(6)<<"  3  |    |"<<endl;
//    cout<<"     0----0"<<endl;
//    cout<<setw(6)<<"  4  |    |"<<endl;
//    cout<<"     0----0"<<endl;
//    cout<<setw(4)<<"  5  |    |"<<endl;
//    cout<<"     0----0"<<endl;
//    cout<<setw(4)<<"  6  |    |"<<endl;
//    cout<<"     0----0"<<endl;
//    cout<<setw(4)<<"  7  |    |"<<endl;
//    cout<<"     0----0"<<endl;
//    
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
   
         
    cout<<"Press enter to throw the 4 wood sticks"<<endl;
    cin.get();
    /*
    true | false
    true == black
    false = white
    */
        
        
    bool sticks[4] = {false, false, false, false};
    
    int count = 0;
    cout<<"The 4 wood sticks are"; // start displaying a message
            
    for( int i = 0; i < 4; i++ ){
        sticks[i]=rand()%2; // 0 (false) or 1 (true)
        if( sticks[i] ){
            //its black
            count++;        
            cout << setw(4)<<" black";
        } else { cout << setw(4)<<" white"; }
    } cout << endl;
        //cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
       if(count==0) count=5;
       cout<<"You will move "<<count<<" steps."<<endl;
       position+=count; x[position]='x'; 
            //make x[position]=' '; somewhere after you display it and before you throw sticks again
       showGrid(x); x[position]=' ';
       
       if(count==4 || count==5 ) cout<<"You have bonus to throw the sticks again"<<endl;
        cout<<"Press enter to throw the 4 wood sticks"<<endl;
        cin.get();
 

    
    



//    bool sticks[4] = {true, true, true, true};
//    int count = 0;
//    for( int i = 0; i < 4; i++ ){
//        if( sticks[i] ){
//            //its black
//            count++;
//        }
//        cout<<cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
//        cout<<"You will move 4 steps, and you have bonus to throw the sticks again"<<endl;
//        cout<<"Press enter to throw the 4 wood sticks"<<endl;
//    }
//    bool sticks[4] = {true, false, false, false};
//    int count = 0;
//    for( int i = 0; i < 4; i++ ){
//        if( sticks[i] ){
//            //its black
//            count++;
//        }
//        cout<<cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
//        cout<<"You will move 1 step"<<endl;
//    }
//    bool sticks[4] = {true, true, false, false};
//    int count = 0;
//    for( int i = 0; i < 4; i++ ){
//        if( sticks[i] ){
//            //its black
//            count++;
//        }
//        cout<<cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
//        cout<<"You will move 2 steps"<<endl;
//    }
//    bool sticks[4] = {true, true, true, false};
//    int count = 0;
//    for( int i = 0; i < 4; i++ ){
//        if( sticks[i] ){
//            //its black
//            count++;
//        }
//        cout<<cout<<"The 4 wood sticks are "<<stick1<<setw(4)<<stick2<<setw(4)<<stick3<<setw(4)<<stick4<<endl;
//        cout<<"You will move 3 steps"<<endl;
//    }

    
 
    
    
    
    
    return 0;
}
    



void showGrid(vector<char> &x) {
    cout<<setw(8)<<"a"<<endl;
    cout<<setw(11)<<right<<"0----0"<<endl;
    
    for(short i=0; i<7; i++) {
        cout<<setw(3)<<i<<"  |  "<<x[i]<<" |"<<endl;
        cout<<setw(11)<<"0----0"<<endl;
    }
}