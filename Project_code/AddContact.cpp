//
//  AddContact.cpp
//  Cpp_Project1
//
//  Created by 王 on 2023/01/07.
//

#include "AddContact.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;

void AddContact(struct AddressBook * p){
    int ii = p -> booksize;
    if (ii == MAX){
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    else {
        cout << "请输入姓名:" << endl;
        cin >> p -> ContactArr[ii].name;
        cout << "请输入性别： 1 = 男，2 = 女" << endl;
        cin >> p -> ContactArr[ii].sex;
        cout << "请输入年龄" << endl;
        cin >> p -> ContactArr[ii].age;
        cout << "请输入电话" << endl;
        cin >> p -> ContactArr[ii].number;
        cout << "请输入地址" << endl;
        cin >> p -> ContactArr[ii].address;
        cout << endl;
        p -> booksize = ii+1;
        cout << "size = " << p -> booksize;
        cout << "添加成功" << endl;
//       system("pause");//按任意键继续
//       system("cls");//清空屏幕
    }
}
