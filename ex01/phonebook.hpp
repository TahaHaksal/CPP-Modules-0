#pragma once
#include <iostream>
#include <string>
#include <iomanip>

class   contacts
{
public:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phon_num;
    std::string dark_secret;
};

class   phonebook
{
public:
    contacts    contact_list[8];
    int         current_index;
    int         relative_index;
    phonebook()
    {
        current_index = 0;
        relative_index = 0;
    }
    void    add(contacts *something)
    {
        this->contact_list[current_index % 8] = *something;
        current_index++;
    }
};
