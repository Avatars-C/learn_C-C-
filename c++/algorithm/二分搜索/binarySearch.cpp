#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

#define NOT_FOUND -1

using namespace std;

//二分搜索
template <typename Compareable>
int binarySearch (const vector<Compareable> & a,const Compareable & x)
{
    //return NOT_FOUND;

    int low=0,high = a.size() - 1;

    while(low<=high){
        int mid=( low + high )/2;
        if ( a[mid] < x ) 
            low = mid + 1;
        else if (a[mid] > x)
            high = mid - 1;
        else
            return mid+1;          
    }
    
}

//欧几里得算法,两个整数的最大公约数
template <typename T>
T gcd( T m , T n)
{
    while( n != 0){
        T temp= m%n;
        m = n;
        n= temp;
    }
    return m;  
}

int main ( void )
{
   int index=0; 
   vector <int> arrary(100);
   
   for(int i = 0; i < arrary.size(); i++)
   {
       arrary[i]= rand()%100;
       cout<<"i "<<arrary[i]<<endl;
   }

   index = binarySearch(arrary,86);
   cout<<"index = "<<index<<endl;
   
   //调用gcd
   long a=1989;
   long b =1590;
   int test = gcd(a,b);
   cout<<"test = "<<test<<endl;
   
   return 0;
}