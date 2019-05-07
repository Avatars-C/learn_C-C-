#include <iostream>
#include <list>
#include <ostream>
using namespace std;

template <typename Container>
void removeEveryOtherItem(Container & lst)
{
    typename Container::iterator itr = lst.begin();
    while( itr != lst.end() ){
        itr = lst.erase( itr );
        if ( itr != lst.end()) {
            ++itr;
        }
    }
};

template <typename  Container, typename Object>
void change(Container & c, const Object & newValue)
{
    typename Container::iterator itr = c.begin();
    while(itr != c.end()){
        *itr++ = newValue;
    }
}
 
 template <typename Container>
 void print(const list<int> & lst, ostream & out =cout)
 {
     typename Container::iterator itr = lst.begin();
     while( itr != lst.end()){
         out << *itr <<endl;
         *itr = 0;
         itr++;
     }
 }

int main(void)
{
    
}