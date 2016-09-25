/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: AMIT
 *
 * Created on September 25, 2016, 1:06 AM
 */

#include <cstdlib>
#include "List.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    List Amit;
    Amit.AddNode(3);
    Amit.AddNode(5);
    Amit.AddNode(7);
    Amit.PrintList();
    return 0;
}

