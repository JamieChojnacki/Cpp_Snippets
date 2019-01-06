#ifndef TEMPLATENESTEDCLASS_QUEUE_H
#define TEMPLATENESTEDCLASS_QUEUE_H

template<typename Type>
class Queue {
private:
    enum {Q_SIZE = 10};
    /* nested class stuff */
    class Node {
    public:
        Type item;
        Node* next;
        explicit Node(const Type& i) : item(i), next(nullptr) {}
    };
    Node* front;       // head pointer
    Node* rear;        // tail pointer
    int items;          // queue items counter
    const int qsize;    // max queue size
    Queue(const Queue& q) : qsize(0) {}
    Queue& operator=(const Queue& q) { return *this;}
public:
    Queue(int qs = Q_SIZE);         // start with QS size queue
    ~Queue();
//    Queue(const Queue& q) = delete;  // block copy ctor
    bool isempty() const { return this->items == 0; }
    bool isfull() const { return this->items == qsize; }
    int queuecount() const { return this->items; }
    bool enqueue(const Type& item); // add el to the tail
    bool dequeue(Type& item);       // pull out el from head
};

/* template stuff */
template<typename Type>
Queue<Type>::Queue(int qs ) : qsize(qs)
{
    /* set everything to 0 */
    front = rear = nullptr;
    items = 0;
}

template<typename Type>
Queue<Type>::~Queue() {
    Node* temp;
    while(front != nullptr){
        temp = front;
        front = front->next;
        delete temp;
    }
}
template<typename Type>
bool Queue<Type>::enqueue(const Type& item){
    if(isfull())
        return false;

    Node* add = new Node(item);  // may throw exception - std::bad_alloc
    items++;

    if(front == nullptr)
        front = add;
    else
        rear->next = add;
    rear = add;

    return true;
}

template<typename Type>
bool Queue<Type>::dequeue(Type& item){
    if(front == nullptr)
        return false;
    item = front->item;
    items--;
    Node* temp = front;
    front = front->next;
    delete temp;
    if(items == 0)
        rear = 0;
    return true;
}

#endif //TEMPLATENESTEDCLASS_QUEUE_H
