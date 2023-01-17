//
//  ChooseContact.cpp
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

int ChooseContact(int * arr_index, struct AddressBook addressbook){
    int count = 0;
    int input_index = 0;
    int address_index;
    for (int ii = 0; ii < 1000; ii++){
        if (arr_index[ii] != 0){
            count++;
        }else{
            break;
        }
    }
    if (count == 1){
        address_index = arr_index[0]-1;
    }
    else{
        cout << "您查找的结果有重复，请输入你想操作的序号：" << endl;
        cin >> input_index;
        while (input_index > count) {
            cout << "输入序号超过范围，请重新输入" << endl;
            cin >> input_index;
        }
        address_index = arr_index[input_index-1]-1;
        cout << address_index << endl;
        cout << "你选择了: 姓名: " << addressbook.ContactArr[address_index].name << " 性别: " << (addressbook.ContactArr[address_index].sex == 1?"男" : "女") << " 电话: " << addressbook.ContactArr[address_index].number << " 地址: " << addressbook.ContactArr[address_index].address << endl;
    }
    
    
    return address_index;
}
