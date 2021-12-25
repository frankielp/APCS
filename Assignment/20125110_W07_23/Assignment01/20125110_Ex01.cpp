#include <iostream>
using namespace std;
template<class T>
class MyVector {
private:
    T *arr;
    int size;
public:
    // empty array
    MyVector();
    // n zeros
    MyVector(int n);
    MyVector(T *a, int n);
    MyVector(const MyVector &v);
    ~MyVector();
    int getSize();
    T getItem(int index);
    void setItem(T value, int index);
    void add(T value);
    void addRange(T *a, int n);
    void clear();
   bool contains(T value);
   void toArray(T *&a, int &n);
   bool equals(const MyVector &v);
   int indexOf(T value);
   int lastIndexOf(T value);
   void insert(T value, int index);
   void remove(T value);
   void removeAt(int index);
   void reverse();
   string toString();
   void sortAsc();
   void sortDesc();
    void print();
};
template<class T>
MyVector<T>::MyVector(){
    arr= nullptr;
    size=0;
}
// n zeros
template<class T>
MyVector<T>::MyVector(int n){
    arr=new int [n];
    for (int i=0;i<n;i++)
        arr[i]=0;
    size=n;
}
template<class T>
MyVector<T>::MyVector(T *a, int n){
    arr=new T [n];
    size=n;
    for (int i=0;i<n;i++)
        arr[i]=a[i];
}
template<class T>
MyVector<T>::MyVector(const MyVector &v){
    arr=new T [v.size];
    for (int i=0;i<v.size;i++)
        arr[i]=v.arr[i];
    size=v.size;
}
template<class T>
int MyVector<T>::getSize(){
    return size;
}
template<class T>
T MyVector<T>::getItem(int index){
    return arr[index];
}
template<class T>
void MyVector<T>::setItem(T value, int index){
    arr[index]=value;
}
template<class T>
void MyVector<T>::add(T value){
    T*tmp=arr;
    size+=1;
    arr=new T [size];
    for (int i=0;i<size-1;i++)
        arr[i]=tmp[i];
    arr[size-1]=value;
    delete[] tmp;
    tmp=nullptr;
}
template<class T>
void MyVector<T>::addRange(T *a, int n){
    T*tmp=arr;
    int m=size;
    size+=n;
    arr=new T [size];
    for (int i=0;i<size-n;i++)
        arr[i]=tmp[i];
    for (int i=size-n;i<size;i++)
        arr[i]=a[i-m];
    delete[] tmp;
    tmp=nullptr;
}
template<class T>
void MyVector<T>::clear(){
    if (!arr) return;
    delete[] arr;
    size=0;
    arr=nullptr;
}
template<class T>
void MyVector<T>::print(){
    for (int i=0;i<size;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
}
template<class T>
bool MyVector<T>::contains(T value){
    for (int i=0;i<size;i++)
        if(arr[i]==value) return true;
    return false;
}
template<class T>
void MyVector<T>::toArray(T *&a, int &n){
    n=size;
    a=new T [n];
    for (int i=0;i<size;i++)
        a[i]=arr[i];
}
template<class T>
bool MyVector<T>::equals(const MyVector &v){
    if (v.size!=size) return false;
    for (int i=0;i<size;i++)
        if (arr[i]!=v.arr[i]) return false;
    return true;
}
template<class T>
int MyVector<T>::indexOf(T value){
    for (int i=0;i<size;i++)
        if(arr[i]==value) return i;
    return NULL;
}
template<class T>
int MyVector<T>::lastIndexOf(T value){
    for (int i=size-1;i>=0;i--)
        if(arr[i]==value) return i;
    return NULL;
}
template<class T>
void MyVector<T>::insert(T value, int index){
    T* tmp=new T[size+1];
    size+=1;
    for (int i=0;i<index;i++)
    tmp[i]=arr[i];
    tmp[index]=value;
    for (int i=index+1;i<size;i++)
    tmp[i]=arr[i-1];
    delete[] arr;
    arr=tmp;
}
template<class T>
void MyVector<T>::remove(T value){
    int num=0;
    for (int i=0;i<size;i++)
    if (arr[i]==value) num++;
    T* tmp=new T[size-num];
    int j=0;
    for (int i=0;i<size;i++)
    if (arr[i]!=value) 
        tmp[j++]=arr[i];
    size-=num;
    delete[] arr;
    arr=tmp;
}
template<class T>
void MyVector<T>::removeAt(int index){
    T* tmp=new T[size-1];
    int j=0;
    for (int i=0;i<size;i++)
    if (i != index) 
        tmp[j++]=arr[i];
    size-=1;
    delete[] arr;
    arr=tmp;
}
template<class T>
void MyVector<T>::reverse(){
    T* tmp=new T[size];
    int j=0;
    for (int i=size-1;i>=0;i--)
        tmp[j++]=arr[i];
    delete[] arr;
    arr=tmp;
}
template<class T>
string MyVector<T>::toString(){
    string s;
    for (int i=0;i<size;i++)
    s+=to_string(arr[i])+" ";
    s.erase(s.begin()+s.size()-1,s.begin()+s.size()-1);
    return s;
}
template<class T>
void MyVector<T>::sortAsc(){
    for (int i=0;i<size-1;i++)
    for (int j=i+1;j<size;j++)
        if (arr[i]>arr[j])
            swap(arr[i],arr[j]);
}
template<class T>
void MyVector<T>::sortDesc(){
    for (int i=0;i<size-1;i++)
    for (int j=i+1;j<size;j++)
        if (arr[i]<arr[j])
            swap(arr[i],arr[j]);
}
template<class T>
MyVector<T>::~MyVector(){
    if (!arr) return;
    delete[] arr;
    arr=nullptr;
    size=0;
    cout<<"Terminated\n";
}
int main()
{
    cout<<"-----------\n";
    cout<<"a= ";
    MyVector<int> a(5);
    a.print();
    cout<<"-----------\n";
    cout<<"b= ";
    int *arr=new int [5]; 
    for (int i=0;i<5;i++)
    arr[i]=i;
    MyVector<int> b (arr, 5);
    b.print();
    cout<<"-----------\n";
    cout<<"c= ";
    MyVector<int> c (b);
    c.print();
    cout<<"-----------\n";
    cout<<"Size of b: "<<b.getSize()<<endl;
    cout<<"-----------\n";
    cout<<"a[1]= "<<a.getItem(1)<<endl;
    cout<<"-----------\n";
    cout<<"Set b[2] to 3\n";
    b.setItem(3, 2);
    b.print();
    cout<<"-----------\n";
    cout<<"Add 2 to c\n";
    c.add(2);
    c.print();
    cout<<"-----------\n";
    cout<<"Add arr to a\n";
    a.addRange(arr, 5);
    a.print();
    cout<<"-----------\n";
    cout<<"Clear a\n";
    a.clear();
    cout<<"a= ";
    a.print();
    cout<<"-----------\n";
    cout<<"b contains 3: ";
    if (b.contains(3)) cout<<"Yes\n";
    else cout<<"No\n";
   cout<<"-----------\n";
   int *tmp;
   int m;
   cout<<"c to array \n";
   c.toArray(tmp, m);
   for (int i=0;i<m;i++)
   cout<<tmp[i]<<" ";
   cout<<endl;
   cout<<"-----------\n";
   cout<<"b equals to c: ";
   if (b.equals(c))
    cout<<"Yes\n";
    else cout<<"No\n";
   cout<<"-----------\n";
   cout<<"Index of 3 in b: "<<b.indexOf(3)<<endl;
   cout<<"-----------\n";
   cout<<"Last index of 3 in b: "<<b.lastIndexOf(3)<<endl;
   cout<<"-----------\n";
   cout<<"Insert 2 to b[2]\n";
   b.insert(2, 2);
   b.print();
   cout<<"-----------\n";
   cout<<"Remove 3 from b\n";
   b.remove(3);
   b.print();
   cout<<"-----------\n";
   cout<<"Remove c[1]\n";
   c.removeAt(1);
   c.print();
   cout<<"-----------\n";
   cout<<"Reverse b\n";
   b.reverse();
   b.print();
   cout<<"-----------\n";
   string s=c.toString();
   cout<<"c to string: "<<s<<endl;
   cout<<"-----------\n";
   cout<<"Ascending sort b\n";
   b.sortAsc();
   b.print();
   cout<<"-----------\n";
   cout<<"Descending sort b\n";
   b.sortDesc();
   b.print();
   cout<<"-----------\n";
}
