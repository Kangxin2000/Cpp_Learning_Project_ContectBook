//
//  AddContact.hpp
//  Cpp_Project1
//
//  Created by 王 on 2023/01/07.
//

#ifndef AddContact_hpp
#define AddContact_hpp
#define MAX 1000

#include <stdio.h>
#include <iostream>
#include <string>


#endif /* AddContact_hpp */

using namespace std;

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

void AddContact(struct AddressBook * p);
void Exit();
void ShowMenu ();
void ShowContact(struct AddressBook * p);
int * FindContact(string findname, struct AddressBook addressbook);
int ChooseContact(int * arr_index, struct AddressBook addressbook);
void DeleteContact(struct AddressBook * p, int index);
void EditContact(struct AddressBook * p, int index);
void ClearContact(struct AddressBook * p);
