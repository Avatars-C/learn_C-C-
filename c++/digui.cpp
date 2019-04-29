#include <iostream>
using namespace std;
int f ( int x )
{
    if(x==0) return 0;
    else if(x<0)  {
	cout<<"Error ,The input value must greater than zero!"<<endl;
	return 0;
	}
    else return 2*f(x-1)+x*x;
}
void printOut(int n)
{
   if(n>=10) cout<<(n/10);
   cout<<(n%10)<<endl;
}
int main(void)
{
   cout<<"f(1)="<<f(1)<<endl;
   cout<<"f(2)="<<f(2)<<endl;
   cout<<"f(3)="<<f(3)<<endl;
   cout<<"f(4)="<<f(4)<<endl;
   cout<<"f(-2)="<<f(-2)<<endl;
   printOut(123456);
}
