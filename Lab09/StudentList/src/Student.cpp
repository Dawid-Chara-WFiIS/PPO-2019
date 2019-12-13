#include "Student.h"

int Student::numberOfStudents = 0; // Inicjalizacja zmiennej statycznej przechowujcej liczbe utworzonych obiektów klasy Student


Student::Student(std::string firstName, std::string secondName)
// Konstruktor klasy Student, gdy argumentem są dwie zmienne typu std::string
{
    _firstName = firstName;
    _secondName = secondName;
    numberOfStudents++;
    _id = numberOfStudents;
}

void Student::Print() const
// Wypisywanie danych(_id, _firstName, _secondName) o obiekcie klasy Student
{
    std::cout<< std::endl<< "Student ID: " << _id << ", Name: " << _firstName << ", Surname: " << _secondName;
}
