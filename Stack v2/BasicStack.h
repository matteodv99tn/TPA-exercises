#ifndef _BASIC_STACK_H_

    #define _BASIC_STACK_H_

<<<<<<< HEAD
    #include <iostream>
    #include <vector>
    #include "stack.h"

    using std::vector;
=======
    #include "stack.h"

>>>>>>> 0a7a747b2e2828e3c7c8534510e3434b7a9620d7
    using std::string;

    template <typename T>
    class BasicStack : public Stack{

        protected:
<<<<<<< HEAD
=======

>>>>>>> 0a7a747b2e2828e3c7c8534510e3434b7a9620d7
            vector<T> elements;

        public:

            BasicStack();

            virtual int size() const;
<<<<<<< HEAD
            virtual string as_string() const;
            virtual bool is_empty() const;
            virtual void push(const T c);
            virtual T peek() const;
            virtual T pop();
            virtual vector<T> peekn(const int n) const;
=======

            virtual string as_string() const;
            
            virtual bool is_empty() const;
            
            virtual void push(const T c);
            
            virtual T peek() const;
            
            virtual T pop();
            
            virtual vector<T> peekn(const int n) const;
            
>>>>>>> 0a7a747b2e2828e3c7c8534510e3434b7a9620d7
            virtual vector<T> popn(const int n);

    };

#endif