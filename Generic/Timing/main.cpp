#include <iostream>
#include <chrono> /* high resolution timing */
#include <thread>

class Timer{
private:
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;
public:
    Timer(){
        this->start = std::chrono::high_resolution_clock::now();
    }

    ~Timer() {
        /* whenever object is vaporized display thread */
        this->end = std::chrono::high_resolution_clock::now();
        this->duration = this->end - this->start;

        float ms = duration.count() * 1000.0f;  // duration in ms

        std::cout << "Timer took: " << ms << "ms" << std::endl;
    }

};


void Function(){
    /* print stuff */
    using std::literals::chrono_literals::operator""s;
    Timer timer; /* spy! */

    for ( int i = 0; i < 10; i++) {
        std::this_thread::sleep_for(1s);  // make it wait 1s for each
        std::cout << "hi!" << std::endl;
    }
};


int main() {
    /* lets see how it works */

    Function();

    return 0;
}


/* no Timer class */
#if 0

int main() {

    using std::literals::chrono_literals::operator""s;

    auto start = std::chrono::high_resolution_clock::now();  // current time
    std::this_thread::sleep_for(1s); //sleep for 1s
    auto end = std::chrono::high_resolution_clock::now();  // time after thread

    std::chrono::duration<float> duration = end - start;
    std::cout << "duration: " << duration.count() << "s" << std::endl;

    return 0;
}

#endif