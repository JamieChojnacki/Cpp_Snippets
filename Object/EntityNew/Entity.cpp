#include <iostream>
#include "Entity.h"

Entity::Entity(const std::string &co) /* explicit keyword */
: company (co)
{
}

Entity::~Entity(){
}


void Entity::show() const {
    std::cout << "Company name: " << this->company << std::endl;
}