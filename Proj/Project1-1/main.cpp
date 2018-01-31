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
#include <vector>   //Vector Function Library
#include <fstream>  //File Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
//void read(ifstream &,char[],vector<char> &);
//
//void read(fstream &,string,vector<char> &);
//
//int  score(vector<char> &,vector<char> &);

void write(ofstream &,string,vector<char> &,vector<char> &);
void read(fstream &,string,vector<char> &,int);
void write(ofstream &,string,vector<char> &,vector<char> &,int);
void showGrid(vector<char> &);

//Execution Begins Here
int main(int argc, char** argv)  {    
    //Generate Random Number Seed
    srand(static_cast<unsigned int>(time(0)));  //Random Number Generator
    
    //Declare Variables
    char comput; //Computer for Rock-Paper-Scissors game
    char comp;   //Computer for Yut Nori Game
    char player;
    //string player; //Player for Rock-Paper-Scissors game
    char user;   //User for Yut Nori Game
    int num;     //Integer Number, but I will range to 0 to 3
    string winner; //File winner name of Rock-Paper-Scissors game  p283
    unsigned short nsteps = 21;
    //unsigned short nsticks = 4;
    //VARIABLES FOR WOOD STICKS GAME
    vector<char> x(21, ' '); // to store 'x' on a current position and a space on other positions
    unsigned short position = 0; // to store curr
    
    //Declare file and game variables
    ifstream in;               //Input File
    ofstream out;              //Output File
    int nGames,wins=0,losses=0;//Number of games, wins/losses
    
    //Initialize variables
    string inName="GameInfo.dat";   //String Name
    char outName[]="GameStats.dat"; //Character Array Name
    in.open(inName.c_str());        //Open the Input file
    out.open(outName);              //Open the Output file
    while(in>>nGames);//Last value in file becomes the number of games
    
    //Start the Game
    cout<<"This is Yut Nori, Korean New Years Game"<<endl;
//    ofstream outFlie; //outputFile
//    string player;
//    //Open an output file.
//    output.open("username.dat"); //outputFile
//    //Get the username of the player
//    cout<<"Input your user name for this game"<<endl;
//    cin>>player;
    
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
        //output<<player<<
    }else if(comput=='R' && player=='S') {  //When player choose Scissor,and computer choose Rock 
        cout<<"The player is lose, so the player goes second"<<endl;
//        outFile
    }else if(comput=='P' && player=='S') {  //When player choose Scissor,and computer choose Paper 
        cout<<"The player is win, so the player goes first"<<endl;     
    }else if(comput=='P' && player=='R') {  //When player choose Rock,and computer choose Paper 
        cout<<"The player is lose, so the player goes second"<<endl;
    }else if(comput=='S' && player=='R') {  //When player choose Rock,and computer choose Scissor
        cout<<"The player is win, so the player goes first"<<endl;
    }else if(comput=='S' && player=='P') {  //When player choose Paper,and computer choose Scissor
        cout<<"The player is lose, so the player goes second"<<endl;
    }
    

    cout<<endl<<"This is the Yut Nori Game Board"<<endl;
    cout<<"Arriving from Starting position a0 to a20 is winning the game"<<endl<<endl;
    showGrid(x);
    
    string who;
    char mark;
    who=(player%2)?"user":"computer";
    cout<<"Press enter to throw the 4 wood sticks : ";
    cin.get();
    //cin>>choice;
    mark=(user==1)?'X':'O';
    /*
    true | false
    true == black
    false = white
    */ 
    cout<<"User1(X),Computer(O)"<<endl;
    for (int j=0; j < nsteps; j++){
        bool sticks[4] = {false, false, false, false};

        int count = 0;
        cout<<"The 4 wood sticks are :"; // start displaying a message

        for( int i = 0; i < 4; i++ ){
            sticks[i]=rand()%2; // 0 (false) or 1 (true)
            if( sticks[i] ){
                //its black
                count++;        
                cout << setw(4)<<" black";
            } else  cout << setw(4)<<" white"; 
        }    
            if(count==0) count=5;
            cout<<endl<<who<<" will move "<<count<<" steps."<<endl;
            position+=count; x[position]=mark; //'x';
            position+=count; o[position]=mark;
                //make x[position]=' '; somewhere after you display it and before you throw sticks again
            showGrid(x); x[position]=' ';
            showGrid(o); o[position]=' ';
            if(position >= nsteps){
                cout<<"Congraulation! "<<who<<" arrived at the Final position"<<endl;
                //return 0;        
            }

            if(count==4 || count==5 ) cout<<who<<" has/have bonus to throw the sticks again"<<endl;
            cout<<"Press enter to throw the 4 wood sticks"<<endl;
            cin.get();
            cout << endl;    
    }
    
    
//    int time=0;
//    while (++time<nsteps){
//        cout<<"Press enter to throw the 4 wood sticks"<<endl;
//        cin.get();  //Enter to move on
        
    
    //Output the game statistics to the screen
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The winner = "<<winner<<endl;  //file the winner
    cout<<"Total number of Games = "<<nGames<<endl;
    cout<<"Number of games won   = "<<wins<<endl;
    cout<<"Number of games lost  = "<<losses<<endl;
    cout<<"Total wins and losses = "<<wins+losses<<endl;
    cout<<"Percentage wins       = "
            <<static_cast<float>(wins)/nGames*100.0f<<"%"<<endl;
    cout<<"Percentage losses     = "
            <<static_cast<float>(losses)/nGames*100.0f<<"%"<<endl;

    //Output the game statistics to a file
    out<<fixed<<setprecision(2)<<showpoint;
    cout<<"The winner = "<<winner<<endl;
    out<<"Total number of Games = "<<nGames<<endl;
    out<<"Number of games won   = "<<wins<<endl;
    out<<"Number of games lost  = "<<losses<<endl;
    out<<"Total wins and losses = "<<wins+losses<<endl;
    out<<"Percentage wins       = "
            <<static_cast<float>(wins)/nGames*100.0f<<"%"<<endl;
    out<<"Percentage losses     = "
            <<static_cast<float>(losses)/nGames*100.0f<<"%"<<endl;

    //Close Files and Exit stage right!
    in.close();
    out.close();
 
    
    
    
    
    return 0;
}
    
//void write(ofstream &output,string fn,vector<char> &ans,vector<char> &test,int n){
//    //Open the file for writing
//    output.open(fn.c_str());
//   
//    //Process/Calculations and output the result
//    int correct=score(ans,test,n);
//    output<<"Correct Answers = "<<correct
//            <<" out of "<<n<<endl;
//    output<<"Percentage score = "
//            <<100.0f*correct/n<<"%"
//            <<endl;
//
//    //Close the file
//    output.close();
//}

void read(fstream & input,string fn,vector<char> &ans,int n){
    //Open the file
    input.open(fn.c_str(),ios::in);

    //Read the data from the file
    for(int i=0;i<n;i++){
        input>>ans[i];
        //cout<<ans[i];
    }

    //Close the file
    input.close();
}

void read(ifstream & input,char fn[],vector<char> &ans){
    //Open the file
    input.open(fn);
    
    //Read the data from the file
    int i=0;
    while(input>>ans[i++]);

    //Close the file
    input.close();
}

void showGrid(vector<char> &x) {
    cout<<setw(8)<<"a"<<endl;
    cout<<setw(11)<<right<<"0----0"<<endl;
    
    for(short i=0; i<7; i++) {  // i<7
        cout<<setw(3)<<i<<"  |  "<<x[i]<<" |"<<endl;
        cout<<setw(11)<<"0----0"<<endl;
    }
    for(short i=7; i<21; i++) {  // i<7
        cout<<setw(3)<<i<<"  |  "<<x[i]<<" |"<<endl;
        cout<<setw(11)<<"0----0"<<endl;
    }
}