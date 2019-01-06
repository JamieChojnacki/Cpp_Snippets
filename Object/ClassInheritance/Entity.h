#ifndef CLASSINHERITANCE_ENTITY_H
#define CLASSINHERITANCE_ENTITY_H

#include <string>

class Entity {
    /* base class / super class */
private:
    std::string name;
    std::string sname;
    bool winner;
public:
    Entity(const std::string&, const std::string&, bool);
    void player() const;
    bool didwin() const { return winner;}
    void resetwin() {this->winner = false;}
};

class Rating : public Entity {
    /* sub class */
private:
    unsigned int rating;
public:
    Rating(unsigned int, const std::string&, const std::string&, bool);
    Rating(unsigned int, const Entity&);
    unsigned int view_rating() const {return this->rating;}
    void upgrade_rating(unsigned int);
    void reset_rating() {this->rating = 0;}
};


#endif //CLASSINHERITANCE_ENTITY_H
