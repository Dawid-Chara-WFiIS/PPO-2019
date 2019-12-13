#include "GradeBook.h"


void GradeBook::Insert(Grade* gradeToAdd, std::string label)
{
    if(_sizeOfList == 0)
    {
        gradeToAdd->_label = label;
        _list = new const Grade * [1];
        _list[0] = gradeToAdd;
        _sizeOfList++;
    }
    else
    {
        gradeToAdd->_label = label;
        const Grade **newList;
        newList = new const Grade * [_sizeOfList + 1];
        for(int i=0; i<_sizeOfList; i++)
            newList[i] = _list[i];
        newList[_sizeOfList] = gradeToAdd;
        delete [] _list;
        _list = newList;
        _sizeOfList++;
    }
}

void GradeBook::Print() const
{
    std::cout << "[GradeBook]: Set of grades in the book:\n";
    for(int i=0; i<_sizeOfList; i++)
        _list[i]->Print();
    std::cout << std::endl;
}

void GradeBook::AddGrade(float value, std::string label)
{
    Grade* grade = new Grade(value);
    Insert(grade, label);
}

void GradeBook::AddGrade(float value)
{
    AddGrade(value, "No category");
}

void GradeBook::Summary()
{
    std::cout<< "[GradeBook]: Summary: Number of grades in the book: " << _sizeOfList << std::endl;
    float sum = 0;
    for(int i=0; i<_sizeOfList; i++)
        sum+=_list[i]->_grade;
    std::cout<< "[[GradeBook]: Summary: Average of grades: " << sum/_sizeOfList << std::endl;

}

GradeBook::~GradeBook()
{
    for(int i=0; i<_sizeOfList; i++)
        delete _list[i];
    delete [] _list;  
}