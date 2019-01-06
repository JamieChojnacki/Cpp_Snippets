#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

void ForEach(std::vector<int> &values, const std::function<void(int)> &func){
    /* display values */
    for(int value : values)
        func(value);
}

void Find(std::vector<int> &values, void(*pfunc)(int hm)) {

}

int main() {

    std::vector<int> values {1, 2, 3, 4, 5};
    auto it = std::find_if(values.begin(), values.end(),[](int value) { return value > 3; });
    std::cout << *it << std::endl;

    auto lambda = [=](int number = 5) { std::cout << "Value: " << number << std::endl; };
    ForEach(values, lambda);

    Find(values, [](int index) {}); // make it work

    return 0;
}