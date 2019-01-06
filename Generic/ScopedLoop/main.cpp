#include <iostream>
#include <vector>


int main(int argc, char* argv[])
{

    std::vector<int> values = {1, 3, 5, 7};

    for(auto& index : values)
    {
        index *= 2;
    }
    
    for(int i : values)
        std::cout << i << std::endl;

    std::cout << std::endl;

    return 0;
}