/* 
 * File:   main.cpp
 * Author: KyungJin Shin and Dr.Mark Lehr
 * Created on January 29, 2018, 12:45 PM
 * Purpose:  Shooting Game
 */

//System Libraries
#include <iostream> //I/O Library
#include <cstdlib>  //Contains srand, Random variable
#include <ctime>    //Time Library, Random
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool pHit(float); //float because i will use percentage
void shoot(bool,float,bool &);  // , percentage, death or alive

//Execution Begins Here
int main(int argc, char** argv) {
    //Setting the random number seed //Put always random number seed right after main
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    bool aLive,bLive,cLive; //Al Live, 
    float percA,percB,percC; //percentage
    int nRounds,howMany;   //how many rounds play the game
    int sumA,sumB,sumC;
    
    //Initialize Variables
    sumA=sumB=sumC=0;  //Initialize sumA, sumB, sumC is 0
    percA=0.3f;     //Percentage of accuracy of A
    percB=0.5f;     //Percentage of accuracy of B
    percC=1.0f;     //Percentage of accuracy of C
    nRounds=100000;
    
    //Loop
    for(int round=1; round<=nRounds; round++){
        aLive=bLive=cLive=true; //because Al, Bob, Charlie all initialize alive
        howMany=3;    //3 people
    
//    //Process/Map inputs to outputs
//    int sum=0,nLoops=100000000;
//    float perc=0.3f;        //1.0f=100%, 0.3f=30%, 0.5f=50%
//    for (int i=1; i<=nLoops; i++){
//        cLive=true;
//        shoot(aLive,perc,cLive);
//        if(!cLive)sum++;  //if(pHit(perc))sum++; //Percentage we put in, get the percentage 
//    }
//    cout<<"Percentage = "<<perc<<" = "<<1.0f*sum/nLoops<<endl;
    
//    shoot(aLive,percA,cLive);  //a live, shoot c
//    shoot(bLive,percB,cLive);  //b turns, shoot c
//    shoot(cLive,percC,bLive);
    
    //Process/Map inputs to outputs  
        do{                               //No "else", use "else if"
            if (aLive && cLive){          //When Al and Charlie alive
                shoot(aLive,percA,cLive);
            }else if (aLive && bLive){
                shoot(aLive,percA,bLive);
            }
            if (bLive && cLive){          //When Bob and Charlie alive
                shoot(bLive,percB,cLive);
            }else if (bLive && aLive){
                shoot(bLive,percB,aLive);
            }
            if(cLive && bLive){           //When Bob and Charlie alive
                shoot(cLive,percC,bLive);
            }else if (cLive && aLive) {
                shoot(cLive,percC,aLive);
            }
            howMany=aLive+bLive+cLive;  //Adds up Al, Bob, and Charlie alive
        }while(howMany>1);  //Keeping looping more than 1 people left, stop looping when one left
        sumA+=aLive;  //Adds up time of Al alives
        sumB+=bLive;  //Adds up time of Bob alives
        sumC+=cLive;  //Adds up time of Charlie alives
    }

//    cout<<"Al      "<<(aLive?"Lived":"Died")<<endl;
//    cout<<"Bob     "<<(bLive?"Lived":"Died")<<endl;
//    cout<<"Charlie "<<(cLive?"Lived":"Died")<<endl;
    
    //Output data
    cout<<"Al      Lived "<<1.0f*sumA/nRounds<<endl;  //Show decimal points of Al lived
    cout<<"Bob     Lived "<<1.0f*sumB/nRounds<<endl;  //Show decimal points of Bob lived
    cout<<"Charlie Lived "<<1.0f*sumC/nRounds<<endl;  //Show decimal points of Charlie lived  
    cout<<"Sum = "<<sumA+sumB+sumC<<" = "<<nRounds<<endl; //check

    //Exit stage right!
    return 0;
}

void shoot(bool shtr,float prShtr,bool &victim){  //shtr=shooter, prShtr=%Shooter, victim
    if (victim){
        victim=pHit(prShtr)?false:true;   //if he was alive, false,hit the victim=death else ture=alive
    }
}

bool pHit(float perc){    //perc = percentage
    static const unsigned int mxRand=(1<<31)-1;    //2^31 - 1 
    float random=static_cast<float>(rand())/mxRand; //[0,1] 0 to 1
    return random<perc;
}