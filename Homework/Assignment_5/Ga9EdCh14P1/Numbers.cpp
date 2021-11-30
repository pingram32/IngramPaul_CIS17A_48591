#include "Numbers.h"
#include <iostream>
using namespace std;

void Numbers::print(){
    int n1000s,n100s,n10s,n1s;
        n1000s=number/1000;   //Shift 3 places to the left
        n100s=number%1000/100;//Remainder of division of 1000 then shift 2 left
        n10s=number%100/10;   //Remainder of division of 100 then shift 1 left
        n1s=number%10;        //Remainder of division by 10
        
        //Output the number of 1000's in Roman Numerals
        //Using the Switch Statement
        switch(n1000s){
            case 9:cout<<"Nine Thousand ";break;
            case 8:cout<<"Eight Thousand ";break;
            case 7:cout<<"Seven Thousand ";break;
            case 6:cout<<"Six Thousand ";break;
            case 5:cout<<"Five Thousand ";break;
            case 4:cout<<"Four Thousand ";break;
            case 3:cout<<"Three Thousand ";break;
            case 2:cout<<"Two Thousand ";break;
            case 1:cout<<"One Thousand ";break;
        }
        
        //Output the number of 100's
        //Using the Ternary Operator
        cout<<(n100s==9?"Nine Hundred ":
               n100s==8?"Eight Hundred ":
               n100s==7?"Seven Hundred ":
               n100s==6?"Six Hundred ":
               n100s==5?"Five Hundred ":
               n100s==4?"Four Hundred ":
               n100s==3?"Three Hundred ":
               n100s==2?"Two Hundred ":
               n100s==1?"One Hundred ":"");
        
        //Output the number of 10's
        //Using Independent If Statements
        if(n10s==9)cout<<"Ninety ";
        if(n10s==8)cout<<"Eighty ";
        if(n10s==7)cout<<"Seventy ";
        if(n10s==6)cout<<"Sixty ";
        if(n10s==5)cout<<"Fifty ";
        if(n10s==4)cout<<"Forty ";
        if(n10s==3)cout<<"Thirty ";
        if(n10s==2)cout<<"Twenty ";
        else if(n10s==1){
            if(n1s==1)cout<<"Eleven ", n1s=0;
            else if(n1s==2)cout<<"Twelve ", n1s=0;
            else if(n1s==3)cout<<"Thirteen ", n1s=0;
            else if(n1s==4)cout<<"Fourteen ",n1s=0;
            else if(n1s==5)cout<<"Fifteen ",n1s=0;
            else if(n1s==6)cout<<"Sixteen ",n1s=0; 
            else if(n1s==7)cout<<"Seventeen ",n1s=0;
            else if(n1s==8)cout<<"Eighteen ",n1s=0;
            else if(n1s==9)cout<<"Nineteen ",n1s=0;
            else if(n1s==0)cout<<"Ten ",n1s=0;  
        }
        //Output the number of 1's
        //Using Dependent If Statements
        if(n1s==9)cout<<"Nine";
        else if(n1s==8)cout<<"Eight";
        else if(n1s==7)cout<<"Seven";
        else if(n1s==6)cout<<"Six";
        else if(n1s==5)cout<<"Five";
        else if(n1s==4)cout<<"Four";
        else if(n1s==3)cout<<"Three";
        else if(n1s==2)cout<<"Two";
        else if(n1s==1)cout<<"One";
}

