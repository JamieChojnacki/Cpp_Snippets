#include "Queue.h"
#include <cstdlib>


Queue::Queue(int qs) : qsize(qs)
{
    this->front = this->rear = nullptr;
    this->items = 0;
}

Queue::~Queue()
{
    Node * temp;
    while (this->front != nullptr)     // till the end of queue
    {
        temp = this->front;         // keep adress of current element
        this->front = this->front->next;  // move ptr to the next element
        delete temp;          // free element
    }
}

bool Queue::isempty() const
{
    return this->items == 0;
}

bool Queue::isfull() const
{
    return this->items == this->qsize;
}

int Queue::queuecount() const
{
    return this->items;
}

// dodaje element do kolejki
bool Queue::enqueue(const Item & item)
{
    if (isfull())
        return false;
    Node * add = new Node;     // create node
    // denial will return exception - std::bad_alloc
    add->item = item;          // ustawienie wskaźników węzłów
    add->next = nullptr;
    items++;
    if (this->front == nullptr)         // if queue is empty
        this->front = add;           // insert el on head
    else
        this->rear->next = add;      // insert el on tail
    this->rear = add;                // rear points to new node
    return true;
}

// kopiuje element czołowy kolejki do argumentu wywołania i  usuwa go z kolejki
bool Queue::dequeue(Item & item)
{
    if (front == nullptr)
        return false;
    item = this->front->item;    // cpy 1st item from queue to item
    this->items--;
    Node * temp = this->front;   // keep location of first el
    this->front = this->front->next;   // move front ptr to the next el
    delete temp;           // delete current first el
    if (this->items == 0)
        this->rear = nullptr;
    return true;
}


// kiedy klient trafia do kolejki, zapamiętywany jest bieżący
// czas systemowy, losowany jest też czas obsługi klienta
// (z zakresu od 1 do 3)
void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}
