#include <iostream>
#include <string>
#include <new>
const int BUF = 512;

class Entity{
private:
    std::string word;
    int number;
public:
    Entity(const std::string& s = "Temporary", int n = 0);
    ~Entity();
    void display() const;
};

int main() {

    char* buffer = new char[BUF];
    Entity* pc1 = new (buffer) Entity;
    Entity* pc2 = new Entity("heap_1",1);

    std::cout << "heap buffer adress: " << (void*) buffer <<
    "heap pointer adres: " << pc2 << std::endl;

    std::cout <<"memory capacity:\n";
    std::cout << pc1 << ": ";
    pc1->display();
    std::cout << pc2 << ": ";
    pc2->display();

    Entity* pc3 = new(buffer + sizeof(Entity)) Entity("GoodIdea",6);
    Entity* pc4 = new Entity("heap_2",2);

    std::cout <<"memory capacity:\n";
    std::cout << pc3 << ": ";
    pc3->display();
    std::cout << pc4 << ": ";
    pc4->display();

    /* free memory */
    delete pc2;
    delete pc4;
    /* IMPORTANT order! */
    pc3->~Entity();
    pc1->~Entity();
    delete[] buffer;

    return 0;
}

Entity::Entity(const std::string &s, int n) {
    this->word = s;
    this->number = n;
    std::cout << this->word << " constructed!" << std::endl;
}

Entity::~Entity() {
    std::cout << this->word <<" deleted" << std::endl;
}

void Entity::display() const {
    std::cout << word << ", " << number << std::endl;
}