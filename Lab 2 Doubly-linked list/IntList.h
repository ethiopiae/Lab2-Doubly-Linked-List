/*// -----------------------------------------------------------------------------------
Justin Dang
Student ID : 1148267

Ethan Fox
Student ID: 862389924
// -------------------------------------------------------------------------------------
FUNCTION OF THE FOLLOWING CODE >>

// -------------------------------------------------------------------------------------
WORKS CITED >>
 - Professor's Lecture and Zybook assignments
*/// -----------------------------------------------------------------------------------

#pragma once
#ifndef IntList_H
#define IntList_H
#include <iostream>
using namespace std;

struct IntNode {
    int data;
    IntNode* prev;
    IntNode* next;
    IntNode(int data) : data(data), prev(0), next(0) {}
};

class IntList {

public:
    IntList() { 
        dummyHead = new IntNode(0);
        dummyTail = new IntNode(0);
    }
    ~IntList() {
        delete dummyHead;
        delete dummyTail;
    }
    void push_front(int value);
    void pop_front();
    void push_back();
    bool empty() const;
    friend ostream& operator<<(ostream& out, const IntList& rhs);
    void printReverse() const;

private:
    IntNode* dummyHead;
    IntNode* dummyTail;
};
#endif