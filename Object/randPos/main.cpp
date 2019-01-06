#include <iostream>
#include "Position.h"

int main() {

    using Vector::Position;
    srand(time(0));
    double direction;
    Vector::Position step;
    Vector::Position result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    std::cout << "distance to go : ";
    while(std::cin >> target)
    {
        std::cout << "insert step length : ";
        if(!(std::cin >> dstep))
            break;

        while(result.magval() < target)  // if distance < target
        {
            direction = rand() % 360;
            step.newval(dstep, direction, Vector::Position::POL);
            result = result + step;
            std::cout << result << std::endl;
            steps++;
        }
        std::cout << "by " << steps << " steps "
                                       "its done :\n";
        std::cout << result << std::endl;
        result.polar_mode();
        std::cout << "its equal to \n" << result << std::endl;
        std::cout << "avg step = "
                  << result.magval()/steps << std::endl;
        steps = 0;
        result.newval(0.0, 0.0);
        std::cout << "insert new distance: ";
    }
    std::cout << "end!\n";
    std::cin.clear();
    while (std::cin.get() != '\n')
        continue;

    return 0;
}