//
//  EditContact.cpp
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

void EditContact(struct AddressBook * p, int index){
    int input = 99;
    while (input != 0){
        cout << "你想更改：1）姓名 2）性别 3）年龄 4）联系方式 5）地址 0）退出" << endl;
        cin >> input;
        switch (input) {
            case 1:
            {
                string name;
                cout << "请输入新姓名：" << endl;
                cin >> name;
                p->ContactArr[index].name = name;
                break;
            }
            case 2:
            {
                int sex;
                cout << "请输入新性别：" << endl;
                cin >> sex;
                p->ContactArr[index].sex = sex;
                break;
            }
            case 3:
            {
                int age;
                cout << "请输入新年龄：" << endl;
                cin >> age;
                p->ContactArr[index].age = age;
                break;
            }
            case 4:
            {
                string number;
                cout << "请输入新联系方式：" << endl;
                cin >> number;
                p->ContactArr[index].number = number;
                break;
            }
            case 5:
            {
                string address;
                cout << "请输入新地址：" << endl;
                cin >> address;
                p->ContactArr[index].address = address;
                break;
            }
            case 0:
            {
                cout << "更改完毕" << endl;
                break;
            }
            default:
            {
                cout << "请输入0～5之间的数字！" << endl;
                break;
            }
        }
    }
}
