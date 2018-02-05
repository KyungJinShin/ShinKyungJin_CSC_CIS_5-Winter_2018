/* 
 * File:   main.cpp
 * Author: KyungJin Shin and Dr.Mark Lehr
 * Created on January 30th, 2018, 10:20 AM
 * Purpose:  Grade a DMV test
 */

//System Libraries Here
#include <iostream>  //I/O Library
#include <fstream>   //File Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void read(ifstream &,char [],char[],int);  //Reading function, no return value
void read(fstream &,string,char [],int);   //Reading function, no return value
int  score(char [],char [], int);          //Calculating scoreing 
void write(ofstream &,string,char [],char [],int); //Writing on file, no return value

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    ifstream answer;  //Input file 
    fstream test;     //input and output file
    ofstream results; //output file
    const int SIZE=20; //Size is 20,which is integer
    char ans[SIZE],compare[SIZE]; 
    
    //Input or initialize values Here
    char fileName[]="answerkey.txt"; //Answerkey on note file name answerkey.txt
    string testName="test.txt"; //test on note file name test.txt
    read(answer,fileName,ans,SIZE);   //read the answerkey
    read(test,testName,compare,SIZE); //read the file result
    
    //Process/Calculations and output the result
    int correct=score(ans,compare,SIZE);
    cout<<"Correct Answers = "<<correct  //Calculate how much the user got
            <<" out of "<<SIZE<<endl;
    cout<<"Percentage score = "          //Percentage that how much the user got
            <<100.0f*correct/SIZE<<"%"
            <<endl;

    //Do the same and record to a file
    string resName="result.txt";  //Record the result of test on note result.txt
    write(results,resName,ans,compare,SIZE); //Write the result on file

    //Exit
    return 0;
}

void write(ofstream &output,string fn,char ans[],char test[],int n){
    //Open the file for writing
    output.open(fn.c_str());//Becuase it is string, this works on old & new version of c++ complier
    
    //Process/Calculations and output the result
    int correct=score(ans,test,n);
    output<<"Correct Answers = "<<correct //Count how much the user got
            <<" out of "<<n<<endl;
    output<<"Percentage score = "
            <<100.0f*correct/n<<"%"   //Percentage that how much the user got
            <<endl;

    //Close the file
    output.close();
}

int  score(char ans[],char test[], int n){ //n=size, ans=answer

    //Declare and initialize the sum
    int sum=0; // initialzie the sum is 0
    
    //Process the data
    for(int i=0;i<n;i++){
        if(ans[i]==test[i])sum++; //when answerkey and test answer are same, 
    }                             //count how much the user got
    
    //Return the score
    return sum; //return to sum 
}

void read(fstream & input,string fn,char ans[],int n){  //n=size, ans=answer
    //Open the file
    input.open(fn.c_str(),ios::in); //Becuase it is string, this works on old & new version of c++ complier
                                    //Only input file open
    //Read the data from the file
    for(int i=0;i<n;i++){
        input>>ans[i];   //read the input value
        //cout<<ans[i];
    }
           
    //Close the file
    input.close();
}

void read(ifstream & input,char fn[],char ans[],int n){  //n=size, ans=answer
    //Open the file
    input.open(fn);   //open input file of fn (file size)

    //Read the data from the file
    for(int i=0;i<n;i++){
        input>>ans[i];  //read the input value
        //cout<<ans[i];
    }

    //Close the file
    input.close();  //finally close the open file

}