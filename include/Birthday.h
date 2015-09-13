
#include <iostream>

using namespace std;

#ifndef BIRTHDAY_H
#define BIRTHDAY_H


class Birthday
{
    public:
        Birthday(int d,int m,int y);
        void printDate();
      private:
          int day,month,year;

};

#endif // BIRTHDAY_H
