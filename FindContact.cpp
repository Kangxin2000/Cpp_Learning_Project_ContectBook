//
//  FindContact.cpp
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

int * FindContact(string findname, struct AddressBook addressbook){
    int arr_index[1000];
    for (int ii = 0; ii < 1000; ii++){
        arr_index[ii] = 0;
    }
    int count = 0;
    int index = 0;
    if (addressbook.booksize == 0){
        cout << "通讯录为空" << endl;
    }
    else {
        for (int ii = 0; ii < addressbook.booksize; ii++){
            if (findname == addressbook.ContactArr[ii].name){
                arr_index[count] = ii+1;
                count++;
            }
            else {
                continue;
            }
        }
        if (count == 0) {
            cout << "查无此人" << endl;
        }
    }
    for (int ii = 0; ii < 1000; ii++){
        index = arr_index[ii];
        if (index == 0) {
            break;
        }
        else {
            cout << ii+1 << ". ";
            cout << "姓名： " << addressbook.ContactArr[index-1].name << " 性别：" << (addressbook.ContactArr[index-1].sex == 1?"男":"女") << " 年龄：" << addressbook.ContactArr[index-1].age << " 电话：" << addressbook.ContactArr[index-1].number << " 地址：" << addressbook.ContactArr[index-1].address << endl;
        }
    }
    return arr_index;
}
