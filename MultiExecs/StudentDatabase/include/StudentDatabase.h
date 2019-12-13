#pragma once
#include "GradeBook.h"
#include "StudentsList.h"
#include <string>
#include <iostream>

class StudentDatabase{
    public:
        StudentDatabase(std::string, StudentsList*, GradeBook*);
        void Show() const;
        StudentDatabase() : _databaseName("Default") {}
    private:
        std::string _databaseName;
        StudentsList* _listOfStudents;
        GradeBook* _bookOfGrades;

};