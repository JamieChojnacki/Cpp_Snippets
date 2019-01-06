#ifndef SINGLYLINKEDLIST_QUEUE_H
#define SINGLYLINKEDLIST_QUEUE_H

class Customer
{
private:
    long arrive;     // customer arrives
    int processtime; // aprox. deal time
public:
    Customer() { this->arrive = this->processtime = 0; }
    void set(long when);
    long when() const { return this->arrive; }
    int ptime() const { return this->processtime; }
};

using Item = Customer;
class Queue
{
private:
    /* Node - private nested element */
    struct Node { Item item; struct Node * next;};
    enum {Q_SIZE = 10};

    Node * front;       // head pointer
    Node * rear;        // tail pointer
    int items;          // current amount of queue customers
    const int qsize;    // max queue size


    Queue & operator=(const Queue& q) { return *this;}
public:
    Queue(int qs = Q_SIZE);         // tworzy kolejkę o pojemności qs
    ~Queue();
    Queue(const Queue& q) = delete;  // block copy ctor
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item &item); // add el to tail
    bool dequeue(Item &item);       // pull out el from head
};


#endif //SINGLYLINKEDLIST_QUEUE_H
