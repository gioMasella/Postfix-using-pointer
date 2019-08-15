//
//  Astack.h
//  Lab5p2
//
//  Created by Giovanni Masella on 11/8/16.
//  Copyright © 2016 Giovanni Masella. All rights reserved.
//

#ifndef Pstack_h
#define Pstack_h
const int MAX = 10;

struct node{
    int data;
    node* next;
};

class PoiStack{
   public:
    void push(int x);
    int pop();
    int op1,op2;
    
     private:
        node* top = NULL;
        //node* prev = NULL;
};


#endif /* Pstack_h */
