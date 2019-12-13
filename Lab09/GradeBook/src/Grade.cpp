#include "Grade.h"
unsigned int Grade::numberOfGrades = 0; // Inicjalizacja zmiennej statycznej przechowujcej liczbe utworzonych obiektów klasy Grade


Grade::Grade(float grade) : Grade(grade, "") {}
Grade::Grade(float grade, std::string label)
{
    _grade = grade;
    _label = label;
    numberOfGrades++;
    _id = numberOfGrades;
}


void Grade::Print() const
{
    std::cout<<"Grade ID=" << _id << " value=" << _grade << " " << _label << std::endl;
}

