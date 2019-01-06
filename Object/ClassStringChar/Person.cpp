#include <iostream>
#include "Person.h"
#include <cctype>

Person::Person(const std::string &fn, const char *sn) {
    this->fname = fn;
    strncpy(this->sname, sn, Person::LIMIT - 1);  //  copy no more than 255 signs
}

void Person::show() const {
    std::cout << this->fname << " ";
    int i = 0;
    while(sname[i] != '\0') {
        std::cout << sname[i];
        i++;
    }
    std::cout.put(0x0a);
}

void Person::FormalShow() const {
    int i = 0;
    while(sname[i] != '\0') {
        std::cout << sname[i];
        i++;
    }
    std::cout << " ";
    std::cout << this->fname;
    std::cout.put(0x0a);
}