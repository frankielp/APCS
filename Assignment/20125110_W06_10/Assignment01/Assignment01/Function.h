//
//  Function.hpp
//  Assignment01
//
//  Created by Le Pham Nhat Quynh on 11/16/21.
//

#ifndef Function_hpp
#define Function_hpp

#include <iostream>
#include <vector>
using namespace std;
class CItem{
private:
    string name;
    int size;
protected:
    bool hidden=false;
public:
    CItem();
    CItem(string Name,int Size);
    CItem(string Name);
    bool getHidden();
    virtual void output();
    virtual void print(bool hidden)=0;
    virtual CItem* findByName(string name)=0;
    string getName();
    virtual void setHidden(bool Hidden, bool Children){};
    void setHidden(bool Hidden);
};
class CFile:public CItem {
protected:
    bool readOnly=false;
public:
    CItem* findByName(string name){return NULL;};
    void print(bool hidden){};
    void setHidden(bool Hidden, bool Children);
    CFile();
    CFile(string Name,int Size);
};
class CFolder: public CItem {
private:
    vector<CItem*>s;
public:
    CFolder();
    CFolder(string Name);
    void add(CItem* item);
    void print(bool hidden);
    CFolder* removeByName(string name); 
    CItem* findByName(string name);
    void setHidden(bool Hidden, bool Children);
};

#endif /* Function_hpp */
