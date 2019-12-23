#pragma once
#include <iostream>
#include <string.h>

class MyString{
// simple implementation of string
    public:
        MyString() = default;
        MyString(const char* text);
        MyString(const MyString &other) : _size(other._size)
        // Copy constructor 
            {
                _text = new char [_size + 1];
                for(unsigned i = 0; i < _size; i++)
                    _text[i] = other._text[i];
                _text[_size] = '\0';
            }
        bool operator == (const MyString&) const;
        MyString operator * (unsigned) const;
        MyString& operator=(const MyString&);
        char& operator[](unsigned);
        void Print() const;
        MyString substr(unsigned, unsigned);
        ~MyString();


    private:
        char* _text;
        unsigned int _size;


};