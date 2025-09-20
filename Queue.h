//
// Created by Tyler Meadows on 9/20/25.
//

#ifndef PROJECT2_QUEUE_H
#define PROJECT2_QUEUE_H


#include "Node.h"
#include <iostream>
using std::cout, std::endl;

/*
 * Queue class
 * All Nodes will point to the Node below
 */
template<typename Object>
class Queue {
private:
    Node<Object>* front;
    Node<Object>* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    ~Queue() {
        while (front != nullptr) {
            dequeue();
        }
        cout << "clear." << endl;
    }

    void enqueue(Object item) {
        Node<Object>* newNodePtr = new Node<Object>(item);
        newNodePtr->setNext(nullptr);   // new node has nothing after it

        if (rear == nullptr) {          // queue is empty
            front = rear = newNodePtr;  // first node is both front and rear
        } else {
            rear->setNext(newNodePtr);  // link old rear to new node
            rear = newNodePtr;          // update rear
        }
    }



    Object dequeue() {
        if (front == nullptr) {
            return Object();
        }

        Object item = front->getItem();
        Node<Object>* oldFront = front;


        front = front->getNext();
        if (front == nullptr) {
            rear = nullptr;
        }

        delete oldFront;
        return item;
    }

    bool search(Object item) const {
        Node<Object>* oldFront = front;
        while (oldFront != nullptr) {
            if (oldFront->getItem() == item) {
                return true;
            }
            oldFront = oldFront->getNext();
        }
        return false;
    }


    void print() const {
        cout << "Front of Queue" << endl;
        Node<Object>* curr = front;
        while (curr != nullptr) {
            cout << curr->getItem() << endl;
            curr = curr->getNext();
        }
        cout << "End of Queue" << endl;
    }
};

#endif //PROJECT2_QUEUE_H