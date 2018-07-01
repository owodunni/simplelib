#ifndef SIMPLECLASS_H
#define SIMPLECLASS_H

#include <iostream>
#include <vector>

class SimpleClass
{
public:
    SimpleClass(){};
    std::string hello();
    std::string verify(std::string cdKey);
    void helloString(std::vector<std::string> *results);
    void helloBytes(std::vector<char> *results);
};

#endif
