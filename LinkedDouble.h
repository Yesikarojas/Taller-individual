//
// Created by Tuptc on 26/02/2021.
//

#ifndef TALLER_INDIVIDUAL_YESIKA_ROJAS_LINKEDDOUBLE_H
#define TALLER_INDIVIDUAL_YESIKA_ROJAS_LINKEDDOUBLE_H

#include "Node.h"
#include <vector>

template <class T>
class LinkedDouble {
public:
    LinkedDouble();
    bool isEmpty();
    void addNodeFirst(T);
    void addNodeLast(T);
    std::vector<T> getList(bool);

    virtual ~LinkedDouble();

private:
    Node<T>* head;
    Node<T>* last;
};
