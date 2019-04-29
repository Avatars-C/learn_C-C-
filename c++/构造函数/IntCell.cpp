// #include <iostream>
// using namespace std;
//原版
// class intCell
// {
//     public:
// 	intCell();
// 	intCell(int initvalue);
// 	int read();
// 	int write(int x);
//     private:
// 	int storedValue;
// };

//改进版
// class IntCell
// {
// 	public:
// 		explicit IntCell(int initValue=0)
// 		:storeadValue(initValue) {}
// 		int read() const 
// 		{return storeadValue;}
// 		void write(int x)
// 		{storeadValue=x;}
// 	private:
// 		int storeadValue;
// };

// int main(void)
// {
// 	IntCell intCell(5);
// 	cout<<intCell.read()<<endl;
// 	intCell.write(37);

// }


//封装在intCell.h里面
#include "IntCell.h"



// IntCell::IntCell(/* args */)
// {
// }

IntCell::~IntCell()
{
}
IntCell::IntCell(int initValue):storedValue(initValue)
{
}

int IntCell::read() const
{
	return storedValue;
}

void IntCell::write(int x)
{
	storedValue = x;
}
