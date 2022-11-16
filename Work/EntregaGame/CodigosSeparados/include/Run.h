#ifndef RUN_H
#define RUN_H
#include <iostream>

using namespace std;

class Run {
public:
    virtual void action() = 0;
    virtual ~Run() {}
};

class slowRun : public Run {
    void action() override;
};

class mediumRun : public Run {
    void action() override;
};

class fastRun : public Run {
    void action() override;
};

#endif // RUN_H
