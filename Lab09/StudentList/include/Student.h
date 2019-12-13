#pragma once
#include <string>
#include <iostream>

// Definicja klasy Student
class Student{
    public:
        static int numberOfStudents; 
        Student(std::string, std::string);
        void Print() const;
    private:
        std::string _firstName;
        std::string _secondName;
        int _id;

};