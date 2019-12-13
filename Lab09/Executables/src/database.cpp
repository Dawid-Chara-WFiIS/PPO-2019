#include "StudentDatabase.h"
#include "GradeBook.h"

int main()
{
  Grade* firstGrade = new Grade (3.5);
  GradeBook goodStudents;
  goodStudents.Insert(firstGrade, "Neural Networks");
  goodStudents.Insert(new Grade(4),"Complex numbers calculation");
  goodStudents.AddGrade(4.5, "C++");
  goodStudents.AddGrade(4.5);
  StudentDatabase db;
  db.Show();
}