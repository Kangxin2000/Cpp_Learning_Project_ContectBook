//
//  DeleteContact.cpp
//  Cpp_Project1
//
//  Created by 王 on 2023/01/08.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "AddContact.hpp"
#include <stdlib.h>
using namespace std;

void DeleteContact(struct AddressBook * p, int index){
    for (int ii = index+1; ii < p->booksize; ii++){
        p->ContactArr[ii-1].name = p->ContactArr[ii].name;
        p->ContactArr[ii-1].sex = p->ContactArr[ii].sex;
        p->ContactArr[ii-1].address = p->ContactArr[ii].address;
        p->ContactArr[ii-1].number = p->ContactArr[ii].number;
        p->ContactArr[ii-1].age = p->ContactArr[ii].age;
    }
    p->booksize = p->booksize-1;
}
