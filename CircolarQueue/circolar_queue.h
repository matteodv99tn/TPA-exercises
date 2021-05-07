#ifndef _CIRCOLAR_QUEUE_H_

    #define _CIRCOLAR_QUEUE_H_

namespace matteodv{

    class CircolarQueue{

        private:

            unsigned int capacity;
            unsigned int size;
            unsigned int head;
            unsigned int tail;
            char * values;

        public:

            CircolarQueue(unsigned int cap); 

            unsigned int get_size();
            unsigned int get_capacity();
            bool isEmpty();
            char top();
    };
}


#endif