#include "StudentsList.h"


void StudentsList::PrintInfo() const
// Wypisywanie składnika prywatnego _label, czyli "nazwa listy"
{
    std::cout << "[StudentsList]: " << _label;
}

void StudentsList::PrintList() const
// Wypisywanie wszystkich studentów w liście, za pomocą metody klasy Student - Print
{
    PrintInfo();
    for(int i=0; i<_sizeOfList; i++)
        _list[i]->Print();
    std::cout << std::endl;
}


void StudentsList::AddStudent(const Student* studToAdd)
// Dodawanie wskaźnika do obiektu Student do składnika prywatnego _list (tablicy typu const Student*)
{
    if(_sizeOfList == 0)
    {
        _list = new const Student * [1];
        _list[0] = studToAdd;
        _sizeOfList++;
    }
    else
    {
        const Student **newList;
        newList = new const Student * [_sizeOfList + 1];
        for(int i=0; i<_sizeOfList; i++)
            newList[i] = _list[i];
        newList[_sizeOfList] = studToAdd;
        delete [] _list;
        _list = newList;
        _sizeOfList++;
    }
}

StudentsList::~StudentsList()
// Destruktor - zwalnia całą zaalokowaną pamięć na obiekty typu Student, później zwalnia pamięć zaalokowaną
// na składnik prywatny _lista (tablica typu const Student*), który służył jako kontener do przechowywania 
// wskaźników do obiektów typu Student
{
    for(int i=0; i<_sizeOfList; i++)
        delete _list[i];
    delete [] _list;
}