#include <iostream>

using namespace std;
#include<string>

#include "People.h"
#include "Birthday.h"

People::People(string x,Birthday DOB_)
:name(x),DOB(DOB_)
{
}


void People::printInfo()
{
    cout<<"\n"<<name<<" was born on ";
    DOB.printDate();
}
