#include "Attack.h"

int Attack::getDamage() {
    return this->damage;
}

void Attack::setDamage(int v) {
    this->damage = v;
}

weakAttack::weakAttack() {
    setDamage(10);
}

mediumAttack::mediumAttack() {
    setDamage(20);
}

strongAttack::strongAttack() {
    setDamage(30);
}

attackDecorator::attackDecorator(Attack* atkDec) {
    this->_attackDecorator = atkDec;
}

int attackDecorator::getDamage() {
    return _attackDecorator->getDamage() + Attack::getDamage();
}

Decorator1::Decorator1(Attack* atk) : attackDecorator { atk } {
    setDamage(_attackDecorator->getDamage()+15);
}

Decorator2::Decorator2(Attack* atk) : attackDecorator { atk } {
    setDamage(_attackDecorator->getDamage()+30);
}

Decorator3::Decorator3(Attack* atk) : attackDecorator { atk } {
    setDamage(_attackDecorator->getDamage()+50);
}
