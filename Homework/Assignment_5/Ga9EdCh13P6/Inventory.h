/* 
 * File:   Inventory.h
 * Author: Paul
 *
 * Created on November 14, 2021, 9:15 AM
 */

#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory{
private:
    int itemNum,
        quant;
    float cost,
          totCost;
public:
    Inventory(){
        itemNum=0,quant=0,cost=0;
    }
    Inventory(int item,int q,float c){
        itemNum=item,quant=q,cost=c;
        setTotalCost(q,c);
    }
    void setTotalCost(int q, float c){
        totCost=q*c;
    }
    void setItemNumber(int item){
        itemNum=item;
    }
    void setQuantity(int q){
        quant=q;
    }
    void setCost(float c){
        cost=c;
    }
    int getItemNumber() const{
        return itemNum;
    }
    int getQuantity() const{
        return quant;
    }
    float getCost() const{
        return cost;
    }
    float getTotalCost() const{
        return totCost;
    }
};


#endif /* INVENTORY_H */

