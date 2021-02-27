//
// Created by Tuptc on 26/02/2021.
//

#ifndef TALLER_INDIVIDUAL_YESIKA_ROJAS_NODE_H
#define TALLER_INDIVIDUAL_YESIKA_ROJAS_NODE_H
#include <cstdlib>

template <class T> class LinkedDouble;

template <class T>
class Node {

    friend class LinkedDouble<T>;

public:
    Node() {
        next = NULL;
        previous = NULL;
    }

    Node(T info) : info(info) {
        next = NULL;
        previous = NULL;
    }

    virtual ~Node() {

    }

private:
    T info;
    Node<T>* next;
    Node<T>* previous;

};


#endif //TALLER_INDIVIDUAL_YESIKA_ROJAS_NODE_H
