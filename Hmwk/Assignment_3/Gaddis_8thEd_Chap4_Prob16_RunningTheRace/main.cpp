/* 
 * File:   main.cpp
 * Author: KyungJin Shin 
 * Created on January 16, 2018, 12:00 AM
 * Purpose: Running the Race 
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

    //Output data

    //Exit stage right!
    return 0;
}

