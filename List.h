/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.h
 * Author: AMIT
 *
 * Created on September 25, 2016, 1:07 AM
 */

#ifndef LIST_H
#define LIST_H
class List{
private:
    struct node{
        int data;
        node* next;
    };
    typedef struct node* nodePtr;
    nodePtr head;
    nodePtr curr;
    nodePtr temp;
public: //This is where the functions are declared
    List();
    void AddNode(int addData);
    void DeleteNode(int delData);
    void PrintList();
};


#endif /* LIST_H */

