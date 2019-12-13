#include "StudentDatabase.h"

StudentDatabase::StudentDatabase(std::string name, StudentsList* listOfStudents, GradeBook* listOfGrades)
{
    _databaseName = "Default";
}
void StudentDatabase::Show() const 
{
    std::cout << _databaseName << std::endl;
}
