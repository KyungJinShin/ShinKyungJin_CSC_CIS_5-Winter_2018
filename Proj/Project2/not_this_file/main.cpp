/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 28, 2018, 1:20 PM
 * Purpose: Project 2 - Yut Nori Game (Korean New Years Game)
 */
//system Libraries
#include <iostream> //I/O Library
#include <cmath>    //Math Library
#include <iomanip>  //Formatting Library
#include <cstdlib>  //Random Number Generator
#include <ctime>    //Time to Seed Random Number
#include <vector>   //Vector Function Library
#include <fstream>  //File Library
#include <string>   //String Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int ROWS=7, COLS=7; //Total 7 Columns

//Function Prototypes
void grid(vector<char> &, vector<char> &);
int thrwSt();
void  fillAry(float [][COLS],int);  //[][COLS]  == 2-D
void  prntAry(float [][COLS],int);
void show(int[][COLS], int);
//void show(const int[][COLS], int);

//Execution Begins Here
int main(int argc, char** argv)  {    
    //Generate Random Number Seed
    srand(static_cast<unsigned int>(time(0)));  //Random Number Generator
    
    //Declare Variables
    char comput; //Computer for Rock-Paper-Scissors game
    char player; //Player for Rock-Paper-Scissors game
    short user=0;   //User for Yut Nori Game
    short comp=0;   //Computer for Yut Nori Game
    int num;        //Integer Number, but I will range to 0 to 3
    string winner;  //To file the winner of Yut Nori Game
    //Variables for wood sticks game 
    vector<char> x(21, ' '); // to store 'x' on a current position and a space on other positions
    vector<char> y(21, ' '); // to store 'y' on a current position and a space on other positions
    
//    //Declare file and game variables
//    ofstream out; //Output File
//    fstream data; //Input and Output File
//    data.open("winner.txt", ios::out);  //Open the output file
//    
//    //Initialize variables
//    char outName[]="GameStats.txt"; //Character Array Name
//    out.open(outName);              //Open the Output File
//
//    //Start the Game
//    string greet = "Hello ";        //Print out "Hello" when I use greet
//    cout<<greet<<" This is Yut Nori, Korean New Years Game"<<endl;
//    cout<<"To choose who goes first, play the Rock - Paper - Scissors"<<endl;
//    
//    //Rock - Paper - Scissors Game  
//    //Initialize Variables
//    num=rand()%3; // number of 0 to 2
//    
//    switch(num){
//        case 0: comput='R'; break;  //when number is 0, computer print out 'R'
//        case 1: comput='S'; break;  //when number is 1, computer print out 'S'
//        case 2: comput='P'; break;  //when number is 2, computer print out 'P'
//    }
//
//    while(player!='R' && player!='S' && player!='P') {
//        cout<<"What is your choice between rock as R, paper as P, and scissor as S ?"<<endl;
//        cout<<"Input only upper case of R, P, and S"<<endl;
//        cin>>player;     //If you input other than upper case of R,S,P, you have to try again. 
//    }
//    
//    //Process/Map inputs to outputs
//    cout<<"The player plays "<<player<<endl;    //Display what player chose
//    cout<<"The computer plays "<<comput<<endl;  //Display what computer chose
//    if(comput==player) {                        //When computer and player chose same thing
//        cout<<"This game is tie"<<endl;
//        do{
//            cout<<"What is your choice between rock as R, paper as P, and scissor as S ?"<<endl;
//            cin>>player;
//            cout<<"The player plays "<<player<<endl;
//            cout<<"The computer plays "<<comput<<endl;         
//        }while(comput==player);                 //Loop this until computer and player chose different
//    }
//    
// /*------------------------Player goes First ------Yut Nori Game--------------------------------*/
//    if((comput=='R' && player=='P') || (comput=='P' && player=='S') || (comput=='S' && player=='R')){        
//        cout<<"The player is win, so the player goes first"<<endl;
//        //When player choose Paper,and computer choose Rock 
//        //When player choose Scissor,and computer choose Paper  
//        //When player choose Rock,and computer choose Scissor
//        
        /*------------------------Yut Nori Game-------------------------------------------------*/
        //const int ROWS=7;   //Total 7 Rows 
        int board[ROWS][COLS];
        //float board[ROWS][COLS];
        grid (board,ROWS)
        show (board,ROWS)
        
                
        cout<<endl<<"This is the Yut Nori Game Board"<<endl;
        cout<<"Arriving from Starting position (a 0) to (a 20) is winning the game"<<endl<<endl;
        grid(x,y);  //Display the Yut Nori Board Game Grid

        float poss,a,b,c; //Possible, 3 different chances to get when you throw the sticks
        a=0.25f;   //1/4 chance to get (1 black,3 white) or (4 black,1 white)
        b=0.375f;  //3/8 chance to get (2 black,2 white)
        c=0.0625f; //1/16 chance to get (4 black,0 white) or (0 black,4 white)
        float max; //Find maximum chances
        poss = c<a?max:0;
        max=fmax(a,c); //Using (cmath Library) to determine which one is more possible to get frequently between a and c 
        cout<<fixed<<setprecision(2)<<showpoint; //2 decimal points
        cout<<endl<<"When you throw the 4 sticks, "<<endl;
        cout<<"Percentage to get 1 black and 3 white = "
                <<a*100.0f<<"%"<<endl;   //(1/4)*100% possible
        cout<<"Percentage to get 2 black and 2 white = "
                <<b*100.0f<<"%"<<endl;   //(3/8)*100% possible
        cout<<"Percentage to get 3 black and 1 white = "
                <<max*100.0f<<"%"<<endl; //(1/4)*100% possible
        cout<<"Percentage to get 4 black and 0 white = "
                <<setw(5)<<c*100.0f<<"%"<<endl;   //(1/16)*100% possible
        cout<<"Percentage to get 0 black and 4 white = "
                <<setw(5)<<c*100.0f<<"%"<<endl<<endl; //(1/16)*100% possible

        comp=0; //Initialize computer is 0
        user=0; //Initialize user is 0
        int count=0; //Initialize count is 0
        int nsteps = 21; //Total positions are 21 steps

        cout<<"User(x),Computer(y)"<<endl; //User's piece is x, Computer's piece is y on the board grid
        do{
            //Player goes first
            cout<<"Press enter to throw the 4 wood sticks : ";
            cin.get();  //Enter to move on
            do {
                count = thrwSt(); x[user]=' ';  //make x[position]=' '; somewhere after you display it and before you throw sticks again
                user += count; //User's positions adding up from each count
                cout<<endl<<"User(x) will move "<<count<<" steps."<<endl;  //Explain how much user will move from the result of sticks

                //Print the User's Grid
                x[user]='x'; // mark 'x'
                grid(x,y);   //Show marks on the grid

                if (user==comp){
                    y[comp]=' ';  //mark ' '. Previous mark will disappear
                    count=0;//Initialize count is 0
                    comp=0; //Initialize computer is 0. Computer go back to starting position because user's piece catched the computer's piece
                    cout<<"User(x) catched the computer's piece(y). Computer piece(y) go back to starting position (a 0)"<<endl;
                    grid(x,y);   //Show new marks on the grid 
                    y[comp]='y'; //mark 'y'
                    cout<<endl;

                if (count==4 || count==5 ) cout<<"User(x) has bonus to throw the sticks again"<<endl;    
                }  //Only when sticks are white,white,white,white or black,black,black,black, throw one more time

            }while(count==4 || count==5); //Loops until sticks are white,white,white,white or black,black,black,black

            //Computer goes next
                cout<<"And now Computer's(y) turn..."<<endl<<endl;
                do{
                    count = thrwSt(); y[comp]=' '; //make y[position]=' '; somewhere after you display it and before you throw sticks again

                    //Print the Computer's Grid
                    if (count==0) count=5; //If you get 4 white, you will move 5 steps
                        cout<<endl<<"Computer(y) will move "<<count<<" steps."<<endl; //Explain how much user will move from the result of sticks
                        comp+=count; //Computer's positions adding up from each count
                        y[comp]='y'; // mark 'y' 
                        grid(x,y);   //Display the new grid

                    if (comp==user){
                        x[comp]=' ';  //mark ' ', previous mark was disappeared
                        count=0;//Initialize count is 0
                        user=0;//Initialize user is 0. User go back to starting position because computer's piece catched the user's piece
                        cout<<"Computer(y) catched the user's piece(x). User piece(x) go back to starting position (a 0)"<<endl;
                        grid(x,y);   //Show new marks on the grid 
                        x[user]='x'; //mark 'x' 
                        cout<<endl;

                    if (count==4 || count==5 ) cout<<"Computer(y) has bonus to throw the sticks again"<<endl;   
                    }    

                }while(count==4 || count==5); //Loops until sticks are white,white,white,white or black,black,black,black

            if (user>=nsteps){ //When user passed the a20 position
                cout<<"Congraulation! User(x) won!"<<endl;
//                data<<"User"<<endl;     //When user won, File the "User"
            }else if (comp>=nsteps){  //When computer passed the a20 position
                cout<<"Sorry. Computer(y) has won. User(x) lost"<<endl;
//                data<<"Computer"<<endl; //When computer won, File the "Computer"
            }
        }while(!(comp>=nsteps) && !(user>=nsteps));  //Loops stop when computer piece or user piece arrived at end of the position
               //same as = while(!(comp>=nsteps) || !(user>=nsteps))  = while(comp<nsteps || user<nsteps)                      
        
        
/*------------------------Computer goes First ------Yut Nori Game--------------------------------*/    
//    }else if((comput=='R' && player=='S') || (comput=='P' && player=='R') || (comput=='S' && player=='P')) {
//        cout<<"The player is lose, so the player goes second"<<endl;
//        //When player choose Scissor,and computer choose Rock 
//        //When player choose Rock,and computer choose Paper
//        //When player choose Paper,and computer choose Scissor
//        
//     /*----------------------------------Yut Nori Game--------------------------------------------*/  
//        const int ROWS=7;   //Total 7 Rows 
//        float board[ROWS][COLS];        
//        
//        cout<<endl<<"This is the Yut Nori Game Board"<<endl;
//        cout<<"Arriving from Starting position (a 0) to (a 20) is winning the game"<<endl<<endl;
//        grid(x,y);  //Display the Yut Nori Board Game Grid
//
//        float a,b,c; //3 different chances to get when you throw the sticks
//        a=0.25f;   //1/4 chance to get (1 black,3 white) or (4 black,1 white)
//        b=0.375f;  //3/8 chance to get (2 black,2 white)
//        c=0.0625f; //1/16 chance to get (4 black,0 white) or (0 black,4 white)
//        float max; //Find maximum chances
//        max=fmax(a,c); //Using (cmath Library) to determine which one is more possible to get frequently between a and c 
//        cout<<fixed<<setprecision(2)<<showpoint; //2 decimal points
//        cout<<endl<<"When you throw the 4 sticks, "<<endl;
//        cout<<"Percentage of getting 1 black and 3 white = "
//                <<a*100.0f<<"%"<<endl;   //(1/4)*100% possible
//        cout<<"Percentage of getting 2 black and 2 white = "
//                <<b*100.0f<<"%"<<endl;   //(3/8)*100% possible
//        cout<<"Percentage of getting 3 black and 1 white = "
//                <<max*100.0f<<"%"<<endl; //(1/4)*100% possible
//        cout<<"Percentage of getting 4 black and 0 white = "
//                <<setw(5)<<c*100.0f<<"%"<<endl;   //(1/16)*100% possible
//        cout<<"Percentage of getting 0 black and 4 white = "
//                <<setw(5)<<c*100.0f<<"%"<<endl<<endl; //(1/16)*100% possible
//
//        comp=0; //Initialize computer is 0
//        user=0; //Initialize user is 0
//        int count=0; //Initialize count is 0
//        int nsteps = 21; //Total positions are 21 steps
//
//        cout<<"User(x),Computer(y)"<<endl; //User's piece is x, Computer's piece is y on the board grid
//        do{
//        //Computer goes first
//            cout<<"And now Computer's(y) turn..."<<endl<<endl;
//            do{
//            count = thrwSt(); y[comp]=' '; //make y[position]=' '; somewhere after you display it and before you throw sticks again
//
//            //Print the Computer's Grid
//            if (count==0) count=5; //If you get 4 white, you will move 5 steps
//                cout<<endl<<"Computer(y) will move "<<count<<" steps."<<endl; //Explain how much user will move from the result of sticks
//                comp+=count; //Computer's positions adding up from each count
//                y[comp]='y'; // mark 'y' 
//                grid(x,y);   //Display the new grid
//
//            if (comp==user){
//                x[comp]=' ';  //mark ' ', previous mark was disappeared
//                count=0;//Initialize count is 0
//                user=0;//Initialize user is 0. User go back to starting position because computer's piece catched the user's piece
//                cout<<"Computer(y) catched the user's piece(x). User piece(x) go back to starting position (a 0)"<<endl;
//                grid(x,y);   //Show new marks on the grid 
//                x[user]='x'; //mark 'x' 
//                cout<<endl;
//
//            if (count==4 || count==5 ) cout<<"Computer(y) has bonus to throw the sticks again"<<endl;   
//            }   
//                
//            }while(count==4 || count==5); //Loops until sticks are white,white,white,white or black,black,black,black
//
//        //Player goes first
//            cout<<"Press enter to throw the 4 wood sticks : ";
//            cin.get();  //Enter to move on
//            do {
//                count = thrwSt(); x[user]=' ';  //make x[position]=' '; somewhere after you display it and before you throw sticks again
//                user += count; //User's positions adding up from each count
//                cout<<endl<<"User(x) will move "<<count<<" steps."<<endl;  //Explain how much user will move from the result of sticks
//
//                //Print the User's Grid
//                x[user]='x'; // mark 'x'
//                grid(x,y);   //Show marks on the grid
//
//                if (user==comp){
//                    y[comp]=' ';  //mark ' '. Previous mark will disappear
//                    count=0;//Initialize count is 0
//                    comp=0; //Initialize computer is 0. Computer go back to starting position because user's piece catched the computer's piece
//                    cout<<"User(x) catched the computer's piece(y). Computer piece(y) go back to starting position (a 0)"<<endl;
//                    grid(x,y);   //Show new marks on the grid 
//                    y[comp]='y'; //mark 'y'
//                    cout<<endl;
//
//                if (count==4 || count==5 ) cout<<"User(x) has bonus to throw the sticks again"<<endl;    
//                }  //Only when sticks are white,white,white,white or black,black,black,black, throw one more time
//
//                }while(count==4 || count==5); //Loops until sticks are white,white,white,white or black,black,black,black
//    
//            if (user>=nsteps){ //When user passed the a20 position
//                cout<<"Congraulation! User(x) won!"<<endl;
//                data<<"User"<<endl;     //When user won, File the "User"
//            }else if (comp>=nsteps){  //When computer passed the a20 position
//                cout<<"Sorry. Computer(y) has won. User(x) lost"<<endl;
//                data<<"Computer"<<endl; //When computer won, File the "Computer"
//            }
//        }while(!(comp>=nsteps) && !(user>=nsteps));  //Loops stop when computer piece or user piece arrived at end of the position
//           //same as = while(!(comp>=nsteps) || !(user>=nsteps))  = while(comp<nsteps || user<nsteps)                              
//    }
//    
//    //Output the game statistics to the screen
//    data.close();  //Close the Output Data File
//    
//    data.open("winner.txt", ios::in); //Open the Input Data File
//    if (data>>winner){                
//       cout<<"The winner = "<<winner<<endl;  //File the winner 
//    }
//    cout<<"The last game winner = "<<winner<<endl; //Display on the screen
//    
//    //Output the game statistics to a file
//    if (data>>winner){
//       cout<<"The winner = "<<winner<<endl;  //File the winner 
//    }
//    out<<"The last game winner = "<<winner<<endl;  //Display on the GameStats.txt File
//    
//    //Close Files and Exit stage right!
//    data.close();  
//    out.close();
// 
    return 0;
}

int thrwSt() {
    /*
    true | false
    true == black
    false = white
    */ 
    int count = 0; //Initialize count is 0
    bool sticks[4] = {false, false, false, false}; //Order of white or black does not matter. Total black and total white is matter.
    cout<<"The 4 wood sticks are :"<< setw(7); // start displaying a message
    for( int i = 0; i<4; i++ ){      //When position is 0
            sticks[i]=rand()%2; // 0 (false) or 1 (true)
            cout<<setw(7); // so "black" or "white" is shown with 7 width
            if( sticks[i] ){
                //its black
                count++;             //Incresement each time
                cout <<"black";      //True for black
            } else  cout << "white"; //False for white
     }
    if (count==0) count=5;  //If you get 4 white, you will move 5 steps
    cout<<endl;
       
    return count; //Return to count
}

void prntAry(float array[][COLS], int rows) {
    //Heading
    cout<<setw(COLS+8)<<" "<<"Yut Nori Game Board"<<endl;
         //" " is left justify. it affects COLS+8
         //heading will move depending on columns, add 8 for the first portion
    cout<<"        ";
    cout<<setw(10)<<"a"<<setw(4)<<"b"<<setw(4)<<"c"<<setw(4)<<"d"<<setw(4)<<"e"<<setw(4)<<"f"<<setw(4)<<"g"<<endl;
    cout<<setw(13)<<right<<"0------0------0------0------0------0------0------0"<<endl;
    
    for
    
    for(short i=0; i<1; i++) {  // Display a0 position
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |  START"<<endl;
        cout<<setw(13)<<"0------0------0------0------0------0------0------0"<<endl;
    }
    for(short i=1; i<6; i++) {  // Display a1 to a19 positions
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;  
        //user piece(x) and computer piece(y) will show in the square position
        cout<<setw(13)<<"0------0------0------0------0------0------0------0"<<endl;
    }
    for(short i=6; i<7; i++) {  // Display a20 position
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;
        //user piece(x) and computer piece(y) will show in the square position
        cout<<setw(13)<<"0------0------0------0------0------0------0------0"<<endl;
        cout<<setw(13)<<"   END  "<<endl;
    }
    
    cout<<setw(10)<<"b"<<endl;
    cout<<setw(13)<<right<<"0------0"<<endl;
    
    for(short i=0; i<1; i++) {  // Display a0 position
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |  START"<<endl;
        cout<<setw(13)<<"0------0"<<endl;
    }
    for(short i=1; i<20; i++) {  // Display a1 to a19 positions
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;  
        //user piece(x) and computer piece(y) will show in the square position
        cout<<setw(13)<<"0------0"<<endl;
    }
    for(short i=20; i<21; i++) {  // Display a20 position
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;
        //user piece(x) and computer piece(y) will show in the square position
        cout<<setw(13)<<"0------0"<<endl;
        cout<<setw(13)<<"   END  "<<endl;
    }    

    cout<<setw(10)<<"c"<<endl;
    cout<<setw(13)<<right<<"0------0"<<endl;
    
    for(short i=0; i<1; i++) {  // Display a0 position
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |  START"<<endl;
        cout<<setw(13)<<"0------0"<<endl;
    }
    for(short i=1; i<20; i++) {  // Display a1 to a19 positions
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;  
        //user piece(x) and computer piece(y) will show in the square position
        cout<<setw(13)<<"0------0"<<endl;
    }
    for(short i=20; i<21; i++) {  // Display a20 position
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;
        //user piece(x) and computer piece(y) will show in the square position
        cout<<setw(13)<<"0------0"<<endl;
        cout<<setw(13)<<"   END  "<<endl;
    }

    cout<<setw(10)<<"d"<<endl;
    cout<<setw(13)<<right<<"0------0"<<endl;
    
    for(short i=0; i<1; i++) {  // Display a0 position
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |  START"<<endl;
        cout<<setw(13)<<"0------0"<<endl;
    }
    for(short i=1; i<20; i++) {  // Display a1 to a19 positions
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;  
        //user piece(x) and computer piece(y) will show in the square position
        cout<<setw(13)<<"0------0"<<endl;
    }
    for(short i=20; i<21; i++) {  // Display a20 position
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;
        //user piece(x) and computer piece(y) will show in the square position
        cout<<setw(13)<<"0------0"<<endl;
        cout<<setw(13)<<"   END  "<<endl;
    }

    cout<<setw(10)<<"e"<<endl;
    cout<<setw(13)<<right<<"0------0"<<endl;
    
    for(short i=0; i<1; i++) {  // Display a0 position
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |  START"<<endl;
        cout<<setw(13)<<"0------0"<<endl;
    }
    for(short i=1; i<20; i++) {  // Display a1 to a19 positions
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;  
        //user piece(x) and computer piece(y) will show in the square position
        cout<<setw(13)<<"0------0"<<endl;
    }
    for(short i=20; i<21; i++) {  // Display a20 position
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;
        //user piece(x) and computer piece(y) will show in the square position
        cout<<setw(13)<<"0------0"<<endl;
        cout<<setw(13)<<"   END  "<<endl;
    }

    cout<<setw(10)<<"f"<<endl;
    cout<<setw(13)<<right<<"0------0"<<endl;
    
    for(short i=0; i<1; i++) {  // Display a0 position
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |  START"<<endl;
        cout<<setw(13)<<"0------0"<<endl;
    }
    for(short i=1; i<20; i++) {  // Display a1 to a19 positions
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;  
        //user piece(x) and computer piece(y) will show in the square position
        cout<<setw(13)<<"0------0"<<endl;
    }
    for(short i=20; i<21; i++) {  // Display a20 position
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;
        //user piece(x) and computer piece(y) will show in the square position
        cout<<setw(13)<<"0------0"<<endl;
        cout<<setw(13)<<"   END  "<<endl;
    }

    cout<<setw(10)<<"g"<<endl;
    cout<<setw(13)<<right<<"0------0"<<endl;
    
    for(short i=0; i<1; i++) {  // Display a0 position
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |  START"<<endl;
        cout<<setw(13)<<"0------0"<<endl;
    }
    for(short i=1; i<20; i++) {  // Display a1 to a19 positions
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;  
        //user piece(x) and computer piece(y) will show in the square position
        cout<<setw(13)<<"0------0"<<endl;
    }
    for(short i=20; i<21; i++) {  // Display a20 position
        cout<<setw(3)<<i<<"  | "<<x[i]<<" "<<y[i]<<"  |"<<endl;
        //user piece(x) and computer piece(y) will show in the square position
        cout<<setw(13)<<"0------0"<<endl;
        cout<<setw(13)<<"   END  "<<endl;
    }    
    
}

void  prntAry(float array[][COLS],int rows){
    //Heading
    cout<<setw(COLS+8)<<" "<<"Yut Nori Game Board"<<endl;
         //" " is left justify. it affects COLS+8
         //heading will move depending on columns, add 8 for the first portion
    cout<<"        ";
    
    
    
    for(int col=0; col<COLS; col++){
        cout<<setw(2)<<col+1<<" ";
    }
    cout<<endl;
    //Grade table with students in first column
    for(int row=0; row<rows; row++){
        cout<<"Stu "<<setw(2)<<row+1<<"  ";
        for(int col=0; col<COLS; col++){
            cout<<array[row][col]<<" ";
        }
        cout<<endl;
    }
}

void  fillAry(float array[][COLS],int rows){
    for(int row=0; row<rows; row++){
        for(int col=0; col<COLS; col++){
            array[row][col]=rand()%30+70;//[70-100] every one above 70
        }
    }
}

void show(int board[ROWS][COLS], int rows){
    for(int x=0; x<rows; x++){
        for(int y=0; y<COLS; y++){
            cout<<setw(4)<<num[x][y]<<setw(4);
        }
        cout<<endl;
    }
}