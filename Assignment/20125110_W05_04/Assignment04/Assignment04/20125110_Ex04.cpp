//
//  main.cpp
//  Assignment04
//
//  Created by Le Pham Nhat Quynh on 11/13/21.
//

#include "Function.h"

int main() {
    Prince p;
    Castle c;
    c.input();
    p.input();
    if (c.savePrincess(p))
    {
        cout<<"Princess saved\n";
        p.output();
    }
    else{
        cout<<"Prince died. LMAO"<<endl;
    }
    return 0;
}
