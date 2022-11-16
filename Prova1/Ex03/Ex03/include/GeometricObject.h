#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H

#include <iostream>
#include <string>

using namespace std;

class ObjectGeometric {
public:
    virtual string ToDraw() = 0;
};

class ObjDecorator : public ObjectGeometric {
protected:
    ObjectGeometric* _objDecorator;
    string description;

public:
    ObjDecorator(ObjectGeometric* obj);
    string ToDraw() override;
};

class Fill : public ObjDecorator {
public:
    Fill(ObjectGeometric* obj);
};

class Light : public ObjDecorator {
public:
    Light(ObjectGeometric* obj);
};

class Square : public ObjectGeometric {
protected:
    string description;

public:
    Square();
    string ToDraw();
};

#endif // GEOMETRICOBJECT_H
