#include <iostream>
#include <vector>
#include <thread>
#include <chrono>


class Vertex{
public:
    float x, y, z;
    Vertex(){
        this->x = 0;
        this->y = 0;
        this->z = 0;
    }
    Vertex(float x = 0, float y = 0, float z = 0)
    :x(x), y(y), z(z) {}

    Vertex(const Vertex &vertices){
        /* copy ctor */
        this->x = vertices.x;
        this->y = vertices.y;
        this->z = vertices.z;
        std::cout << "copy ctor invoked" << std::endl;
    }
};

int main() {

    using std::literals::chrono_literals::operator""s;

    std::vector<Vertex> vertices;
    vertices.reserve(3);  // reserve memory
    vertices.emplace_back(10,20,30);  // hey, construct a Vertex obj with parameters
    vertices.emplace_back(20, 20);
    vertices.emplace_back(30);

    /* bad way */
    std::vector<Vertex> vertix;
    vertix.push_back(Vertex(10,20,30));  // unfortunately copy ctor :(
    vertix.push_back(Vertex(100,200,300));

    for(const Vertex &i : vertices) {
        std::cout << i.x << " " << i.y << " " << i.z << " " << std::endl;
        std::this_thread::sleep_for(1s);
    }

    std::cout.put(0x0a);

    for(const Vertex &i : vertix) {
        std::cout << i.x << " " << i.y << " " << i.z << " " << std::endl;
        std::this_thread::sleep_for(1s);
    }

    return 0;
}