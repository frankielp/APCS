//
//  Function.cpp
//  Assignment08
//
//  Created by Le Pham Nhat Quynh on 10/25/21.
//

#include "Function.h"
MyIntArray::MyIntArray()
{
    a=nullptr;
    n=0;
}
MyIntArray::MyIntArray(int*A,int N)
{
    a=A;
    n=N;
}
MyIntArray::MyIntArray(string s)
{
    n=s.size();
    a=new int[n];
    for (int i=0;i<s.size();i++)
    a[i]=s[i]-'0';
}
MyIntArray::MyIntArray(int N)
{
    n=N;
    a=new int[N];
    for (int i=0;i<N;i++)
    a[i]=0;
}
MyIntArray::MyIntArray(const MyIntArray& other)
{
    n=other.n;
    a=new int[n];
    for (int i=0;i<n;i++)
    a[i]=other.a[i];
}
MyIntArray::~MyIntArray()
{
    if (!a) return;
    delete [] a;
    a=nullptr;
    n=0;
    cout<<"deleted"<<endl;
}
void MyIntArray::output()
{
    cout<<"n= "<<n<<endl;
    cout<<"[";
    if (n)
    cout<<a[0];
    for (int i=1;i<n;i++)
    cout<<","<<a[i];
    cout<<"]"<<endl;
}
