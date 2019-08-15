//
//  Pstack.cpp
//  Lab5p2
//
//  Created by Giovanni Masella on 11/10/16.
//  Copyright © 2016 Giovanni Masella. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include "Pstack.h"

using namespace std;

void PoiStack::push(int x){
    
    cout << "pushing " << x << endl;
    node* newNode;
    newNode = new node;
    newNode -> data = x;
    //if (top == NULL){
       // top = newNode;
        //cout << "(first node)\n";
    //}
    //else {
        newNode -> next = top;
        //prev = top;
        top = newNode;
    //}
}

int PoiStack::pop(){
    int temp;
    if (top){
        
    
    cout << "popping : " << top -> data << "\n";
    node* p = top;
    //top = prev;
    top = top -> next;
    temp = p -> data;
    delete p;
    return temp;
    }
    return -1;
}
