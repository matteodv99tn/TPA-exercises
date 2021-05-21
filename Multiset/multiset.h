#ifndef _MULTISET_H_

    #define _MULTISET_H_

    #include <iostream>
    #include <unordered_map>

    using std::unordered_map;

    template <typename T>
    class MultiSet{

        private:
            unordered_map<T, int> map;

        public:

            void add(const T el);
            int get(const T el) const;
            void removen(const T el, const int n);
            int size();


    };


#endif