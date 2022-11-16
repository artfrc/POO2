#include <iostream>
#include "GeometricObject.h"

using namespace std;

int main() {

    ObjectGeometric* obj;
    obj = new Square();
    cout << obj->ToDraw() << endl;
    obj = new Fill(obj);
    cout << obj->ToDraw() << endl;
    obj = new Light(obj);
    cout << obj->ToDraw() << endl;


    return 0;
}
