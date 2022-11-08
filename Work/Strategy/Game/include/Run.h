#ifndef RUN_H
#define RUN_H

#include <iostream>

using namespace std;

/*==============/
/   Class run   /
/    abstract   /
/*=============*/

class Run {
public:
    virtual void run() = 0;
};

/*=================/
/   Types of run   /
/*================*/

class slowRun:public Run {
    void run();
};

class mediumRun:public Run {
    void run();
};

class fastRun:public Run {
    void run();
};

#endif // RUN_H
