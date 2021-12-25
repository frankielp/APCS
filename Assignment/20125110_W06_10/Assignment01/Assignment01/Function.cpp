//
//  Function.cpp
//  Assignment01
//
//  Created by Le Pham Nhat Quynh on 11/16/21.
//

#include "Function.h"
CFolder::CFolder():CItem(){
}
CFolder::CFolder(string Name):CItem(Name){
   
}
CFile::CFile():CItem(){
}
CItem::CItem(){
    name="Untitled";
    size=0;
}
CItem::CItem(string Name){
    name=Name;
    size=0;
}
CItem::CItem(string Name,int Size){
    name=Name;
    size=Size;
}
CFile::CFile(string Name,int Size):CItem(Name,Size){
    
}
void CFolder::add(CItem* item){
    s.push_back(item);
}
void CFolder::print(bool hidden){
    for (int i=0;i<s.size();i++)
    {
        if(hidden||!s[i]->getHidden()) s[i]->output();
    }
}
bool CItem::getHidden(){
    return hidden;
}
void CItem::output(){
    cout<<"-----\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Size: "<<size<<endl;
}
CFolder* CFolder::removeByName(string name){
    for (int i=0;i<s.size();i++)
    {
        if (s[i]->getName()==name) s.erase(s.begin()+i);
    }
    return this;
}
string CItem::getName(){
    return name;
}
CItem* CFolder::findByName(string name){
    for (int i=0;i<s.size();i++)
    {
        if (s[i]->getName()==name) return s[i];
    }
    for (int i=0;i<s.size();i++)
    {
            CItem* tmp=s[i]->findByName(name);
            if (tmp!=NULL) return tmp;
    }
    return NULL;
}

void CItem::setHidden(bool Hidden)
{
    if (Hidden)
    {
        hidden=true;
    }
}
void CFolder::setHidden(bool Hidden, bool Children){
    CItem::setHidden(Hidden);
    if (Children)
    {
        for (int i=0;i<s.size();i++)
        {
            s[i]->setHidden(Hidden, Children);
        }
    }
}
void CFile::setHidden(bool Hidden, bool Children){
    CItem::setHidden(Hidden);
}
