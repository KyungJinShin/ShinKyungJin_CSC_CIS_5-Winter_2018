/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on January 31, 2018, 8:15 AM
 * Purpose:  Menu for the Assignment 4
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>  //Formatting Library
#include <cstdlib>  //Random Number Generator
#include <ctime>    //Time to Seed Random Number
#include <cmath>    //Math Library, power function
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();

//Execution Begins Here!

int main(int argc, char** argv) {
    //Set a Random number seed here.
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Main variables here.
    int inN;

    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            case 7:    problem7();break;
            case 8:    problem8();break;
            case 9:    problem9();break;
            case 10:   problem10();break;
            default:   def(inN);
	}
    }while(inN<11);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1: Gaddis_8thEd_Chap5_Prob6_Distance_Traveled"<<endl;
    cout<<"Type 2 to execute Problem 2: Gaddis_8thEd_Chap5_Prob2_ASCII_Codes"<<endl;
    cout<<"Type 3 to execute Problem 3: Gaddis_8thEd_Chap5_Prob12_Celsius_Fahrenheit_Table"<<endl;
    cout<<"Type 4 to execute Problem 4: Gaddis_8thEd_Chap5_Prob7_Pennies_For_Pay"<<endl;
    cout<<"Type 5 to execute Problem 5: Gaddis_8thEd_Chap5_Prob8_Math_Tutor"<<endl;
    cout<<"Type 6 to execute Problem 6: Gaddis_8thEd_Chap5_Prob9_Hotel_Occupancy"<<endl;
    cout<<"Type 7 to execute Problem 7: Savitch_9thEd_Chap4_Pract_Prob1_Liter_per_Gallon"<<endl;
    cout<<"Type 8 to execute Problem 8: Savitch_9thEd_Chap4_Pract_Prob2_Best_Fuel_Efficiency"<<endl;
    cout<<"Type 9 to execute Problem 9: Savitch_9thEd_Chap4_Pract_Prob7_Gravitional_Force"<<endl;
    cout<<"Type 10 to execute Problem 10: Savitch_9thEd_Chap4_Projs_Prob2_Clothing_Size"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;

}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;

}

void problem1(){
    //Declare Variables
    unsigned short speed,//Speed of a vehicle in miles per hour
                   time, //How many hours it has traveled (in hours)
                   dist; //Distance the vehicle has traveled for each hour of that time period
    char answer;  //User answers whether repeat this program or finish 
   
    //Initialize Variables
    dist=0;    //Initialize distance as 0
    cout<<"This program calculates the distance a vehicle travels"<<endl;

    //Process/Map inputs to outputs
    do {
    cout<<"What is the speed of the vehicle in mph?  ";
    cin>>speed;
    cout<<"How many hours has it traveled?  ";
    cin>>time;
        if (speed<=0 || time<=0){   //Speed and Time is unsigned short! No Negative!!!!
        cout<<"Error"<<endl;        //when speed or time is 0,it is error
        }else {
            //Output data
            cout<<"  Hour    Distance Traveled "<<endl;
            cout<<"--------------------------------"<<endl;
            for(int hour=1; hour<=time; hour++) {
                dist=speed*hour;   //Distance Formula = speed * hour
                cout<<setw(4)<<hour<<setw(15)<<dist<<endl;  //Formatting
        }
    }
    cout<<"Do you want to try again? (Y/N) ";    //Ask user whether repeat this program or finish 
    cin>>answer;                          //If the user enter 'Y' or 'y', this program will run again
    cout<<"  "<<endl;          //Give a space between first output and second output(which is repeated)
    } while (answer == 'Y' || answer == 'y'); //User can repeat this calculation as the user wishes
}



void problem2(){
    //Declare Variables
    unsigned char codes; //Characters for the ASCII Codes 0 through 127.
   
    //Initialize Variables
    cout<<"This program displays the characters for the ASCII Codes"<<endl;
    
    for(codes=0; codes<128; codes++) {  //Display 16 characters on each line
        cout<<codes;
        if( ( codes ) % 16 == 0 ) cout<<endl;
    }                                                  //Just different style to display
    cout<<"  "<<endl;                                  //         Same
    for(unsigned char codes=1; codes<=127; codes++) {  // # number = # characeter
        cout<<"Ascii Code Number = "<<static_cast<int>(codes)<<"  -> "<<setw(25)
            <<"Ascii Code Character = "<<codes<<endl;
    }
}

void problem3(){
    //Declare all Variables Here
    float degF,degC,dgChk; //Degree Fahrenheit, Degree Celsius, Check degree
    float x1,x2,y1,y2; 
    
    //Initialize Variables
    x1=32; //Interpolation 32 degrees Fahrenheit
    x2=212;//Interpolation 212 degrees Fahrenheit
    y1=0;  //Interpolation 0 degrees centigrade 
    y2=100;//Interpolation 100 degrees centigrade
    
    //Process/Map inputs to outputs
    cout<<"This program is Celsius & Fahrenheit Table"<<endl;
    
    //Output Data
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"----------------------------"<<endl;
    cout<<" Celsius      Fahrenheit "<<endl;
    for (int degC=0; degC<=20; degC++) {
        degF=(degC*9.0f/5)+32.0f;
        cout<<setw(5)<<degC<<setw(15)<<degF<<endl;
    }
}

void problem4(){
    //Declare Variables
    int ndays;//Number of days of work. 1day=1 penny, 2day=2 pennies
    int pennies = 1; // cents
    float totpay=pennies/100.f; //Total salary of the total days, in dollars
   
    //Initialize Variables
    cout<<"This program calculates total pay of the salary by pennies"<<endl;
    cout<<"In the range of 0 to 31 only"<<endl;
    cout<<"Enter the number of days"<<endl;
    cin>>ndays;  //number of days the user worked
    if (ndays<1 || ndays>31) { // why not while(ndays<1) { cout << ".."; cout<<"Enter..."; cin>>ndays;
        do {
            cout<<"Number of days should be greater or equal than 1 or less than 31"<<endl;
            cout<<"Enter the number of days"<<endl; //Enter the number days again
            cin>>ndays;  //number of days the user worked
        }while (ndays<1 || ndays>31); //This question will repeat until the user put number equal or bigger than 1
    }else {
        cout<<setw(4)<<"Day"<<setw(15)<<"$ Salary"<<setw(15)<<"$ Total"<<endl;
    }
    
    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int day=1; day<=ndays; day++) {
        //if(day>1) {
            pennies*=2;
            totpay+=pennies/100.0f;
        //}
        cout<<setw(4)<<day<<setw(15)<<pennies/100.0f<<setw(15)<<totpay<<endl;
    };

}

void problem5(){
    //Generate Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int num1, num2; // Number 1 and Number 2
    int ans; //Answer of the problems
    int sol; //Solution of the problems, equations
    char prob; //Problem number
    
    //Initialize Variables   
    bool loop = true;
    do{    
        cout<<"This program helps you to practice math"<<endl;
        cout<<"Choose from the following Menu"<<endl;
        cout<<"Enter 1 : Problem 1 -> Addition"<<endl;
        cout<<"Enter 2 : Problem 2 -> Subtraction"<<endl;
        cout<<"Enter 3 : Problem 3 -> Multiplication"<<endl;
        cout<<"Enter 4 : Problem 4 -> Division"<<endl;
        cout<<"Enter 0 : Exit the problems"<<endl; //exit
        cout<<"Do not enter above 50 or less than -50 for the menu choice"<<endl; //error

        //Process/Map inputs to outputs
        //read the choice
        cin>>prob; //1 through 4, and exit to other numbers
        
        //Output data
        switch (prob){
            case '1': {
                num1=rand()%900+100; //Three digit number
                num2=rand()%1000;    //Any 1 to 3 digit number

                cout<<num1<<" + "<<num2<<" = "<<endl; //Display addition
                cout<<"Enter the answer: ";
                cin>>ans;       //answer
                sol=num1+num2; //Addition math
                cout<<(sol==ans?"Correct":"Incorrect")<<endl<<endl; //Answer of the result is correct or incorrect
                break;
            
            }case '2': {
                num1=rand()%900+100; //Three digit number
                num2=rand()%1000;    //Any 1 to 3 digit number

                cout<<num1<<" - "<<num2<<" = "<<endl; //Display subtraction
                cout<<"Enter the answer: ";
                cin>>ans;      //answer
                sol=num1-num2; //Substraction math
                cout<<(sol==ans?"Correct":"Incorrect")<<endl<<endl; //Answer of the result is correct or incorrect
                break;
            
            }case '3': {
                num1=rand()%900+100; //Three digit number
                num2=rand()%1000;    //Any 1 to 3 digit number

                cout <<num1<<" x "<<num2<<" = "<<endl; //Display multiplication
                cout<<"Enter the answer: ";
                cin>>ans;      //answer
                sol=num1*num2; //Multiplication math
                cout<<(sol==ans?"Correct":"Incorrect")<<endl<<endl; //Answer of the result is correct or incorrect
                break;
                   
            }case '4': {
                num1=rand()%900+100; //Three digit number
                num2=rand()%1000;    //Any 1 to 3 digit number
                int prod=num1*num2;  //can be divide with natural number, not decimal number
                num1=prod;
                cout<<num1<<" / "<<num2<< " = " <<endl; //Display division
                cout<<"Enter the answer: ";
                cin>>ans;      //answer
                sol=num1/num2; //Division math
                cout<<(sol==ans?"Correct":"Incorrect")<<endl<<endl; //Answer of the result is correct or incorrect
                break;
            }default:{
                cout << "Exit" <<endl;   //Exit if user did not input 1,2,3,or4.
                loop = false;            //False -> stop the loop
                break;
            }
        };
    } while(loop);  //prob!=1 && prob!=2 && prob!=3 && prob!=4
}

void problem6(){
    //Declare Variables
    unsigned short nroomH=0, //How many rooms the hotel has
                    nfloorH=0, //How many floors the hotel has 
                    nroomF=0, //Number of rooms on the floor
                    occupF=0, //How many of the rooms on the floor are occupied
                    occupH=0, //How many of rooms in the hotel are occupied
                    unocup=0; //How many are unoccupied
    float prtOcup=0; //Percentage of rooms that are occupied
   
    //ignore the rest of cin
    //cin.ignore(128, '\n'); //ignore 128 or until a newline
    
    //Initialize Variables
    cout<<"This program calculates the occupancy rate for a hotel"<<endl;
    cout<<"In the range of more than 1 floor only"<<endl; //Because Unsigned short, No negative number!!
    cout<<"How many floors the hotel has? "<<endl;
    cin>>nfloorH;
    if (nfloorH<1) {                           //Less than 1 floor in hotel is error
        cout<<"Error on input"<<endl;
    }else {
        for(int floors=1; floors<=nfloorH; floors++){
            cout<<"in the range of more than 10 rooms"<<endl;
            cout<<"How many rooms on the floor? "<<endl;
            cin>>nroomF;
            if (nroomF<10) {                   //Less than 10 rooms in each floor is error
                cout<<"Error on input"<<endl;
            }else {
                cout<<"How many rooms on the floor are occupied? "<<endl;
                cin>>occupF;
                
            nroomH+=nroomF;   //Number of rooms in hotel = addition of room numbers of floor
            occupH+=occupF;   //Occupied hotel rooms = additoin of occupied each floor rooms
            unocup=nroomH-occupH; //unoccupied rooms = total rooms in hotel - occupied rooms in hotel
            static_cast<float>(prtOcup);  //change to float, which is able to show decimal points
            prtOcup=100.0f*occupH/nroomH; //percentage of occupied rooms in hotel
            }
        }
    }

    //Process/Map inputs to outputs
       
    //Output data
    cout<<"The number of rooms the hotel has = "<<nroomH<<endl;
    cout<<"The number of occupied rooms the hotel has = "<<occupH<<endl;
    cout<<"The number of unoccupied rooms the hotel has = "<<unocup<<endl;
    cout<<fixed<<setprecision(1)<<endl;  //1 decimal point
    cout<<"The percentage of rooms that are occupied = "<<prtOcup<<"%"<<endl; //Percentage
}

void problem7(){
    //Declare Variables
    float liter, //liter is 0.264179 gallons
         gallon, //conversion of nLiter (unit is liter) to (unit is gallon) 
         nLiter, //number of liters of gasoline consumed by the car
         nMiles, //number of miles traveled by the car
            mpg; //number of miles per gallon the car delivered
    char answer; //User answers whether repeat this program or finish 
   
    //Initialize Variables
    cout<<"This program calculates number of miles per gallon the car delivered"<<endl;
    do {
        cout<<"Enter the number of liters of gasoline consumed"<<endl;
        cin>>nLiter;  
        cout<<"Enter the number of miles traveled by the car"<<endl;
        cin>>nMiles;  
        if (nLiter<=0 || nMiles<=0) {       // If the input values are less than 0, it is error
            cout<<"Error"<<endl; 
        }else {
            liter=0.264179f ;//1 Liter = 0.264179 Gallons

            //Process/Map inputs to outputs
            gallon=liter*nLiter;  //Convert the number of liter to gallon
            mpg=nMiles/gallon;    //Number of miles per gallon

            //Output data
            cout<<"Number of miles per gallon = "<<mpg<<endl; //Miles per gallon
            liter=0.264179f ;//1 Liter = 0.264179 Gallons

            //Process/Map inputs to outputs
            gallon=liter*nLiter;  //Convert the number of liter to gallon
            mpg=nMiles/gallon;    //Number of miles per gallon

            //Output data
            cout<<"Number of miles per gallon = "<<mpg<<endl; //Miles per gallon
        }
        
        cout<<"Do you want to try again? (Y/N) ";    //Ask user whether repeat this program or finish 
        cin>>answer;                          //If the user enter 'Y' or 'y', this program will run again
    } while (answer == 'Y' || answer == 'y'); //User can repeat this calculation as the user wishes
}

void problem8(){
    //Declare Variables
    float liter, //liter is 0.264179 gallons
         gallon1, //conversion of nLiter (unit is liter) to (unit is gallon) of car1
         gallon2, //conversion of nLiter (unit is liter) to (unit is gallon) of car2
         nLiter1, //number of liters of gasoline consumed by the car1
         nLiter2, //number of liters of gasoline consumed by the car2
         nMiles1, //number of miles traveled by the car1
         nMiles2, //number of miles traveled by the car2 
            mpg1, //number of miles per gallon the car1 delivered
            mpg2; //number of miles per gallon the car2 delivered
    char answer;  //User answers whether repeat this program or finish 
   
    //Initialize Variables
    cout<<"This program calculates number of miles per gallon the car delivered"<<endl;
    do {
        cout<<"Enter the number of liters of gasoline consumed by the First car"<<endl;
        cin>>nLiter1;  //car1 Liter of gasoline
        cout<<"Enter the number of miles traveled by the First car"<<endl;
        cin>>nMiles1;  //car1 Miles
        cout<<"Enter the number of liters of gasoline consumed by the Second car"<<endl;
        cin>>nLiter2;  //car2 Liter of gasoline
        cout<<"Enter the number of miles traveled by the Second car"<<endl;
        cin>>nMiles2;  //car2 Miles   
        if (nLiter1<=0 || nLiter2<=0 || nMiles1<=0 || nMiles2<=0) {
            cout<<"Error"<<endl; 
        }else {
            liter=0.264179f ;//1 Liter = 0.264179 Gallons

            //Process/Map inputs to outputs
            gallon1=liter*nLiter1;  //Convert the number of liter to gallon of car1
            gallon2=liter*nLiter2;  //Convert the number of liter to gallon of car2
            mpg1=nMiles1/gallon1;   //Number of miles per gallon of car1
            mpg2=nMiles2/gallon2;   //Number of miles per gallon of car2

            //Output data
            cout<<"Number of miles per gallon of the First car = "<<mpg1<<endl; //car1 mpg
            cout<<"Number of miles per gallon of the Second car = "<<mpg2<<endl; //car2 mpg

            if (mpg1==mpg2) {               //When first car and second car are equal mpg
                cout<<"Both cars are the best fuel efficiency cars "<<endl;   
            }else if (mpg1>mpg2) {          //When first car is larger/bigger mpg
                cout<<"The First car is the best fuel efficiency car"<<endl;    
            }else if (mpg2>mpg1) {          //When second car is larger/bigger mpg
                cout<<"The Second car is the best fuel efficiency car"<<endl;
            }
        }
            
        cout<<"Do you want to try again? (Y/N)"; //Ask user whether repeat this program or finish 
        cin>>answer;                          //If the user enter 'Y' or 'y', this program will run again
        cout<<"                    "<<endl;
    } while (answer == 'Y' || answer == 'y'); //User can repeat this calculation as the user wishes
}

void problem9(){
    //Declare Variables
    float mass1, //a body with mass 1 in g
          mass2, //another body with mass 2 in g
           dist, //two bodies separated by a distance in cm
          gravi, //the universal gravitational constant = 6.673e-8 (cm^3/(g*sec^2))
         gForce; //Gravitational attractive force in g*cm/(sec^2)
    char answer; //User answers whether repeat this program or finish 
   
    //Initialize Variables
    gravi=6.673e-8f; //Gravity constant is 6.673e-8 (cm^3/(g*sec^2))
    cout<<"This program calculates gravitational attractive force"<<endl;
    do {
        cout<<"Enter only positive numbers"<<endl;
        cout<<"Enter mass 1"<<endl;
        cin>>mass1;  //mass 1 in g
        cout<<"Enter mass 2"<<endl;
        cin>>mass2;  //mass 2 in g 
        cout<<"Enter distance between mass 1 and mass 2"<<endl; 
        cin>>dist;   //distance in cm (centi-meter)

        //Process/Map inputs to outputs
        if (mass1<=0 || mass2<=0 || dist<=0) {
            cout<<"Error"<<endl;
        }else {
            gForce=(gravi*mass1*mass2)/(pow(dist,2));  //Gravitational Force unit is g*cm/(sec^2)

            //Output data
            cout<<"mass 1 = "<<mass1<<" g"<<endl;    
            cout<<"mass 2 = "<<mass2<<" g"<<endl;                   
            cout<<"Distance = "<<dist<<" cm"<<endl;
            cout<<"Gravitational Force = "<<gForce<<" g*cm/(sec^2)"<<endl;  
        }
        
        cout<<"Do you want to try again? (Y/N)";  //Ask user whether repeat this program or finish 
        cin>>answer;      //If the user enter 'Y' or 'y', this program will run again
    } while (answer == 'Y' || answer == 'y'); //User can repeat this calculation as the user wishes
}

void problem10(){
    //Declare Variables
    unsigned short heit, //User's height in inches
                   weit, //User's weight in pounds
                    age, //User's age in years
                   size, //User's size
                    hat, //Hat size
                 jacket, //Jacket size (chest in inches)
                  waist; //Waist in inches
    char answer;         //User answers whether repeat this program or finish 
   
    //Initialize Variables
    cout<<"This program calculates clothing sizes"<<endl;
    do {
        cout<<"Input the positive number only"<<endl;  //Unsigned short is not covering Negative number!
        cout<<"Enter your height in inches"<<endl;
        cin>>heit;  //User's height in inches
        cout<<"Enter your weight in pounds"<<endl;
        cin>>weit;  //User's weight in pounds
        cout<<"Enter your age"<<endl;   //age with the unit is years
        cin>>age;   //User's age in years

        //Process/Map inputs to outputs
        hat=(weit/heit)*2.9;  //Hat size = (weight(lb)/height(inches))*(2.9)

        if (0<age<=39) {                     //Add 1/8 of an inche for each 10 years with starting at 40
            jacket=(heit*weit/288);          //When user's age is 1 through 39 years old -> No 1/8 add
        }else if (40<=age<=49) {        
            jacket=(heit*weit/288)+(1/8);    //When user's age is 40 through 49 years old -> Add 1/8 once
        }else if (50<=age<=59) {
            jacket=(heit*weit/288)+(1/8)*2;  //When user's age is 50 through 59 years old -> Add 1/8 twice
        }else if (60<=age<=69) {
            jacket=(heit*weit/288)+(1/8)*3;  //When user's age is 60 through 69 years old -> Add 1/8 third
        }else if (70<=age<=79) {
            jacket=(heit*weit/288)+(1/8)*4;  //When user's age is 70 through 79 years old -> Add 1/8 fourth
        }else if (80<=age<=89) {
            jacket=(heit*weit/288)+(1/8)*5;  //When user's age is 80 through 89 years old-> Add 1/8 fifth
        }else if (90<=age<=99) {
            jacket=(heit*weit/288)+(1/8)*6;  //When user's age is 90 through 99 years old -> Add 1/8 sixth
        }else if (100<=age<=109) {
            jacket=(heit*weit/288)+(1/8)*7;  //When user's age is 100 through 109 years old -> Add 1/8 seventh
        }else {
            do{
            cout<<"Enter your age in years in the range of "
                  "1 to 109 years old"<<endl; //Enter your age again
            cin>>age;
            } while (age<1 || age>109);       //Repeat the loop until age(number)is less than 1 or bigger than 109
        }
                                                    //In the range of 28 to 109,  
        if (28<=age || age<=109 && age%2==0) { // only takes place after a full 2 years (even number years, 28,30,32...)
            waist=(weit/5.7)+(1/10)*((age-28)/2);   //Add 1/10 inch for each 2 years over age 28
        }else if (0<age<28) {   //When the user's age is less than 28 years old
            waist=(weit/5.7);   //No addition of 1/10
        }               

        //Output data
        cout<<"Hat size = "<<hat<<endl;                         //The user's hat size
        cout<<"Jacket size (Chest in inches) = "<<jacket<<endl; //The user's jacket size
        cout<<"Waist in inches = "<<waist<<endl;                //The user's waist size
        cout<<"Do you want to try again? (Y/N)";    //Ask user whether repeat this program or finish 
        cin>>answer;                          //If the user enter 'Y' or 'y', this program will run again
    } while (answer == 'Y' || answer == 'y'); //User can repeat this calculation as the user wishes
}