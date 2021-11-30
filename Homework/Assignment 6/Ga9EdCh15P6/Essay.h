/* 
 * File:   Essay.h
 * Author: Paul
 *
 * Created on November 27, 2021, 12:48 PM
 */

#ifndef ESSAY_H
#define ESSAY_H
#include "GradedActivity.h"
class Essay : public GradedActivity{
    private:
        float gram,
                spell,
                corlen,
                cont;
    public:
        Essay(){
            gram=0.0,spell=0.0,corlen=0.0,cont=0.0;
        }
        Essay(float g, float s, float l,float c){
            gram=g,spell=s,corlen=l,cont=c;
            score+=g,score+=s,score+=l,score+=c;
        }
        void setGram(float g){
            gram=g;
            score+=gram;
        }
        void setSpel(float s){
            spell=s;
            score+=spell;
        }
        void setCorLen(float len){
            corlen=len;
            score+=corlen;
        }
        void setCont(float c){
            cont=c;
            score+=cont;
        }
        float getGram() const{
            return gram;
        }
        float getSpel() const{
            return spell;
        }
        float getCorLen() const{
            return corlen;
        }
        float getCont() const{
            return cont;
        }
            
};

#endif /* ESSAY_H */

