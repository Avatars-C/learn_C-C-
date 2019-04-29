#include <iostream>
#include <vector>

using namespace std;

//模板类
template <typename Object>
class MemoryCell{
    public:
        explicit MemoryCell(const Object & initValue = Object())
            : storedValue(initValue) {}
        const Object & read() const
            {return storedValue;}
        void write(const Object & x )
        { storedValue = x ;}
    private:
       Object storedValue;
};

int main(void)
{   
    //vector
    vector <int>  squares( 100 );
    
    for( int i = 0; i < squares.size(); i++ )
        squares[i] = i*i;
    
    for( int i = 0; i < squares.size(); i++ )
    {
        cout<< i <<" "<<squares[i]<<endl;  /* code */
    }
    
    //模板类的调用
    MemoryCell<int> m1;
    MemoryCell<string>  m2("hello");

    m1.write(37);
    m2.write(m2.read()+"world");
    cout << m1.read()<<endl<<m2.read()<<endl;

}