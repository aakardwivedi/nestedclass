#include <iostream>

using namespace std;


#include "Birthday.h"

Birthday::Birthday(int d,int m,int y)
{
    day=d;
    month=m;
    year=y;
}

void Birthday::printDate()
{

    cout<<day<<"/"<<month<<"/"<<year<<endl;
}
