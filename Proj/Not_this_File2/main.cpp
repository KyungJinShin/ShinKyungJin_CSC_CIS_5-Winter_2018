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
#include <string>
#include <algorithm>   //String Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int COLS=7; //Total 7 Columns for print Array and board
const int BLACK = 3; //Up to 3 black for 2D array of black and white sticks

//structure
struct PairArray{
    pair<int, int> *array;  //* as pointer
    int size;
};

//Function Prototypes
int searchL(const int [], int, int); //Linear searchlist
int searchB(const int [], int, int);  //Binary searchlist
//void sortB(int [], int); //Bubble sort array
bool sort(int [], short);  //void sort(int [], int, bool &);
void showB(const int [], int); //Bubble sort show array
void sort(int [], int);  //Selection sort
void showS(const int [], int); //Selection show array
void tilde(int = 20, int = 1); //20 asterisks(tilde ~) col and 1 row
void grid(vector<char> &, vector<char> &);
int thrwSt();  //Throw the dice
PairArray posit1(); //(0,0) -> 0
void ahead(); //Show how many steps ahead between user and computer moved
void exit(); //To exit the program
void prntAry(pair<char, char> board[][COLS],int ROWS );  //[][COLS]  == 2-D
//void  prntAry(int [][COLS],int);  //[][COLS]  == 2-D
//void show(int[][COLS], int);

//Execution Begins Here
int main(int argc, char** argv)  {    
    //Generate Random Number Seed
    srand(static_cast<unsigned int>(time(0)));  //Random Number Generator
            
    //Declare Variables
    const int ROWS=7; //this should not be a global const
    char comput; //Computer for Rock-Paper-Scissors game
    char player; //Player for Rock-Paper-Scissors game
    short user=0;   //User for Yut Nori Game
    short comp=0;   //Computer for Yut Nori Game
    int num;        //Integer Number, but I will range to 0 to 3
    string winner;  //To file the winner of Yut Nori Game
    short numToSort = 3;
    //Variables for wood sticks game 
    pair<int, int> player1( 3, 0 );
    pair<int, int> player2( 0, 0 );
    //Example grid path way
    vector<char> x(21, ' '); // to store 'x' on a current position and a space on other positions
    vector<char> y(21, ' '); // to store 'y' on a current position and a space on other positions
    vector<string> winners();
    
       
        /*------------------------Yut Nori Game-------------------------------------------------*/
        float poss,a,b,c; //Possible, 3 different chances to get when you throw the sticks
        a=0.25f;   //1/4 chance to get (1 black,3 white) or (4 black,1 white)
        b=0.375f;  //3/8 chance to get (2 black,2 white)
        c=0.0625f; //1/16 chance to get (4 black,0 white) or (0 black,4 white)
        float max; //Find maximum chances
        poss = c<a?max:0;
        max=fmax(a,c); //Using (cmath Library) to determine which one is more possible to get frequently between a and c 
        
        //Linear search
        const int SIZE=3;
        int highCh[SIZE] = {25,38,6};  //25%, 37.5% to round up 38%, 6.25% to round down 6%, search list, randomly ordered
        int resultL;  //Result of Linear search
        resultL = searchL(highCh,SIZE,25); //Linear search, find 25 from 25,38,and 6
        
        //Binary search
        int lowCh[SIZE] = {6,25,38,}; //25%, 37.5% to round up 38%, 6.25% to round down 6%, search list
        int resultB;  //Result of Binary search
        resultB = searchB(lowCh,SIZE,6);
        
        cout<<fixed<<setprecision(2)<<showpoint; //2 decimal points
        const int WHITE = 3; //Up to 3 white
        int chance[BLACK][WHITE];  //2D Array
        
        //Display stars to indicate Rock-Scissor-Paper game to Yut Nori Game
        tilde(); //print out ~
        
        cout<<endl<<"When you throw the 4 sticks, "<<endl;
        for(int black=BLACK; black<=BLACK; black++){
            for(int white=WHITE; white>=WHITE; white--){
                cout<<"Percentage to get "<<(black-2)<<" black and "<<(white)<<" white = "
                        <<a*100.0f<<"%"<<endl; //(1/4)*100% possible
                if(resultL == -1){
                    cout<<" → Your did not get (3 black and 1 white) or (1 black and 3 white)"<<endl; //Linear search - not found
                }else {
                    cout<<" → You have highest chance to get (3 black and 1 white) or (1 black and 3 white)"<<endl; //Linear search - found
                }
            }
        } 
        cout<<"Percentage to get 2 black and 2 white = "
                <<b*100.0f<<"%"<<endl;   //(3/8)*100% possible
        cout<<"Percentage to get 3 black and 1 white = "
                <<max*100.0f<<"%"<<endl; //(1/4)*100% possible
        cout<<"Percentage to get 4 black and 0 white = "
                <<setw(5)<<c*100.0f<<"%"<<endl;   //(1/16)*100% possible
                if(resultB == -1){
                    cout<<" → Your did not get (4 black and 0 white) or (0 black and 4 white)"<<endl; //Binary search - not found
                }else {
                    cout<<" → You have lowest chance to get (4 black and 0 white) or (0 black and 4 white)"<<endl; //Binary search - found
                }
        cout<<"Percentage to get 0 black and 4 white = "
                <<setw(5)<<c*100.0f<<"%"<<endl<<endl; //(1/16)*100% possible

        //Bubble sort
        //Unsorted values
        int valueB[3] = {38,25,6};  //not arranged yet
        //Display the values
        cout<<"The unsorted values are: "<<endl;
        showB(valueB,3);
        //Sort the values
        if(!sort(valueB, numToSort)) { //repeat swap is true, false-> return true, repeat until true, //not false//swap inside the function
            //Display them again
            cout<<"The sorted values of Low percentage to High percentage are: "<<endl;
            showB(valueB,3);
        }
        
        //Declare board array
        pair<char, char> board[ROWS][COLS];
        
        //init the board array
        for( int i = 0; i< ROWS; i++ ){
            for( int j = 0; j < COLS; j++ ){
                board[i][j] = make_pair( ' ', ' ' ); //Blank space on each space
            }
        }
        
        cout<<endl; 
        tilde(15);  //print out stars by using defult argument
        cout<<" "<<setw(20)<<" "<<"This is the Yut Nori Game Board"<<endl; //without " ", the title doesn't move to the center
        tilde(15);
        cout<<"Arriving from Starting position (0 0) to come back to (0 0) is winning the game"<<endl<<endl;
        grid(x,y);   //Show pathway on the grid
        cout<<endl;  //give a one line space after showing example grid
        board[0][0] = make_pair( 'x', 'y' );  //Starting points, Both x and y start at (row0 col0)
        prntAry( board, ROWS );   //Print the string position on the board
        
        //printArray function
        PairArray posit1(); //Show the position on the grid
        //do posit function to get that posit array
        
        comp=0; //Initialize computer is 0
        user=0; //Initialize user is 0
        int count=0; //Initialize count is 0
        //init  posit
        PairArray pairArray = posit1();
        
        int nsteps = 24; //Total positions are 24 steps 

        cout<<"User(x),Computer(y)"<<endl; //User's piece is x, Computer's piece is y on the board grid
        do{
            //Player goes first
            cout<<"Press enter to throw the 4 wood sticks : "; //Other key won't work. only enter key works
            cin.get();  //Enter to move on
            do {
                count = thrwSt(); //Throw stick function
                board[pairArray.array[user].first][pairArray.array[user].second] = make_pair( ' ', ' ' );    //no y???
                //board[count][0] = make_pair( ' ', 'y' );  //make x[position]=' '; somewhere after you display it and before you throw sticks again
                
                user += count; //User's positions adding up from each count
                if( user < pairArray.size ) { //This if, without this, i got sometime failed and successful result. not over size 24. 
                    cout<<endl<<"User(x) will move "<<count<<" steps."<<endl;  //Explain how much user will move from the result of sticks
     cout << "user = " << user << "  compputer = " << comp << endl;
     cout << "pairArray.array[user].first = " << pairArray.array[user].first << "  pairArray.array[user].second = " << pairArray.array[user].second << endl; 
     cout << "pairArray.array[comp].first = " << pairArray.array[comp].first << "  pairArray.array[comp].second = " << pairArray.array[comp].second << endl; 
                    board[pairArray.array[user].first][pairArray.array[user].second] = make_pair( 'x', ' ' );    
                    board[pairArray.array[comp].first][pairArray.array[comp].second] = make_pair( ' ', 'y' );  

                    if( user == comp ){
                        board[pairArray.array[comp].first][pairArray.array[comp].second] = make_pair( 'x', 'y' );  //show x and y on the same position
                        cout<<"User(x) catched the computer's piece(y). Computer piece(y) go back to starting position (0 0)"<<endl;                        
                        count=0;//Initialize count is 0
                        comp=0; //Initialize computer is 0. Computer go back to starting position because user's piece catched the computer's piece   
                        board[pairArray.array[comp].first][pairArray.array[comp].second] = make_pair( ' ', ' ' );  //Previous mark will disappear. board[0][0] = make_pair( ' ', 'y' );
                        prntAry( board, ROWS );   //Print the Grid //Show new marks on the grid 
                        board[pairArray.array[comp].first][pairArray.array[comp].second] = make_pair( 'x', ' ' );  
                    }else prntAry( board, ROWS );   //Print the User's Grid
                    //else{
                        //board[pairArray.array[user].first][pairArray.array[user].second] = make_pair( 'x', ' ' ) ;
                    //}
                    if (count==4 || count==5 ) cout<<"User(x) has bonus to throw the sticks again"<<endl;    
                          //Only when sticks are white,white,white,white or black,black,black,black, throw one more time
                } // End of check that user < pairArray.size;  if i get steps(user) more than 24, it will stop the game
            }while((count==4 || count==5) && user < pairArray.size ); //Loops until sticks are white,white,white,white or black,black,black,black

            //Computer goes next
                cout<<"And now Computer's(y) turn..."<<endl<<endl;
                do{
                    count = thrwSt(); //Throw stick function
                    board[pairArray.array[comp].first][pairArray.array[comp].second] = make_pair( ' ', ' ' );   //no x??
                    //somewhere after you display it and before you throw sticks again
                    comp += count; //Computer's positions adding up from each count
                    if(comp < pairArray.size ) {
                        cout<<endl<<"Computer(y) will move "<<count<<" steps."<<endl;  //Explain how much computer will move from the result of sticks
        cout << "user = " << user << "  computer = " << comp << endl;
        cout << "pairArray.array[user].first = " << pairArray.array[user].first << "  pairArray.array[user].second = " << pairArray.array[user].second << endl; 
        cout << "pairArray.array[comp].first = " << pairArray.array[comp].first << "  pairArray.array[comp].second = " << pairArray.array[comp].second << endl; 
     
                        //board[pairArray.array[comp].first][pairArray.array[comp].second] = make_pair( ' ', 'y' );       
                        board[pairArray.array[comp].first][pairArray.array[comp].second] = make_pair( ' ', 'y' ); 
                        board[pairArray.array[user].first][pairArray.array[user].second] = make_pair( 'x', ' ' );      

                        if( comp == user ){
                            board[pairArray.array[user].first][pairArray.array[user].second] = make_pair( 'x', 'y' );  
                            cout<<"Computer(y) catched the user's piece(x). User's piece(x) go back to starting position (0 0)"<<endl;                        
                            count=0;//Initialize count is 0
                            user=0; //Initialize computer is 0. Computer go back to starting position because user's piece catched the computer's piece                        
                            board[pairArray.array[user].first][pairArray.array[user].second] = make_pair( ' ', ' ' );  //board[0][0] = make_pair( ' ', 'y' );
                            prntAry( board, ROWS );   //Print the Grid  //Show new marks on the grid 
                            board[pairArray.array[user].first][pairArray.array[user].second] = make_pair( ' ', 'y' ); 
                        }else prntAry( board, ROWS );   //Print the Computer's Grid 
    //                        else{
    //                        board[pairArray.array[comp].first][pairArray.array[comp].second] = make_pair( ' ', 'y' ) ;
    //                    }
                        if (count==4 || count==5 ) cout<<"Computer(y) has bonus to throw the sticks again"<<endl;    
                              //Only when sticks are white,white,white,white or black,black,black,black, throw one more time
                    } // End of check that comp < pairArray.size;
                }while((count==4 || count==5) && comp < pairArray.size); //Loops until sticks are white,white,white,white or black,black,black,black

            if (user>=23){ //When user passed the a20 position
                tilde(15); // shows ~~~~
                cout<<"Congraulation! User(x) won!"<<endl;
////                data<<"User"<<endl;     //When user won, File the "User"
                
            }else if (comp>=23){  //When computer passed the a20 position
                tilde(15); // shows ~~~~
                cout<<"Sorry. Computer(y) has won. User(x) lost"<<endl;
////                data<<"Computer"<<endl; //When computer won, File the "Computer"
            }
        }while(!(comp>=23) && !(user>=23));  //Loops stop when computer piece or user piece arrived at end of the position
               //same as = while(!(comp>=nsteps) || !(user>=nsteps))  = while(comp<nsteps || user<nsteps)                      
        
        
        //Selection sort
        //Define an array with unsorted values
        //const int SIZE = 3; declare before Lineary search
        int valueS[SIZE] = {38,6,25};
        //Display the values
        cout<<endl<<"The unsorted values are: "<<endl;
        showS(valueS,SIZE);
        //Sort the values
        sort(valueS,SIZE);
        //Display the values again
        cout<<"The sorted values of High percentage to Low percentage are: "<<endl;
        showS(valueS,SIZE);
        
        delete pairArray.array;
        exit();  //Bye 
        return 0;
}

void  prntAry( pair<char, char> board[][COLS],int ROWS ){  //[][COLS]  == 2-D
    //printArray function
    cout<<"    0    1    2    3    4    5    6"<<endl;
    for( int i = 0; i< ROWS; i++ ){
        cout << "  0----0----0----0----0----0----0----0"<< endl;
        cout << i << " |"; 
        for( int j = 0; j < COLS; j++ ){
            cout << board[i][j].first << board[i][j].second <<"  "<< '|';
        }
        cout<<endl;
    }
    cout << "  0----0----0----0----0----0----0----0"<< endl;
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

PairArray posit1(){        
    //Position1 Function
    //make the struct
    PairArray temp;
    //open the file
    ifstream file;
    file.open( "posit" );
    file >> temp.size;
    temp.array = new pair<int, int>[temp.size];// posit[positSize];
    for( int i = 0; i < temp.size; i++ ){
        int x, y;
        file >> x;
        file >> y;
        temp.array[i] = make_pair( x, y );
//        cout << '(' << posit[i].first << ',' << posit[i].second << ')' << endl;
    }
    return temp;
}

void grid(vector<char> &x, vector<char> &y) { 
            cout<<setw(14)<<"END  "<<endl;
    cout<<setw(13)<<"          0    1    2    3    4    5    6"<<endl;
    cout<<"    "<<setw(18)<<right<<"    0----0----0----0----0----0----0----0"<<endl;
    
    for(short i=0; i<1; i++) {  // Display a0 position
        cout<<setw(3)<<"START"<<setw(2)<<i<<" | "<<"↓"<<" |"<<x[i]<<"←"<<" |"<<x[i]<<"←"<<" |"
                <<x[i]<<"←"<<" |"<<x[i]<<"←"<<" |"<<x[i]<<"←"<<" |"<<x[i]<<"←"<<" |"<<endl;
        cout<<"    "<<setw(18)<<"    0----0----0----0----0----0----0----0"<<endl;
    }
    for(short i=1; i<6; i++) {  // Display a1 to a19 positions
        cout<<setw(7)<<i<<" | "<<"↓"<<y[i]<<"|"<<x[i]<<" "<<y[i]<<" |"<<x[i]<<" "<<y[i]<<" |"
                <<x[i]<<" "<<y[i]<<" |"<<x[i]<<" "<<y[i]<<" |"<<x[i]<<" "<<y[i]<<" |"<<x[i]<<"↑"<<" |"<<endl;
        //user piece(x) and computer piece(y) will show in the square position
        cout<<"    "<<setw(18)<<"    0----0----0----0----0----0----0----0"<<endl;
    }
    for(short i=6; i<7; i++) {  // Display a20 position
        cout<<setw(7)<<i<<" | "<<"→"<<y[i]<<"|"<<" →"<<y[i]<<"|"<<" →"<<y[i]<<"|"
                <<" →"<<y[i]<<"|"<<" →"<<y[i]<<"|"<<" →"<<y[i]<<"|"<<" →"<<y[i]<<"|"<<endl;
        //user piece(x) and computer piece(y) will show in the square position
        cout<<"    "<<setw(18)<<"    0----0----0----0----0----0----0----0"<<endl;
    }
}

void showS(const int array[], int size){
    for(int count=0; count < size; count++){
        cout<<array[count]<<"% ";
    }cout<<endl;
}

void sort(int array[], int size){  //Selection sort
    int scan; //start scan
    int maxind; //max index
    int maxval; //max value
    for(scan = 0; scan < (size - 1); scan++){  //Do not chancge 
        maxind = scan;
        maxval = array[scan];
        for(int index = scan+1; index < size; index++){
            if(array[index] > maxval){ //if it is min, change to < min :array[index] > maxval
                maxval = array[index];
                maxind = index;
            }
        }
        array[maxind] = array[scan];
        array[scan] = maxval;
    }
}

void showB(const int array[], int size){
    for(int count=0; count<size; count++){
        cout<<array[count]<<"% ";
    }cout<<endl;
}

//void sortB(int array[], int size){ 
//    bool swap;
//    int temp;
//    do{
//        swap = false;
//        for(int count = 0; count < (size - 1); count++){
//            if(array[count] > array[count + 1]){
//                temp = array[count];
//                array[count] = array[count + 1];
//                array[count +1 ] = temp;
//                swap = true;
//            }
//        }
//    }while(swap);
//}

bool sort(int array[], short size){  //Bubble sort
    bool swap;// = false;
    int temp;
//    for(int count = 0; count < (size - 1); count++){
//        if(array[count] > array[count + 1]){
//            temp = array[count];
//            array[count] = array[count + 1];
//            array[count +1 ] = temp;
//            swap = true;
//        }
//    }
    
    do {
        swap=false;
         for(int count = 0; count < (size - 1); count++){
            if(array[count] > array[count + 1]){
                temp = array[count];
                array[count] = array[count + 1];
                array[count +1 ] = temp;
                swap = true;
            }
        }
    }while(swap);
    
    return swap;  //Returning boolean
}


int searchB(const int array[], int num, int value){
    int first = 0,          //First array element
            last = num-1,   //Last array element
            middle,         //Midpoint of search
            posit = -1;     //Position of search value
    bool found = false;     //Flag
    while(!found && first <=last){
        middle = (first + last) / 2;  //Calculate midpoint
        if (array[middle] == value){  //If value is found at mid
            found = true;
            posit = middle;
        }else if (array[middle] > value){ //If value is in lower half
            last = middle - 1;
        }else {                           //If value is in upper half
            first = middle + 1;
        }
    }
    return posit;
}

int searchL(const int list[], int num, int value){
    int index = 0; //Used as a subscript to search array
    int posit = -1;//Recording Position of search value
    bool found = false; //Flag to indicate if the value was found
    while(index<num && !found){
        if(list[index] == value) { //if the value is found
            found = true;  //set the flag
            posit = index; //position = index, record the value's subscript
        }
        index++; //go to the next element
    }
    return posit;  //Return the position, or -1
}

void tilde(int cols, int rows){
    for (int down=0; down<rows; down++){
        for (int across=0; across<cols; across++){
            cout<<" ~  ~ ";
        }cout<<endl;
    }
}

//void ahead(){
//   
//}

void exit(){
    cout<<"Bye! Have a nice day!"<<endl;
    exit(0);
}