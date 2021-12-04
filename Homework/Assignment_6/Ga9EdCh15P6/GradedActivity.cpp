#include "GradedActivity.h"

char GradedActivity::getLetterGrade() const{
    char letter;
    
    if(score>89){
        letter='A';
    }
    else if(score>79){
        letter='B';
    }
    else if(score>69){
        letter='C';
    }
    else if(score>59){
        letter='D';
    }
    else letter='F';
    
    return letter;
}