/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on February 2, 2018, 9:05 PM
 * Purpose:  Lowest Score Drop
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float score();   //getScore
void averge(float,float,float,float,float);  //calcAverage
float lowest(float,float,float,float,float);    //findLowest

//Execution Begins Here
int main(float argc, char** argv) {
    //Declare Variables
    float score1, score2, score3, score4, score5; //Five test scores from a group in the range 0 to 100
    //float score1, float score2, float score3, float score4, float score5
    
    //Initialize Variables
    cout<<"This programs calculates the average of a group of test scores,"<<endl;
    cout<<" and find the lowest score in the group to drop it."<<endl;
    
    //Process/Map inputs to outputs
    score1 = score(); // Ask test1 scores from a group
    score2 = score(); // Ask test2 scores from a group
    score3 = score(); // Ask test3 scores from a group
    score4 = score(); // Ask test4 scores from a group
    score5 = score(); // Ask test5 scores from a group
    
    //Output data
    lowest(score1, score2, score3, score4, score5); //Drop the lowest test score
    averge(score1, score2, score3, score4, score5); //Average of the four highest scores
    
    //Exit stage right!
    return 0;
}    

float lowest(float score1, float score2, float score3, float score4, float score5){
    float low=score1;//=0;
    low=score1>score2?score2:score1;// if score1 is bigger than score2, it is score2
    //if (low>score2)low=score2;  same as
    low=score1>score3?score3:score1;// if score1 is bigger than score3, it is score3
    //if (low>score3)low=score3;  same as
    low=score1>score4?score4:score1;// if score1 is bigger than score4, it is score4 
    //if (low>score4)low=score4;  same as
    low=score1>score5?score5:score1;// if score1 is bigger than score5, it is score5 
    //if (low>score5)low=score5;  same as
    //cout<<"The lowest test score = "<<low<<endl;
    return low;
}

void averge(float score1, float score2, float score3, float score4, float score5){
    float ave=0;
    ave = (score1+score2+score3+score4+score5-lowest(score1,score2,score3,score4,score5))/4; //Average test score without lowest grade
    cout<<"Average of a group of test scores = "<<ave<<endl;
}

float score(){
    float scores; //Each test score
    do {
        cout<<"What is your group test score? In the range of 0 to 100"<<endl;
        cout<<"Enter once for each of the five scores"<<endl;
        cout<<"Enter a test score"<<endl;
        cin>>scores;
    }while (scores<0 || scores>100);  //Loops until the user input scores between o to 100
    return scores;
}
