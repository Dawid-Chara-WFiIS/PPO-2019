#pragma once
#include <iostream>
#include <string>
#include "Grade.h"


class GradeBook{
    public:
        GradeBook() = default;
        GradeBook(const GradeBook &other)
        {
            _sizeOfList = other._sizeOfList;
            const Grade **newList = new const Grade * [_sizeOfList];
            _list = newList;
            for(int i=0; i<other._sizeOfList; i++)
            {
                const Grade* grade = new const Grade(other._list[i]->_grade, other._list[i]->_label);
                _list[i] = grade;
            }
        }
        void Insert(Grade*, std::string);
        void Print() const;
        void AddGrade(float, std::string);
        void AddGrade(float);
        void Summary();
        ~GradeBook();
    private:
        const Grade** _list;
        int _sizeOfList = 0;
};