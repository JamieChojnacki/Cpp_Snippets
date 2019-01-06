#ifndef DESCRIBEHUMAN_HUMAN_H
#define DESCRIBEHUMAN_HUMAN_H
#include <string>

class Human {
private:
    std::string name;
    char* hobby;
    double weight;
    unsigned int length;
public:
    Human();
    Human(const std::string&, const char*, double);
    Human(const Human&);
    ~Human();
    Human& operator=(const Human&);
    void displayHuman()const;
};


#endif //DESCRIBEHUMAN_HUMAN_H
