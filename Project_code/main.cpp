//
//  main.cpp
//  Cpp_Project1
//
//  Created by 王 on 2023/01/07.
//

#include <iostream>
#include <string>
#include <stdlib.h>
//#include "ShowMenu.hpp"
//#include "Exit.hpp"
#include "AddContact.hpp"
using namespace std;
//#define MAX 1000

/*
struct contact{
    string name;
    int sex;
    int age;
    string number;
    string address;
};

struct AddressBook{
    struct contact ContactArr[MAX];
    int booksize;
};
 */



int main(int argc, const char * argv[]) {
    int input  = 0;
    // 创建通讯录
    struct AddressBook addressbook;
    int * output_delete;
    int * output_edit;
    int delete_index;
    int edit_index;
    // 初始化通讯录内人数
    addressbook.booksize = 0;
    string findname;
    
    
    while (true){
        ShowMenu();
        cout << "请输入选择：";
        cin >> input;
        switch (input) {
            case 0:
                Exit();
                return 0;
                break;
            case 1:
            {
                AddContact(&addressbook);
                break;
            }
            case 2:
            {
                ShowContact(&addressbook);
                break;
            }
            case 3:
            {
                cout << "输入要删除的联系人：" << endl;
                cin >> findname;
                output_delete = FindContact(findname,addressbook);
                delete_index = ChooseContact(output_delete, addressbook);
                DeleteContact(&addressbook, delete_index);
                break;
            }
            case 4:
            {
                cout << "输入要查找的信息：" << endl;
                cin >> findname;
                int * output = FindContact(findname,addressbook);
                break;
            }
            case 5:
            {
                cout << "输入要修改的联系人：" << endl;
                cin >> findname;
                output_edit = FindContact(findname, addressbook);
                edit_index = ChooseContact(output_edit, addressbook);
                EditContact(&addressbook, edit_index);
                break;
            }
            case 6:
            {
                ClearContact(&addressbook);
                break;
            }
            default:
            {
                cout << "请输入0～6之间的数字!" << endl;
                break;
            }
        }
    }
    return 0;
}
