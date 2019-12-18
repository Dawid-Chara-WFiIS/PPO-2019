#pragma once
#include <iostream>
#include <algorithm>

typedef double type;

class Container{
        public:
            friend std::ostream & operator << (std::ostream &out,  Container& cont);
            Container() : _size(0) {}
            Container(type*, unsigned int);
            Container(const Container &other) : _size(other._size)
            {
                _arrayOfElements = new type [_size];
                for(unsigned int i = 0; i < _size; i++)
                    _arrayOfElements[i] = other._arrayOfElements[i];
            }
            Container& operator=(const Container&);
            ~Container();
            void push(const type&);
            type pop();
            type& operator[](unsigned int);
            unsigned int length() const;
            Container& sorted();
            void sort();
            

        private:
            type* _arrayOfElements;
            unsigned int _size;
};