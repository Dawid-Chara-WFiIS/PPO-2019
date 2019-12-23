#include "MyString.h"

MyString::MyString(const char* text)
// creating MyString object from const char*
{
    _size = strlen(text);
    _text = new char [_size + 1];
    for(unsigned i = 0; i < _size; i++)
        _text[i] = text[i];
    _text[_size] = '\0';
}


MyString MyString::operator * (unsigned number) const
// overloading * operator
{
    MyString temp;
    temp._size = _size * number;
    temp._text = new char [temp._size + 1];
    for(unsigned i = 0; i < _size; i++)
        temp._text[i] = _text[i];
    for(unsigned i = _size; i < number * _size; i++)
        temp._text[i] = _text[i - _size];
    
    temp._text[temp._size] = '\0';
    return temp;
}

bool MyString::operator == (const MyString& other) const
// overloading comparison operator between MyStrings objects
{
    if(_size != other._size)
        return false;
    for(unsigned i = 0; i < _size; i++)
        if(_text[i] != other._text[i])
            return false;
    return true;
}

void MyString::Print() const
// print string
{
    std::cout << _text << std::endl;
}

MyString& MyString::operator=(const MyString& other)
// overloading = operator 
{
    if(this == &other)
        return *this;

    delete [] _text;
    _size = other._size;
    _text = new char [_size + 1];
    for(unsigned i = 0; i < _size; i++)
        _text[i] = other._text[i];
    _text[_size] = '\0';
    return *this;
}

char& MyString::operator[](unsigned int index)
// overloading [] operator
{
    return _text[index];
}

MyString MyString::substr(unsigned startIndex, unsigned endIndex)
// enabling slicing on MyString object
{
    MyString temp;
    temp._size = endIndex - startIndex + 1;
    temp._text = new char [temp._size + 1];
    for(unsigned i = 0; i < temp._size; i++)
        temp._text[i] = _text[startIndex + i];
    
    return temp;
}

MyString::~MyString()
// destructor
{
    delete [] _text;
}