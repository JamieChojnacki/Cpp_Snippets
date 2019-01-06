#include <iostream>
#include "Entity.h"

Entity::Entity(const std::string& name, const std::string& sname, bool winner) {
    this->name = name;
    this->sname = sname;
    this->winner = winner;
}

void Entity::player() const {
    std::cout << this->name <<", " << this->sname << std::endl;
}

Rating::Rating(unsigned int score, const std::string& name, const std::string& sname, bool winner)
: Entity(name, sname, winner)  // invoke entity ctor
{
    this->rating = score;
}

Rating::Rating(unsigned int score, const Entity& e)
: Entity(e)
{
    this->rating = score;
}

void Rating::upgrade_rating(unsigned int score) {
    this->rating += score;
}

