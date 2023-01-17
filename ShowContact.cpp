//
//  ShowContact.cpp
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

void ShowContact(struct AddressBook * p){
    if (p -> booksize == 0){
        cout << "当前通讯录为空" << endl;
    }
    else {
        for (int ii = 0; ii < p -> booksize; ii++){
            cout << "姓名：" << p -> ContactArr[ii].name;
            switch (p -> ContactArr[ii].sex) {
                case 1:
                    cout << " 性别：男";
                    break;
                case 2:
                    cout << " 性别：女";
                    break;
                default:
                    cout << " 性别：未知";
                    break;
            }
            cout << " 年龄：" << p -> ContactArr[ii].age;
            cout << " 联系方式：" << p -> ContactArr[ii].number;
            cout << " 地址：" << p -> ContactArr[ii].address << endl;
        }
    }
//    system("pause");//按任意键继续
//    system("cls");//清空屏幕
}
