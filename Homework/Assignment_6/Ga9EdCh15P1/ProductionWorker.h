/* 
 * File:   ProductionWorker.h
 * Author: Paul
 *
 * Created on November 25, 2021, 3:20 PM
 */

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"

class ProductionWorker : public Employee{
    private:
        int shift;
        float pay;
        
    public:
        ProductionWorker(){
            shift=0,pay=0.0;
        }
        ProductionWorker(int s, float p, string n, string num, string h){
            shift=s,pay=p;
            setName(n);
            setNumber(num);
            setHire(h);
        }
        int getShift() const{
            return shift;
        }
        float getPay() const{
            return pay;
        }
        void setShift(int s){
            shift=s;
        }
        void setPay(float p){
            pay=p;
        }
};

#endif /* PRODUCTIONWORKER_H */

