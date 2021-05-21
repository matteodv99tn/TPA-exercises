#include "multiset.h"

int main(){

    MultiSet<char> set;

    set.add('c');

    return 0;
}

template <typename T>
void MultiSet<T>::add(const T el){

    try{

        map.at( el );
        
        map[el]++;

    } catch (std::out_of_range ex){

        map[el] = 1;

    }

}

template <typename T>
int MultiSet<T>::get(const T el) const{

    try{

        return this->map( el );

    } catch(std::out_of_range ex){
        
        return 0;

    }

}

template <typename T>
void MultiSet<T>::removen(const T el, const int n){

    if(this->get(el) > 0 ) this->map[el] -= n;

    if(this->get(el) < 0) this->map[el] = 0;    

}

template <typename T>
int MultiSet<T>::size(){

     return 1;
}




