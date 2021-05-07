#include<iostream>
#include "circolar_queue.h"

using namespace std;

matteodv::CircolarQueue::CircolarQueue(unsigned int cap){

    if( cap <= 0) {
        throw invalid_argument(string("Negative Capacity: " + to_string(cap)));
    }

    this->capacity = cap;
    this->size = 0;
    this->head = 0;
    this->tail = 0;
    this->values = new char[cap];

}

#pragma region // Funzioni di get e set

unsigned int matteodv::CircolarQueue::get_size(){

    return this->size;
    
}

unsigned int matteodv::CircolarQueue::get_capacity(){

    return this->capacity;

}

#pragma endregion

bool matteodv::CircolarQueue::isEmpty(){

    return this->size == 0;

}

char matteodv::CircolarQueue::top(){

    if(this->isEmpty()) {
        // mandare errore
        return;
    }

    return this->values[this->head];
}