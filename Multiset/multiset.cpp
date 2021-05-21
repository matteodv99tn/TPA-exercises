#include "multiset.h"
#include <string>
#include <sstream>

using std::string;
using std::cout;
using std::endl;
 
template <typename T>
void MultiSet<T>::add(const T el){

    if(this->map.count(el) == 1 ) this->map[el] ++;
    else this->map[el] = 1;

}

template <typename T>
int MultiSet<T>::get(const T el) const{

    if(this->map.count(el) == 1) return this->map.at(el);
    else return 0;

}

template <typename T>
void MultiSet<T>::removen(const T el, const int n){

    if(n < 0) throw std::invalid_argument("Cannot reduce by a negative molteplicity!");
    
    if(this->map.count(el) ==  0 )  return;

    if(this->map.at(el) < n) throw std::out_of_range("Cannot reduce by a molteplicity greather then dimension!");

    this->map[el] -= n;
    if(this->get(el) <= 0) this->map.erase(el);    

}

template <typename T>
int MultiSet<T>::size(){

    return this->map.size();
     
}
template <typename T>
string MultiSet<T>::as_string(){

    std::stringstream ss;

    ss << "{" << endl;

    for(std::pair<T,int> element : this->map) {
        ss << "\t{ " << element.first << " , " << element.second << " }" << endl;
    }

    ss << "}";


    return ss.str();
}
 
int main(){
   cout << endl;
   cout << " ----- MULTISET" << endl;
   MultiSet<char> m = MultiSet<char>();
   m.add('a');
   m.add('a');
   m.add('b');   
   cout << "a: " << m.get('a') << endl;  // a: 2
   cout << "b: " << m.get('b') << endl;  // b: 1
   cout << "c: " << m.get('c') << endl;  // c: 0
   cout << "size: " << m.size() << endl; // 3
   cout << m.as_string() << endl;    
 
   m.removen('a', 2);
   cout << m.as_string() << endl;         
    // b: 1     // note no a:0 should be present
 
   m.removen('a',0);
   cout << m.as_string() << endl;        
   // b: 1     
   m.removen('b', 1);
   cout << m.as_string() << endl;     // empty
 
   m.removen('c',0);  // no problem
   cout << m.as_string() << endl;     // empty
 
   m.add('c');
   m.add('c');
   m.add('c');
   cout << m.as_string() << endl;    
   // c: 3
   try {
       m.removen('c',5);  // too many
   } catch (std::out_of_range& ex) {
      cout << "something bad happened!" << ex.what() << endl;
      cout << "I caught the exception, will continue" << endl;
   };
   cout << m.as_string() << endl;    
   // c: 2   
   return 0;
}
