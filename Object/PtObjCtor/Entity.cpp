#include <iostream>
#include <string>
#include "Entity.h"

void Entity::print() const{
    std::cout << this->str << std::endl;
}

Entity::Entity() {
    this->len = 4;
    this->str = new char[len + 1];
    std::strcpy(this->str, "None");
}

Entity::Entity(const char* s) {
    this->len = static_cast<int>(std::strlen(s));
    this->str = new char[this->len + 1];
    std::strcpy(this->str, s);
}

Entity::~Entity() {
    delete[] this->str;
}

Arrow::Arrow(Entity* entity) {
    this->m_Obj = entity;
}

Arrow::~Arrow() {
    delete m_Obj;
}
Entity* Arrow::operator->() {
    return m_Obj;
}