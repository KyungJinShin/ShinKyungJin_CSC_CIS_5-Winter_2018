/* 
 * File:   main.cpp
 * Author: KyungJin Shin and Dr. Lehr
 * Created on January 9, 2018, 10:50 AM
 * Purpose:  Monthly Payment
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float HLFPNY=5e-3f; //Half a penny
const int SHIFT=100;   //Shift 2 places

//Conversion to Percent

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char nPaymt;  //Number of payments
    float intRat, //Interest rate in percent per month
          Loan,   //$ Loan amount
          monPay, //$ Monthly payment
          totPay, //$ Total payment
          util,   //Utility variable to simplify equation
          intPaid;//$ Interest Paid
    
    //Input or initialize values Here
    intRat=1e-2f; //1% per month
    Loan=1e4f;    //$10,000 
    nPaymt=36;    //36 months
    
    //Process/Calculations Here
    util=pow(1+intRat,nPaymt);
    monPay=(util*intRat*Loan) / (util-1);
    int iPymnt=(monPay+HLFPNY)*SHIFT; //Half Penny round up then truncate;Half Penny,shift left,truncate;
    cout<<"Number pennies = "<<iPymnt<<endl;
    monPay=static_cast<float>(iPymnt)/SHIFT; //Shift result back right
    totPay=monPay * nPaymt;
    intPaid=totPay-Loan;
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"This program calculates monthly payment"<<endl;
    cout<<"Loan amount        = $ "<<Loan<<endl;
    cout<<"Interest rate      = $ "<<setw(9)<<intRat*1200<<" %/year"<<endl;
    cout<<"Number of payments =  "<<setw(6)<<static_cast<int>(nPaymt)<<endl;
    cout<<"Monthly payment    = $ "<<setw(8)<<monPay<<endl;
    cout<<"Total payment      = $ "<<totPay<<endl;
    cout<<"Interest Paid      = $ "<<setw(8)<<intPaid<<endl;

    //Exit
    return 0;
}

