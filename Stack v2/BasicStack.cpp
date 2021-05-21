

<<<<<<< HEAD
=======

>>>>>>> 0a7a747b2e2828e3c7c8534510e3434b7a9620d7
#include "stack.h"
#include"BasicStack.h"

#include <stdexcept>
<<<<<<< HEAD
#include <vector>
#include <sstream>
#include <iostream>

using std::cout;
using std::endl;


int main () {
  
   cout << endl;
   cout << "-----  BASIC STACK" << endl;   
 
   BasicStack<char> bs = BasicStack<char>();
 
   Stack <char> * ps1 = &bs;
   cout << ps1->as_string() << endl;  // BasicStack: elements=
   ps1->push('a');
   cout << ps1->as_string() << endl;  // BasicStack: elements=a
   cout << ps1->peek() << endl;       // 'a'
   ps1->push('b');
   cout << ps1->peek() << endl;       // 'b'
   cout << ps1->as_string() << endl;  // BasicStack: elements=ab
   cout << ps1->peek() << endl;       // 'b'
   ps1->push('c');                   
   cout << ps1->peek() << endl;       // 'c'
   cout << ps1->as_string() << endl;  // BasicStack: elements=abc
   cout << ps1->pop() << endl;        // 'c'
   cout << ps1->pop() << endl;        // 'b'
   cout << ps1->as_string() << endl;  // BasicStack: elements=a
   cout << ps1->pop() << endl;        // 'a'
  
   try {
       ps1->pop(); //  can't pop empty stack
   } catch (std::runtime_error& ex) {
       cout << "something bad happened!" << ex.what() << endl;
       cout << "I caught the exception, will continue" << endl;
   };
 
   try {
       ps1->peek(); // can't peek empty stack
   } catch (std::runtime_error& ex) {
       cout << "something bad happened!" << ex.what() << endl;
       cout << "I caught the exception, will continue" << endl;
   };
}

=======
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

>>>>>>> 0a7a747b2e2828e3c7c8534510e3434b7a9620d7
