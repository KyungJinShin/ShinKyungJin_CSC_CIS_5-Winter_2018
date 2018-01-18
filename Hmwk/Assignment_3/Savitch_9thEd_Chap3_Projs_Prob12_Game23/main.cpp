/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 17, 2018, 1:00 PM
 * Purpose: Make the game of "23"
 */

//system Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
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
    
    //Output data
    
    //Exit stage right!
    return 0;
}

