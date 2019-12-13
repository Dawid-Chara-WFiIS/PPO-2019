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
  StudentsList computerScienceList ("Computer science");
  Student* archer = new Student ("Sterling", "Archer");
  computerScienceList.AddStudent(archer);
  computerScienceList.AddStudent(new Student("Rick", "Sanchez"));
  const Student* spiegel = new Student ("Spike", "Spiegel");
  computerScienceList.AddStudent(spiegel);

  StudentDatabase db("Example", &computerScienceList, &goodStudents);
  db.Show();
}