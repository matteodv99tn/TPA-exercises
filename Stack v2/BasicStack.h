#ifndef _BASIC_STACK_H_

    #define _BASIC_STACK_H_

    #include <iostream>
    #include <vector>
    #include "stack.h"

    using std::vector;
    using std::string;

    template <typename T>
    class BasicStack : public Stack{

        protected:
            vector<T> elements;

        public:

            BasicStack();

            virtual int size() const;
            virtual string as_string() const;
            virtual bool is_empty() const;
            virtual void push(const T c);
            virtual T peek() const;
            virtual T pop();
            virtual vector<T> peekn(const int n) const;
            virtual vector<T> popn(const int n);

    };

#endif