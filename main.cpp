//
//  main.cpp
//  Lab5p2
//
//  Created by Giovanni Masella on 11/8/16.
//  Copyright © 2016 Giovanni Masella. All rights reserved.

#include <iostream>
#include <string>
#include "Pstack.h"
#include "Pstack.cpp"

using namespace std;

int main(){
    
    PoiStack s;
    string array;
    int num;
    cout << "Please input the postfix expression seperated by spaces: ";
    getline(cin, array);
    cout << "your array was: " << array << endl << endl;
    
    for(int i = 0; i < array.length(); i++)
    {
        if (array[i] == ' ')
        {
            continue;
        }
        else if (array[i] >= '0' && array[i] <= '9'){
            num = array[i] - '0';
            while (array[i + 1] >= '0' && array[i + 1] <= '9')
            {
                num = num * 10 + array[i + 1] - '0';
                i++;
            }
            cout << "push num = " << num << endl;
            s.push(num);
            
        }
        else if (array[i] == '+' || array[i] == '-' || array[i] == '*' || array[i] == '/')
        {
            
            cout << "Operator " << array[i] << " detected!" << endl;
            s.op2 = s.pop();
            s.op1 = s.pop();
            switch (array[i]){
                    
                case '+': cout << "adding " << s.op1 << " + " << s.op2 << "\n";
                    s.push(s.op1 + s.op2);
                    break;
                case '-': cout << "subtracting " << s.op1 << " - "  << s.op2 << "\n";
                    s.push(s.op1 - s.op2);
                    break;
                case '*': cout << "multiplying " << s.op1 << " * " << s.op2 << "\n";
                    s.push(s.op1 * s.op2);
                    break;
                case '/': cout << "dividing " << s.op1 << " / " << s.op2 << "\n" ;
                    s.push(s.op1 / s.op2);
                    break;
            }
        }
        i++;
    }
    cout << "Your result was: " << s.pop() << endl;
}

