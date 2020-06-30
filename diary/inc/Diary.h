#ifndef DIARY_H
#define DIARY_H

#include "Message.h"
#include <iostream>
#include <fstream>
#include <string>

struct Diary
{
    Diary(const std::string& filename);
    ~Diary();

    std::string filename;
    Message* messages;
    size_t messages_size;
    size_t messages_capacity;

    Message* search(std::string what);
    void add(const std::string& message);
    void write();
};

#endif