#include "StudentDatabase.h"

void StudentDatabase::Show() const 
{
    std::cout << _databaseName << std::endl;
    _listOfStudents->PrintInfo();
    std::cout<<"\n";
    _bookOfGrades->Summary();
}
