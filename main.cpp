#include <iostream>

using namespace std;


#include "People.h"
#include "Birthday.h"


int main()
{
    Birthday new1(11,12,1996);
   People aakar("Aakar Dwivedi ",new1);
   aakar.printInfo();


    return 0;
}
