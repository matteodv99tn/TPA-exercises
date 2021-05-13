


#include "stack.h"
#include"BasicStack.h"

#include <stdexcept>
#include <iostream>

using namespace std;
 
BasicStack::BasicStack(){
    this->elements = "";
}

int BasicStack::size() const{

    return this->elements.size();

}

string BasicStack::as_string() const{

    string str = "Basic Stack: elements = " + this->elements;
    return str;

}

bool BasicStack::is_empty() const{

    return this->size() == 0;

}

void BasicStack::push(const char c){

    this->elements += c;

}

char BasicStack::peek() const{

    if( this->size() == 0 ) throw runtime_error("Cannot peek an empty stack!");

    return char(this->elements.back() );
}

char BasicStack::pop(){

    if( this->size() == 0) throw runtime_error("Popping an empty stack!");

    char tbr = this->elements.back();
    this->elements.pop_back();
    return tbr;

}

string BasicStack::peekn(const int n) const{

    if( this->size() < n ) throw invalid_argument("Cannot peek " + to_string(n) +  " char from a " + to_string(this->size()) + " stack dimension!");

    return this->elements.substr( this->size() - n, n);
} 

string BasicStack::popn(const int n){

    if( this->size() < n ) throw runtime_error("Cannot pop " + to_string(n) +  " char from a " + to_string(this->size()) + " stack dimension!");
    string tbr = this->elements.substr( this->size() - 1 - n, n);

    for(int i = 0; i < n; i++) this->elements.pop_back();

    return tbr;
} 

