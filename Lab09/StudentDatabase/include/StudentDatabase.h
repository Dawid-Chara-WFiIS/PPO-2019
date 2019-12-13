#pragma once
#include "GradeBook.h"
#include "StudentsList.h"
#include <string>
#include <iostream>

class StudentDatabase{
    public:
        StudentDatabase(std::string databaseName, StudentsList* listOfStudents,  GradeBook* bookOfGrades) : 
        _databaseName(databaseName), _listOfStudents(listOfStudents), _bookOfGrades(bookOfGrades) {}
        void Show() const;
        StudentDatabase() : _databaseName("Default") {}
    private:
        std::string _databaseName;
        StudentsList* _listOfStudents;
        GradeBook* _bookOfGrades;

};