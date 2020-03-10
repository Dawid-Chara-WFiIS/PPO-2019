#pragma once
#include "TestClass.h"

using cls = TestClass;

class SmartPtr{
    public:
        SmartPtr(cls*);
        SmartPtr(const SmartPtr&);
        ~SmartPtr();
        SmartPtr& operator = (const SmartPtr&);
        unsigned useCount() const;
        cls* operator->();
        cls* operator->() const;
        cls& operator*() const;
        
    private:
        cls* _pointer;
        unsigned* _counter;




};