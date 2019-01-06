#ifndef CLASSTEMPLATE_STACK_STACK_H
#define CLASSTEMPLATE_STACK_STACK_H

template<typename Type>
class Stack {
private:
    enum{ MAX = 10 };
    Type items[MAX];  // stack elements
    int StackTop;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool PushData(const Type& item);
    bool PopData(Type& item);
};


/* definitions must appear there */
template<typename Type>
Stack<Type>::Stack() {
    /* empty stack */
    this->StackTop = 0;
}

template<typename Type>
bool Stack<Type>::isempty() const {
    return this->StackTop == 0;
}

template<typename Type>
bool Stack<Type>::isfull() const {
    return this->StackTop == MAX;
}

template<typename Type>
bool Stack<Type>::PushData(const Type& item){
    if(this->StackTop < MAX)
    {
        items[(this->StackTop)++] = item;
        return true;
    }
    else
        return false;
}

template<typename Type>
bool Stack<Type>::PopData(Type& item){
    if(this->StackTop > 0)
    {
        item = items[--(this->StackTop)];
        return true;
    }
    else
        return false;
}

#endif //CLASSTEMPLATE_STACK_STACK_H
