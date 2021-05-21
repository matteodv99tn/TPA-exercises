


#include "stack.h"
#include"BasicStack.h"

#include <stdexcept>
#include <iostream>
#include <sstream>

using namespace std;

template <typename T>

BasicStack<T>::BasicStack(){
    this->elements = new vector<T>;
}

template <typename T>
int BasicStack<T>::size() const{

    return this->elements.size();

}

template <typename T>
string BasicStack<T>::as_string() const{

    stringstream ss;

    ss << string("BasicStack: ");
    for(int i = 0; i < this->size(); i++) ss << this->elements[i] << " ";

    return ss.str();

}

template <typename T>
bool BasicStack<T>::is_empty() const{

    return this->size() == 0;

}

template <typename T>
void BasicStack<T>::push(const T c){

    this->elements.push_back(c);

}

template <typename T>
T BasicStack<T>::peek() const{

    if( this->size() == 0 ) throw runtime_error("Cannot peek an empty stack!");

    return T(this->elements.back() );
}

template <typename T>
T BasicStack<T>::pop(){

    if( this->size() == 0) throw runtime_error("Popping an empty stack!");

    T tbr = this->elements.back();
    this->elements.pop_back();
    return tbr;

}

template <typename T>
vector<T> BasicStack<T>::peekn(const int n) const{

    if( this->size() < n ) throw invalid_argument("Cannot peek " + to_string(n) +  " char from a " + to_string(this->size()) + " stack dimension!");

    return this->elements.substr( this->size() - n, n);
} 

template <typename T>
vector<T> BasicStack<T>::popn(const int n){

    if( this->size() < n ) throw runtime_error("Cannot pop " + to_string(n) +  " char from a " + to_string(this->size()) + " stack dimension!");
    string tbr = this->elements.substr( this->size() - 1 - n, n);
    
    vector<T> tbr = peekn(n);

    for(int i = 0; i < n; i++) this->elements.pop_back();

    return tbr;
} 

