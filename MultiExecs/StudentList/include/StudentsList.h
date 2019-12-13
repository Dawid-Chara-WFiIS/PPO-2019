#pragma once
#include <iostream>
#include <string>
#include "Student.h"

// Definicja klasy StudentsList
class StudentsList{
    public:
        StudentsList(std::string label) : _label(label) {}
        void PrintInfo() const;
        void AddStudent(const Student*);
        void PrintList() const;
        ~StudentsList();
    private:
        std::string _label;
        const Student** _list;
        int _sizeOfList = 0;

};
