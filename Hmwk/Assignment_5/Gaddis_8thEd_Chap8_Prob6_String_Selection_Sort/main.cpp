/* 
 * File:   main.cpp
 * Author: KyungJin Shin
 * Created on February 4, 2018, 5:50 PM
 * Purpose:  String selection sort
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>    //String Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void sort(string[], int); //Sorting function, no return = void
void show(string[], int); //Display array function, no return = void
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=20; //20 number of names
    string name[SIZE]={"Collins, Bill", "Smith, Bart", "Allen, Jim",
                        "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                        "Taylor, Terri", "Johnson, Jill",
                        "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                        "James, Jean", "Weaver, Jim", "Pore, Bob",
                        "Rutherford, Greg", "Javens, Renee",
                        "Harrison, Rose", "Setzer, Cathy",
                        "Pike, Gordon", "Holland, Beth"}; 

    //Output values
    sort(name,SIZE); //Sorting function
    show(name,SIZE); //Display array function
    
    //Exit stage right!
    return 0;
}

void sort(string a[], int n){ //a=array, n=size
    int scan, j; //scaning, integer j
    string val; //value
    for(int scan=0; scan<(n-1); scan++){
        j=scan;      // integer j is same as scaning
        val=a[scan]; // value is same as array in scaning
        for(int i=scan+1; i<n; i++){ // integer i 
            if(a[i]<val){ 
                val=a[i]; //value and array in integer i are same
                j=i;     // Overall j is same as i
            }
        }
        a[j]=a[scan];// array in integer j is same as array in scaning
        a[scan]=val; // array in scanning is same as value
    }
}

//Display Array
void show(string name[], int SIZE) { //name, size
    for(int i=0; i<SIZE; i++){
        cout<<name[i]<<endl;      //Display name by sequence
    }
}
