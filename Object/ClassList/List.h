#ifndef CLASSLIST_LIST_H
#define CLASSLIST_LIST_H

#include <string>

const int MAX = 10;

struct people {
    std::string name;
    int age;
};
typedef struct people Item;

class List {
private:
    Item items[MAX];
    int count;

public:
    List();
    bool isempty() const;
    bool isfull() const;
    int itemcount() const;
    bool additem(const Item & item);
    void visit(void (*pf)(Item &));
};

#endif //CLASSLIST_LIST_H
