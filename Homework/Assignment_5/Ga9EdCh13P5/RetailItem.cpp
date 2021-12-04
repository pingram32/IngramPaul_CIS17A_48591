#include "RetailItem.h"
#include <iostream>
using namespace std;

RetailItem::RetailItem(string d, int u, float p){
    setDesc(d);
    setUnits(u);
    setPrice(p);
}

void RetailItem::setDesc(string d){
    desc=d;
}

void RetailItem::setUnits(int u){
    units=u;
}

void RetailItem::setPrice(float p){
    price=p;
}
