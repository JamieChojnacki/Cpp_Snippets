#ifndef PTOBJCTOR_ENTITY_H
#define PTOBJCTOR_ENTITY_H

#include <iostream>

class Entity {
private:
    char* str;
    int len;
public:
    Entity();
    Entity(const char*);
    Entity(const Entity&);
    ~Entity();
    void print() const;
};

class Arrow {
    /* main deal is to overload -> */
private:
    Entity* m_Obj;
public:
    Arrow() = delete;
    Arrow(Entity*);
    ~Arrow();
    Entity* operator->();  // overloaded arrow operator
};

#endif //PTOBJCTOR_ENTITY_H
