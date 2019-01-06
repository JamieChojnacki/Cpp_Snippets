#ifndef STACKCLONE_STACK_H
#define STACKCLONE_STACK_H

typedef unsigned long Item;

class Stack {
private:
    enum{ MAX = 10 };
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    /* push zwraca false jesli stos jest juz pelen */
    bool pop(Item &item);
    /* pop zwraca false jezeli stos jest juz pusty */

};

#endif //STACKCLONE_STACK_H
