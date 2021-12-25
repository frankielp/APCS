//
//  IntArray.cpp
//  Assignment03
//
//  Created by Le Pham Nhat Quynh on 10/31/21.
//

#include "IntArray.h"
IntArray::IntArray()
{
    a=nullptr;
    n=0;
}
IntArray::IntArray(int*A,int N)
{
    n=N;
    a=new int[N];
    for (int i=0;i<N;i++)
    a[i]=A[i];
}

IntArray::IntArray(int N)
{
    n=N;
    a=new int[N];
    for (int i=0;i<N;i++)
    a[i]=0;
}
IntArray::IntArray(const IntArray& other)
{
    n=other.n;
    a=new int[n];
    for (int i=0;i<n;i++)
    a[i]=other.a[i];
}
IntArray::~IntArray()
{
    if (!a) return;
    delete [] a;
    a=nullptr;
    n=0;
}
void IntArray::output()
{
    cout<<"n= "<<n<<endl;
    cout<<"[";
    if (n)
    cout<<a[0];
    for (int i=1;i<n;i++)
    cout<<","<<a[i];
    cout<<"]"<<endl;
}
IntArray& IntArray::operator=(IntArray other){
    swap(a,other.a);
    n=other.n;
    return *this;
}
istream& operator>>(istream &in,IntArray& x){
    cout<<"Type n ";
    int n,*a;
    if (in >> n)
    {
        if (n)
        {
            a=new int[n];
            for (int i=0;i<n;i++)
            {
                cout<<i+1<<" ";
                in>>a[i];
            }
            x = IntArray(a,n);
            delete [] a;
            a=nullptr;
        }
        else
            in.setstate(ios::failbit);
    }
    return in;
}
ostream& operator<<(ostream &out,IntArray x){
    out<<"[";
    if (x.n)
    out<<x.a[0];
    for (int i=1;i<x.n;i++)
    out<<","<<x.a[i];
    out<<"]";
    return out;
}
int& IntArray::operator [] (int i){
    return a[i];
}
IntArray::operator int() const{
    int ans=0;
    for (int i=0;i<n;i++)
        ans+=a[i];
    return ans;
}
