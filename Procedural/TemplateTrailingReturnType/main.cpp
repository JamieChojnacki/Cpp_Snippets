#include <iostream>

/* prototype */
template <class type1, class type2>
auto magic(type1 var1, type2 var2) -> decltype(var1 + var2); // delay return type

int main() {

    double fValue = 100.2;
    double sValue = 200.2;

    auto result = magic(fValue, sValue);

    std::cout << result << std::endl;

    return 0;
}

/* declaration */
template <class type1, class type2>
auto magic(type1 var1, type2 var2) -> decltype(var1 + var2)
{
    return var1 + var2;
}