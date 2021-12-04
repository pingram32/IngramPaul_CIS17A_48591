/* 
 * File:   main.cpp
 * Author: Paul Ingram 
 * Created on October 31, 2021, 9:10 PM
 * Purpose:  Chapter 13 problem 1
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries
class Date{
    private:
        int month;
        int day;
        int year;
    public:
        void setDMY(int, int, int);
        void print1();
        void print2();
        void print3();
};
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    Date date;
    int m,d,y;
    //Initialize all known variables

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Enter month number (1-12) : ";
    do{ cin>>m;}while(m>12 || m<1);
    cout<<"Enter day (1-31) : ";
    do{ cin>>d; }while(d>31 || d<1);
    cout<<"Enter year : ";
    cin>>y;
    
    date.setDMY(m,d,y);
    date.print1();
    date.print2();
    date.print3();
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}
void Date::setDMY(int m, int d, int y){
    month=m;
    day=d;
    year=y;
}

void Date::print1(){
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}

void Date::print2(){
    switch(month){
        case 1:{ cout<<"January "; break; }
        case 2:{ cout<<"February "; break; }
        case 3:{ cout<<"March "; break; }
        case 4:{ cout<<"April "; break; }
        case 5:{ cout<<"May "; break; }
        case 6:{ cout<<"June "; break; }
        case 7:{ cout<<"July "; break; }
        case 8:{ cout<<"August "; break; }
        case 9:{ cout<<"September "; break; }
        case 10:{ cout<<"October "; break; }
        case 11:{ cout<<"November "; break; }
        case 12:{ cout<<"December "; break; }
    }
    cout<<day<<", "<<year<<endl;
}

void Date::print3(){
    cout<<day<<" ";
    switch(month){
        case 1:{ cout<<"January "; break; }
        case 2:{ cout<<"February "; break; }
        case 3:{ cout<<"March "; break; }
        case 4:{ cout<<"April "; break; }
        case 5:{ cout<<"May "; break; }
        case 6:{ cout<<"June "; break; }
        case 7:{ cout<<"July "; break; }
        case 8:{ cout<<"August "; break; }
        case 9:{ cout<<"September "; break; }
        case 10:{ cout<<"October "; break; }
        case 11:{ cout<<"November "; break; }
        case 12:{ cout<<"December "; break; }
    }
    cout<<year<<endl;
}