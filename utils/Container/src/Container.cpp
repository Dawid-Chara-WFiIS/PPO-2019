#include "Container.h"

std::ostream & operator << (std::ostream &out, Container& cont)
{
    out << "[";
    for(unsigned int i = 0; i < cont._size; i++)
        out << cont[i] << ", ";
    out << "]\n";
}
type& Container::operator[](unsigned int i)
{
    if(i > _size)
    {
        std::cout << "ERROR: Index out of range!\n";
    }
    else return _arrayOfElements[i];
    
}

Container::Container(type* arrayOfElements, unsigned int size)
{
    _arrayOfElements = new type [size];
    for(unsigned int i = 0; i < size; i++)
        _arrayOfElements[i] = arrayOfElements[i];
    _size = size;
}

void Container::push(const type& elementToPush)
{
    if(_size == 0)
    {
        _arrayOfElements = new type [1];
        _arrayOfElements[0] = elementToPush;
    }
    else
    {   type* newArrayOfElements = new type [_size + 1];

        for(unsigned int i = 0; i < _size; i++)
            newArrayOfElements[i] = _arrayOfElements[i];
        newArrayOfElements[_size] = elementToPush;

        delete [] _arrayOfElements;
        _arrayOfElements = newArrayOfElements;
    }
    _size++;
}

type Container::pop()
{
    if(_size == 0)
        return 0;
    else
    {
        type popedElement = _arrayOfElements[_size];
        _size--;

        type* newArrayOfElements = new type [_size];
        
        for(unsigned int i = 0; i < _size; i++)
            newArrayOfElements[i] = _arrayOfElements[i];

        delete [] _arrayOfElements;
        _arrayOfElements = newArrayOfElements;
        return popedElement;
    }
    
}

Container::~Container()
{
    delete [] _arrayOfElements;
}

Container& Container::operator=(const Container& other)
{
    if(&other == this)
        return *this;
    
    _size = other._size;
    _arrayOfElements = new type [_size];
        for(unsigned int i = 0; i < _size; i++)
            _arrayOfElements[i] = other._arrayOfElements[i];
        
    return *this;
    
}

unsigned int Container::length() const
{
    return _size;
}

Container& Container::sorted()
{
    Container* sortedContainer = this;
    std::sort(sortedContainer->_arrayOfElements, &(sortedContainer->_arrayOfElements[sortedContainer->_size]));
    return *sortedContainer;
}

void Container::sort()
{
        std::sort(_arrayOfElements, &_arrayOfElements[_size]);
}



