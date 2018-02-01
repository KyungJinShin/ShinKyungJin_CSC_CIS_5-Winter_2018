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

void showGrid(vector<char> &, vector<char> &);
int throwStick();

//Execution Begins Here
int main(int argc, char** argv)  {    
    //Generate Random Number Seed
    srand(static_cast<unsigned int>(time(0)));  //Random Number Generator
    
    //Declare Variables
    char comput; //Computer for Rock-Paper-Scissors game
    char player;
    //string player; //Player for Rock-Paper-Scissors game
    short user=0;   //User for Yut Nori Game
    short comp=0;   //Computer for Yut Nori Game
    
    int num;     //Integer Number, but I will range to 0 to 3
    string winner; //File winner name of Rock-Paper-Scissors game  p283
    //unsigned short nsteps = 21;
    //unsigned short nsticks = 4;
    //VARIABLES FOR WOOD STICKS GAME
    vector<char> x(21, ' '); // to store 'x' on a current position and a space on other positions
    vector<char> y(21, ' '); // to store 'o' on a current position and a space on other positions
    
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
    
    /*------------------------Yut Nori Game---------------------------------------------------------------*/
    
    cout<<endl<<"This is the Yut Nori Game Board"<<endl;
    cout<<"Arriving from Starting position (a 0) to (a 20) is winning the game"<<endl<<endl;
    showGrid(x,y);  //showGrid(y);
    
    comp=0;
    user=0;
    int count=0;
    int nsteps = 21;
    /*
    true | false
    true == black
    false = white
    */ 
    cout<<"User(x),Computer(y)"<<endl;
    do{
        //Player goes first
        cout<<"Press enter to throw the 4 wood sticks : ";
        cin.get();
        do {
            count = throwStick(); x[user]=' ';
            user += count;
            cout<<endl<<"User(x) will move "<<count<<" steps."<<endl;
            //Print the User's Grid
            x[user]='x'; //'x'mark; //positoin+=count;
                        //make x[position]=' '; somewhere after you display it and before you throw sticks again
            showGrid(x,y); 
                    
            if (user==comp){
                y[comp]=' ';
                count=0;
                comp=0;
                //comp += count;
                cout<<"User(x) catched the computer's piece(y). Computer piece(y) go back to starting position (a 0)"<<endl;
                showGrid(x,y);
                y[comp]='y';
                cout<<endl;
            
            if (count==4 || count==5 ) cout<<"User(x) has bonus to throw the sticks again"<<endl;    
            }
            

        }while(count==4 || count==5);
        
        
            cout<<"And now Computer's(y) turn..."<<endl<<endl;
            do{
                count = throwStick(); y[comp]=' ';
                //Print the Computer's Grid
                if (count==0) count=5;
                    cout<<endl<<"Computer(y) will move "<<count<<" steps."<<endl;
                    comp+=count; y[comp]='y'; //'y' mark; //position+=count;
                        //make y[position]=' '; somewhere after you display it and before you throw sticks again
                    showGrid(x,y);  
                
                if (comp==user){
                    x[comp]=' ';
                    count=0;
                    user=0;
                    //user += count;
                    cout<<"Computer(y) catched the user's piece(x). User piece(x) go back to starting position (a 0)"<<endl;
                    showGrid(x,y); 
                    x[user]='x';
                    cout<<endl;
                    
                if (count==4 || count==5 ) cout<<"Computer(y) has bonus to throw the sticks again"<<endl;   
                }    
                    
            }while(count==4 || count==5);
  
        if (user>=nsteps){
            cout<<"Congraulation! User(x) won!"<<endl;   
        }else if (comp>=nsteps){
            cout<<"Sorry. Computer(y) has won. User(x) lost"<<endl;
        }
    }while(!(comp>=nsteps) && !(user>=nsteps)); //== while(!(comp>=nsteps) || !(user>=nsteps))  = while(comp<nsteps || user<nsteps)
    
    return 0;
}
    
//    //Output the game statistics to the screen
//    cout<<fixed<<setprecision(2)<<showpoint;
//    cout<<"The winner = "<<winner<<endl;  //file the winner
//    cout<<"Total number of Games = "<<nGames<<endl;
//    cout<<"Number of games won   = "<<wins<<endl;
//    cout<<"Number of games lost  = "<<losses<<endl;
//    cout<<"Total wins and losses = "<<wins+losses<<endl;
//    cout<<"Percentage wins       = "
//            <<static_cast<float>(wins)/nGames*100.0f<<"%"<<endl;
//    cout<<"Percentage losses     = "
//            <<static_cast<float>(losses)/nGames*100.0f<<"%"<<endl;
//
//    //Output the game statistics to a file
//    out<<fixed<<setprecision(2)<<showpoint;
//    cout<<"The winner = "<<winner<<endl;
//    out<<"Total number of Games = "<<nGames<<endl;
//    out<<"Number of games won   = "<<wins<<endl;
//    out<<"Number of games lost  = "<<losses<<endl;
//    out<<"Total wins and losses = "<<wins+losses<<endl;
//    out<<"Percentage wins       = "
//            <<static_cast<float>(wins)/nGames*100.0f<<"%"<<endl;
//    out<<"Percentage losses     = "
//            <<static_cast<float>(losses)/nGames*100.0f<<"%"<<endl;
//
//    //Close Files and Exit stage right!
//    in.close();
//    out.close();
// 
//    
//    
//    
//    
//    return 0;
//}
    
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

//void read(fstream & input,string fn,vector<char> &ans,int n){
//    //Open the file
//    input.open(fn.c_str(),ios::in);
//
//    //Read the data from the file
//    for(int i=0;i<n;i++){
//        input>>ans[i];
//        //cout<<ans[i];
//    }
//
//    //Close the file
//    input.close();
//}
//
//void read(ifstream & input,char fn[],vector<char> &ans){
//    //Open the file
//    input.open(fn);
//    
//    //Read the data from the file
//    int i=0;
//    while(input>>ans[i++]);
//
//    //Close the file
//    input.close();
//}

int throwStick() {
    //int sticks;
    int count = 0;
    bool sticks[4] = {false, false, false, false};
    cout<<"The 4 wood sticks are :"<< setw(7); // start displaying a message
    for( int i = 0; i<4; i++ ){
            sticks[i]=rand()%2; // 0 (false) or 1 (true)
            cout<<setw(7); // so "black" or "white" is shown with 7 width
            if( sticks[i] ){
                //its black
                count++;
                cout <<"black";
            } else  cout << "white"; 
     }
    if (count==0) count=5; 

    cout<<endl;
       
    return count;
}

void showGrid(vector<char> &x, vector<char> &y) {
    cout<<setw(10)<<"a"<<endl;
    cout<<setw(13)<<right<<"0------0"<<endl;
    
    for(short i=0; i<1; i++) {  // i<7
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |  START"<<endl;
        cout<<setw(13)<<"0------0"<<endl;
    }
    for(short i=1; i<20; i++) {  // i<7
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;
        cout<<setw(13)<<"0------0"<<endl;
    }
    for(short i=20; i<21; i++) {  // i<7
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;
        cout<<setw(13)<<"0------0"<<endl;
        cout<<setw(13)<<"   END  "<<endl;
    }
}