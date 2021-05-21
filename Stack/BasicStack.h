#ifndef _BASIC_STACK_H_

    #define _BASIC_STACK_H_

    using std::string;

    class BasicStack : public Stack{

        protected:
            string elements;

        public:

            BasicStack();

            virtual int size() const;
            virtual string as_string() const;
            virtual bool is_empty() const;
            virtual void push(const char c);
            virtual char peek() const;
            virtual char pop();
            virtual string peekn(const int n) const;
            virtual string popn(const int n);

    };

#endif