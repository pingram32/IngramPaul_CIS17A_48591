/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   RetailItem.h
 * Author: Paul
 *
 * Created on November 13, 2021, 2:01 PM
 */

#ifndef RETAILITEM_H
#define RETAILITEM_H
#include <string>
using namespace std;

class RetailItem{
private: 
    string desc;
    int units;
    float price;
public:
    RetailItem(string, int, float);
    void setDesc(string);
    void setUnits(int);
    void setPrice(float);
    string getDesc() const{
        return desc;
    }
    int getUnits() const{
        return units;
    }
    float getPrice() const{
        return price;
    }
};

#endif /* RETAILITEM_H */

