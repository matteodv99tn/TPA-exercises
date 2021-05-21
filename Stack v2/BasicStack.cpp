

#include "stack.h"
#include"BasicStack.h"

#include <stdexcept>
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

