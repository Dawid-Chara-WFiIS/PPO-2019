#pragma once
#include <iostream>
#include <string>


class TestClass{
    public:
        TestClass(std::string str): _str(str)
        {
            std::cout<<"++ Tworze obiekt TestClass: " << _str << std::endl;
        }
        ~TestClass()
        {
            std::cout << "-- Usuwam obiekt TestClass: " << _str << std::endl;

        }
        std::string info() const;
        

    private:
        std::string _str;



};