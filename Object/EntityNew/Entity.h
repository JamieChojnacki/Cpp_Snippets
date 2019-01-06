#ifndef ENTITYNEW_ENTITY_H
#define ENTITYNEW_ENTITY_H

#include <string>


class Entity {
private:
    std::string company;
public:
    Entity() = delete;  // no default ctor
    Entity(const std::string &co);
    ~Entity();
    void show() const;

};


#endif //ENTITYNEW_ENTITY_H
