#include <iostream>
#include <string>
#include <map>
#include <algorithm>


using KeyType = int;
using Pair = std::pair<const KeyType, std::string>;
using MapCode = std::multimap<const KeyType, std::string>;

int main() {

    MapCode codes;

    codes.insert(Pair(41, "Tokyo"));
    codes.insert(Pair(81, "Helsinki"));
    codes.insert(Pair(81, "Berlin"));
    codes.insert(Pair(27, "Oslo"));
    codes.insert(Pair(29, "Denver"));
    codes.insert(Pair(35, "Nairobi"));
    codes.insert(Pair(29, "Rio"));
    codes.insert(Pair(47, "Moscow"));

    std::cout << "how many V's with Key type 81: "
            << codes.count(81) << std::endl;

    std::cout << "Key:       Value:" << std::endl;

    MapCode::iterator it;
    for(it = codes.begin(); it != codes.end(); ++it){
        std::cout << it->first <<"         " << it->second << std::endl;
    }

    std::pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(29);
    std::cout << "Value = 29: " << std::endl;
    for(it = range.first; it != range.second; ++it){
        std::cout << (*it).second << std::endl;
    }

    return 0;
}