#include "DayOfYear.h"
#include <iostream>
using namespace std;

void DayOfYear::print(){
    while(day>365){
        day-=365;
    }
    while(months[month]<day){
        month++;
    }
    day=day-months[month-1];
    
    switch(month){
        case 1:cout<<"January ";break;
        case 2:cout<<"February ";break;
        case 3:cout<<"March ";break;
        case 4:cout<<"April ";break;
        case 5:cout<<"May ";break;
        case 6:cout<<"June ";break;
        case 7:cout<<"July ";break;
        case 8:cout<<"August ";break;
        case 9:cout<<"September ";break;
        case 10:cout<<"October ";break;
        case 11:cout<<"November ";break;
        case 12:cout<<"December ";break;
    }
    cout<<day;
}

DayOfYear::DayOfYear(int d, string m){
    if(m=="January"){
            day+=months[0];
    }
    else if(m=="February"){
        day+=months[1];
    }
    else if(m=="March"){
        day+=months[2];
    }
    else if(m=="April"){
        day+=months[3];
    }
    else if(m=="May"){
        day+=months[4];
    }
    else if(m=="June"){
        day+=months[5];
    }
    else if(m=="July"){
        day+=months[6];
    }
    else if(m=="August"){
        day+=months[7];
    }
    else if(m=="September"){
        day+=months[8];
    } 
    else if(m=="October"){
        day+=months[9];
    }
    else if(m=="November"){
        day+=months[10];
    }
    else if(m=="December"){
        day+=months[11];
    }
    day+=d;
}
