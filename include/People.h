#include <iostream>

using namespace std;

#include<string>
#include "Birthday.h"
#ifndef PEOPLE_H
#define PEOPLE_H


class People
{
    public:
        People(string x,Birthday DOB_);
        void printInfo();
        private:
            string name;
            Birthday DOB;
};

#endif // PEOPLE_H
