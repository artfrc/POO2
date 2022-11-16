#include "GeometricObject.h"

ObjDecorator::ObjDecorator(ObjectGeometric* obj) {
    this->_objDecorator = obj;
}
string ObjDecorator::ToDraw() {
    return _objDecorator->ToDraw() + ", " + description;
}

Fill::Fill(ObjectGeometric* obj) : ObjDecorator { obj } {
    this->description = "Fill";
}

Light::Light(ObjectGeometric* obj) : ObjDecorator { obj } {
    this->description = "Light";
}

Square::Square() {
    this->description = "Square";
}

string Square::ToDraw() { return this->description; }
