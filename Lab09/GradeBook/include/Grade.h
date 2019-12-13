#pragma once
#include <string>
#include <iostream>

class GradeBook;
// Definicja klasy Student
class Grade{
    friend class GradeBook;
    public: 
        static unsigned int numberOfGrades;
        Grade(float);
        Grade(float, std::string);
        void Print() const;
    private:
        std::string _label;
        float _grade;
        int _id;

};