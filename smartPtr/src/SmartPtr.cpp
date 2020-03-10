#include "SmartPtr.h"

SmartPtr::SmartPtr(cls* object) : _pointer(object)
{
    _counter = new unsigned;
    *_counter = 1;
}

SmartPtr::SmartPtr(const SmartPtr& other) : _pointer(other._pointer), _counter(other._counter)
{
    (*_counter)++;
}

SmartPtr::~SmartPtr()
{
    (*_counter)--;
    if(!*_counter)
    {
        delete _pointer;
        delete _counter;
    }
}

SmartPtr& SmartPtr::operator = (const SmartPtr& other)
{
    if(this == &other)
        return *this;
    (*_counter)--;
    if(!*_counter)
    {
        delete _pointer;
        delete _counter;
    }
    if(_pointer != other._pointer)
    {
        _counter = other._counter;
        _pointer = other._pointer;
        (*_counter)++;
    }
    return *this;

}

unsigned SmartPtr::useCount() const
{
    return *_counter;
}

cls* SmartPtr::operator->()
{
    return _pointer;
}

cls* SmartPtr::operator->() const
{
    return _pointer;
}

cls& SmartPtr::operator*() const
{
    return *_pointer;
}


