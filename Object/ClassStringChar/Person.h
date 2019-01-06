#ifndef CLASSSTRINGCHAR_PERSON_H
#define CLASSSTRINGCHAR_PERSON_H

#include <string>

class Person {
private:
    static const int LIMIT = 256;
    std::string fname;  // first name
    char sname[LIMIT];  //surname
public:
    Person() {this->fname = "Noname"; this->sname[0] = '\0';}
    Person(const std::string &fn, const char *sn = "Hej You!");
    /* display method */
    void show() const;  // name-surname
    void FormalShow() const;  //surname-name

};


#endif //CLASSSTRINGCHAR_PERSON_H
