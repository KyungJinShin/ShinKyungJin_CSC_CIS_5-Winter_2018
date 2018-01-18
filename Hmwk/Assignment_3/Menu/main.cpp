/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 16th, 2018, 1:15 PM
 * Purpose:  Menu
 */

//System Libraries Here
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number function
#include <ctime>     //Time Library for random seed
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int probNum; //Problem numbers
    
    //Menu with input of choice
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Problem 1 -> Gaddis_9thEd_Chap4_Prob11_MathTutor"<<endl;
    cout<<"Problem 2 -> Savitch_9thEd_Chap3_Prob6_Fibonacci"<<endl;
    cout<<"Problem 3 -> Savitch_9thEd_Chap3_Prob7_etox"<<endl;
    cout<<"Problem 4 -> Gaddis_8thEd_Chap4_Prob16_RunningTheRace"<<endl;
    cout<<"Problem 5 -> Gaddis_9thEd_Chap4_Prob8_Color_Mixer"<<endl;
    cout<<"Problem 6 -> Savitch_9thEd_Chap3_Pract_Prob1_Paper_Rock_Scissor_Game"<<endl;
    cout<<"Problem 7 -> Savitch_9thEd_Chap3_Prob1_PhoneCall"<<endl;
    cout<<"Problem 8 -> Savitch_9thEd_Chap3_Prob8_Pi"<<endl;
    cout<<"Problem 9 -> Savitch_9thEd_Chap3_Projs_Prob12_Game23"<<endl;
    cout<<"Type 1 to 9 only"<<endl;
    cin>>probNum;
    
    //Output the results
    switch(probNum){
        case 1: {
            //Set the random number seed
            srand(static_cast<unsigned int>(time(0)));  //Random number function

            //Declare Variables
            unsigned short op1, //Operator 1
                           op2, //Operator 2
                        result, //Result of the addition
                        answer; //Answer of the result is correct or incorrect

            //Initialize Variables
            op1=rand()%900+100; //Three digit number
            op2=rand()%1000;    //Any 1 to 3 digit number

            //Process/Map inputs to outputs
            result=op1+op2;     //Addition of operator1 and operator2

            //Output data
            cout<<"Test your addition skills, Solve the following"<<endl;
            cout<<setw(5)<<op1<<endl;      //Formating 5 spaces
            cout<<"+ "<<setw(3)<<op2<<endl; //Formating 3 spaces
            cout<<"-----"<<endl<<(result>1000?" ":"  ");  //Lines between operators and results
            cin>>answer;
            cout<<(result==answer?"Correct":"Incorrect")<<endl; //Answer of the result is correct or incorrect
            break;
        }    
        case 2: {
            //Declare Variables
            unsigned int fi,fim1,fim2;

            //Initialize Variables
            fim1=1;
            fim2=1;
            cout<<fim2<<","<<fim1;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Comparison of the ratio of Fibonacci to Golden Ratio
            cout<<endl<<endl<<"Ratio = "<<1.0f*fim1/fim2<<endl;
            break;
        }
        case 3: {
            //Declare Variables
            float aproxE,term,x;
            int counter;

            //Initialize Variables
            aproxE=1.0f;
            counter=1;
            x=1.0f;
            term=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Output data
            cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl;
            break;
        }
        case 4: {
            //Declare Variables
            string runer1,runer2,runer3;        //Three runners
            unsigned short time1,time2,time3;   //Time 0 to 65535, unit as minute
            char place1, place2, place3;        //First, second, and third place

            //Initialize Variables
            cout<<"This program calculates who came in first, second, and third place of the race"<<endl;
            cout<<"Enter a name of runner"<<endl;
            getline(cin,runer1);  //runner1 name
            cout<<"Enter an another name of runner"<<endl;
            getline(cin,runer2);  //runner2 name
            cout<<"Enter the other name of runner"<<endl;
            getline(cin,runer3);  //runner3 name
            cout<<"In the range of the positive number 0 to 65535 and unit as minutes, "<<endl;
            cout<<"Enter the time "<<runer1<<" took "<<endl;
            cin>>time1;           //runner1's time1
            cout<<"Enter the time "<<runer2<<" took "<<endl;
            cin>>time2;           //runner2's time2
            cout<<"Enter the time "<<runer3<<" took "<<endl;
            cin>>time3;           //runner3's time3

            //Process/Map inputs to outputs
            if (time1<=0 || time2<=0 || time3<=0)    place1='Negative time does not exist';  //When time is less than 0, not working
            else if (time1<time2 && time1<time3){   
                cout<<"The first place is "<<runer1<<endl;      //First place = runner1
                if (time2<time3){
                    cout<<"The second place is "<<runer2<<endl; //Second place = runner2
                    cout<<"The third place is "<<runer3<<endl;  //Third place = runner3
                }else if (time3<time2){
                    cout<<"The second place is "<<runer3<<endl; //Second place = runner3
                    cout<<"The third place is "<<runer2<< endl; //Third place = runner2
                }
            }else if (time2<time1 && time2<time3){
                cout<<"The first place is "<<runer2<<endl;      //First place = runner2
                if (time1<time3){
                    cout<<"The second place is "<<runer1<<endl; //Second place = runner1
                    cout<<"The third place is "<<runer3<<endl;  //Third place = runner3
                }else if (time3<time1){
                    cout<<"The second place is "<<runer3<<endl; //Second place = runner3
                    cout<<"The third place is "<<runer1<<endl;  //Third place = runner1
                }
            }else if (time3<time1 && time3<time2){
                cout<<"The first place is "<<runer3<<endl;      //First place = runner3
                if (time1<time2){
                    cout<<"The second place is "<<runer1<<endl; //Second place = runner1
                    cout<<"The third place is "<<runer2<<endl;  //Third place = runner2
                }else if (time2<time1){
                    cout<<"The second place is "<<runer2<<endl; //Second place = runner2
                    cout<<"The third place is "<<runer1<<endl;  //Third place = runner1
                }
            }

            break;
        }
        case 5: {
            //Declare Variables
            char R,B,Y; //red, blue, yellow;
            char E;     //error the names of two primary colors to mix
            char priCol1;//Primary color 1
            char priCol2;//Primary color 2
            char secCol; //Secondary colors

            //Initialize Variables
            cout<<"This program displays the name of the secondary color by mixing two primary colors"<<endl;
            cout<<"Choose the one primary color between (red as R, blue as B, yellow as Y) "<<endl;
            cin>>priCol1;
            priCol1 = toupper(priCol1);
            cout<<"Enter the second primary color between (red as R, blue as B, yellow as Y) "<<endl;
            cin>>priCol2;
            priCol2 = toupper(priCol2);

            //Process/Map inputs to outputs
            if (priCol1 != 'R' && priCol1 != 'B' && priCol1 != 'Y' && priCol2 != 'R' && priCol2 != 'B' && priCol2 != 'Y') {
                secCol='E';
                cout<<"You input wrong colors. "<<endl;
            }else if (priCol1==priCol2 && priCol1=='R') {
                secCol='R';
            }else if (priCol1==priCol2 && priCol1 == 'B') {
                secCol='B';
            }else if (priCol1==priCol2 && priCol1 == 'Y') {
                secCol='Y';
            }else if ((priCol1== 'R' || priCol1== 'B') && (priCol2=='R' || priCol2=='B')) {
                secCol='P';
            }else if ((priCol1== 'R' || priCol1== 'Y') && (priCol2== 'R' || priCol2== 'Y')) {
                secCol='O';
            }else if ((priCol1== 'B' || priCol1== 'Y') && (priCol2== 'B' || priCol2== 'Y')) {
                secCol='G';
            }else secCol='E';

            //Output data
            if (secCol != 'E'){
            cout<<"When you mix "<<priCol1<<" and "<<priCol2<<", you get "<<secCol<<endl;
            }
            break;
        }
        case 6: {
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
                break;
        }
        case 7: {
            //Declare Variables
            unsigned short cost, //Cost of the phone call in pennies
                        strTime, //Start Time Military format 
                         tmSpan; //Duration of the phone call
            char day, //Day of the week 
                 dm;  //Dummy input unnecessary to the problem

            //Initialize Variables
            cout<<"This program calculates cost of phone call"<<endl;
            cout<<"Input the day a phone call was made"<<endl;
            cout<<"Mo Tu We Th Fr Sa Su"<<endl; //Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
            cin>>day>>dm;                       //dummy to replace read on
            cout<<"Input the start time in military format"<<endl;
            cout<<"1:30 PM = 13:30"<<endl;     
            cin>>setw(2)>>strTime>>dm>>dm>>dm;  //dummy takes : and two digit of minutes, which are unnecssary parts
            cout<<"Input the duration of phone call in minutes"<<endl;
            cin>>tmSpan;                        //Duration of phone call in minutes

            //Process/Map inputs to outputs
            if(day=='S'||day=='s'){             //User can input lowercase and uppercase
                cost=tmSpan*15; //15 cents per minute
            }else if(strTime>=8&&strTime<18){   //8:00Am to 6:00Pm
                cost=tmSpan*40; //40 cents per minute
            }else{
                cost=tmSpan*25; //25 cents per minute
            }

            //Output data
            cout<<fixed<<setprecision(2)<<endl;  //2 decimal (significant digits)
            cout<<"The phone call cost = $ "<<cost/100.0f<<endl;

            break;
        }
        case 8: {
            //Declare Variables
            float aprxPi; //Approximate value of Pi
            float pi;     //5 decimal digits of Pi
            int n;        //n is the term of series from {(-1)^n} / {2n+1}
            int sign;     //Negative sign (-1) from {(-1)^n} / {2n+1}

            //Initialize Variables
            sign= -1;    //(-1)^n leads to alternative positive sign and negative sign
            n=0;         //{(-1)^n} / {2n+1} this formula starts with n=0 to make 1
            pi=3.14159;  //5 decimal digits of Pi

            //Process/Map inputs to outputs
            aprxPi=pow(sign, n)/((2*n++)+1);              //code for {(-1)^n} / {2n+1} term to make +1/1
            cout<<"Pi approximately = "<<aprxPi*4<<endl;  //Multiply four to make 4*(+1/1)
            aprxPi+=pow(sign, n)/((2*n++)+1);             //code for {(-1)^n} / {2n+1} term to make -1/3
            cout<<"Pi approximately = "<<aprxPi*4<<endl;  //Multiply four to make 4*(-1/3)
            aprxPi+=pow(sign, n)/((2*n++)+1);             //code for {(-1)^n} / {2n+1} term to make +1/5
            cout<<"Pi approximately = "<<aprxPi*4<<endl;  //Multiply four to make 4*(+1/5)
            aprxPi+=pow(sign, n)/((2*n++)+1);             //code for {(-1)^n} / {2n+1} term to make -1/7
            cout<<"Pi approximately = "<<aprxPi*4<<endl;  //Multiply four to make 4*(-1/7)
            aprxPi+=pow(sign, n)/((2*n++)+1);             //code for {(-1)^n} / {2n+1} term to make +1/9
            cout<<"Pi approximately = "<<aprxPi*4<<endl;  //Multiply four to make 4*(+1/9)
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;
            aprxPi+=pow(sign, n)/((2*n++)+1);
            cout<<"Pi approximately = "<<aprxPi*4<<endl;

            //Output the results
            aprxPi+=pow(sign, n)/((2*n++)+1);             //code for {(-1)^n} / {2n+1} term
            aprxPi*=4;                                    //Multiply four to make 4*(approximate Pi)       
            cout<<"Pi approximately = "<<aprxPi<<endl;
            cout<<"Pi exactly       = "<<pi<<endl;        //5 decimal digits of Pi

            break;
        }
        case 9: {
            //Declare Variables
            int C;  //Computer plays 
            int X;  //Player plays
            unsigned short tpicks; //Toothpicks remain
            //if (num==0)      C='1';
            //else if (num==1) C='2';
            //else if (num==2) C='3';

            //Initialize Variables
            cout<<"This program plays 23 toothpicks game"<<endl;
            cout<<"Players take turn, and human always move first "<<endl;
            cout<<"Withdrawing the last toothpick loses the game"<<endl;
            cout<<"Withdrawing either 1, 2, or 3 toothpicks at a time"<<endl;
            cin>>X;
            if(X<1 || X>3)exit(0);
            tpicks= 23 - X;
            cout<<"The toothpicks left = "<<tpicks<<endl;
            if(tpicks>4) {
                C=X;
            }else if(tpicks==4) { 
                C=3;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==3) {
                C=2;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==2) {
                C=1;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==1) {
                cout<<"The player is win"<<endl;
                return 0;
            }
            cout<<"The computer withdraws "<<C<<endl;
            tpicks= tpicks - C;
            cout << "There are " << tpicks << " left." << endl;

            //Process/Map inputs to outputs
            cout<<"How many toothpicks do you want to withdraw? "<<endl;
            cin>>X;
            if(X<1 || X>3)exit(0);
            tpicks -= X;
            cout<<"The toothpicks left = "<<tpicks<<endl;
            if(tpicks>4) {
                C=X;
            }else if(tpicks==4) { 
                C=3;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==3) {
                C=2;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==2) {
                C=1;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==1) {
                cout<<"The player is win"<<endl;
                return 0;
            }
            cout<<"The computer withdraws "<<C<<endl;
            tpicks= tpicks - C;

            //Process/Map inputs to outputs
            cout<<"How many toothpicks do you want to withdraw? "<<endl;
            cin>>X;
            if(X<1 || X>3)exit(0);
            tpicks -= X;
            cout<<"The toothpicks left = "<<tpicks<<endl;
            if(tpicks>4) {
                C=X;
            }else if(tpicks==4) { 
                C=3;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==3) {
                C=2;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==2) {
                C=1;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==1) {
                cout<<"The player is win"<<endl;
                return 0;
            }
            cout<<"The computer withdraws "<<C<<endl;
            tpicks= tpicks - C;
             if (tpicks==0){
             return 0;
            }

        //Process/Map inputs to outputs
            cout<<"How many toothpicks do you want to withdraw? "<<endl;
            cin>>X;
            if(X<1 || X>3)exit(0);
            tpicks -= X;
            cout<<"The toothpicks left = "<<tpicks<<endl;
            if(tpicks>4) {
                C=X;
            }else if(tpicks==4) { 
                C=3;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==3) {
                C=2;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==2) {
                C=1;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==1) {
                cout<<"The player is win"<<endl;
                return 0;
            }
            cout<<"The computer withdraws "<<C<<endl;
            tpicks= tpicks - C;
            if (tpicks==0){
                return 0;
            }

        //Process/Map inputs to outputs
            cout<<"How many toothpicks do you want to withdraw? "<<endl;
            cin>>X;
            if(X<1 || X>3)exit(0);
            tpicks -= X;
            cout<<"The toothpicks left = "<<tpicks<<endl;
            if(tpicks>4) {
                C=X;
            }else if(tpicks==4) { 
                C=3;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==3) {
                C=2;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==2) {
                C=1;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==1) {
                cout<<"The player is win"<<endl;
                return 0;
            }
            cout<<"The computer withdraws "<<C<<endl;
            tpicks= tpicks - C;
            if (tpicks==0){
                return 0;
            }

        //Process/Map inputs to outputs
            cout<<"How many toothpicks do you want to withdraw? "<<endl;
            cin>>X;
            if(X<1 || X>3)exit(0);
            tpicks -= X;
            cout<<"The toothpicks left = "<<tpicks<<endl;
            if(tpicks>4) {
                C=X;
            }else if(tpicks==4) { 
                C=3;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==3) {
                C=2;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==2) {
                C=1;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==1) {
                cout<<"The player is win"<<endl;
                return 0;
            }
            cout<<"The computer withdraws "<<C<<endl;
            tpicks= tpicks - C;
            if (tpicks==0){
                return 0;
            }

        //Process/Map inputs to outputs
            cout<<"How many toothpicks do you want to withdraw? "<<endl;
            cin>>X;
            if(X<1 || X>3)exit(0);
            tpicks -= X;
            cout<<"The toothpicks left = "<<tpicks<<endl;
            if(tpicks>4) {
                C=X;
            }else if(tpicks==4) { 
                C=3;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==3) {
                C=2;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==2) {
                C=1;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==1) {
                cout<<"The player is win"<<endl;
                return 0;
            }
            cout<<"The computer withdraws "<<C<<endl;
            tpicks= tpicks - C;
            if (tpicks==0){
                return 0;
            }    

            //Process/Map inputs to outputs
            cout<<"How many toothpicks do you want to withdraw? "<<endl;
            cin>>X;
            if(X<1 || X>3)exit(0);
            tpicks -= X;
            cout<<"The toothpicks left = "<<tpicks<<endl;
            cout<<"The computer withdraws "<<C<<endl;
             tpicks= tpicks - C;
            if(tpicks>4) {
                C=X;
            }else if(tpicks==4) { 
                C=3;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==3) {
                C=2;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==2) {
                C=1;
                cout<<"The player is lose"<<endl;
                return 0;
            }else if(tpicks==1) {
                cout<<"The player is win"<<endl;
                return 0;
            }

            break;
        }
        default:cout<<"You choose to exit"<<endl;
    }
   
    //Exit
    return 0;
}