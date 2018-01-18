/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 16, 2018, 10:30 PM
 * Purpose: Color Mixer
 */

//system Libraries
#include <iostream> //I/O Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
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
    //Exit stage right!
    return 0;
}

