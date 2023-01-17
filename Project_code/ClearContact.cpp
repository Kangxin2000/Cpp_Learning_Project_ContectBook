//
//  ClearContact.cpp
//  Cpp_Project1
//
//  Created by 王 on 2023/01/16.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "AddContact.hpp"
#include <stdlib.h>
using namespace std;

void ClearContact(struct AddressBook *p){
    p->booksize = 0;
    cout << "通讯录已清空" << endl;
}
