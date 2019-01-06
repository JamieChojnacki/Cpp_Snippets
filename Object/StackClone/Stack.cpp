#include <iostream>
#include "Stack.h"

Stack::Stack() {
    /* empty stack */
    this->top = 0;
}

bool Stack::isempty() const {
    return this->top == 0;
}

bool Stack::isfull() const {
    return this->top == MAX;
}

bool Stack::push(const Item &item) {
    if(this->top < MAX)
    {
        items[(this->top)++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item &item) {
    if(this->top > 0)
    {
        item = items[--(this->top)];
        return true;
    }
    else
        return false;
}