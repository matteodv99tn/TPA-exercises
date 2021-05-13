#ifndef _CAPPED_STACK_H_

    #define _CAPPED_STACK_H_

    #include <iostream>
    #include "BasicStack.h"

    using std::string;

    class CappedStack : public BasicStack{

        protected:
            int cap;

        public:

            CappedStack(const int cap) : cap(cap) {};
            
            virtual string as_string() const;
            virtual void push(const char c);
            virtual void set_cap(const int cap);
            virtual int get_cap() const { return this->cap; };


    };

#endif