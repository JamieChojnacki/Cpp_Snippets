#include <iostream>
#include <climits>

using std::cout;

int main() {
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof returns data or var size

    cout << "int has: " << sizeof(int) << " bytes" << std::endl;
    cout << "short has: " << sizeof(short) << " bytes" << std::endl;
    cout << "long has: " << sizeof(long) << " bytes" << std::endl;
    cout << "long long has: " << sizeof(long long) << " bytes" << std::endl;
    putchar(0x0a);

    cout << "maximal values:" << std::endl;
    cout << "int max: " << n_int << std::endl;
    cout << "short max: " << n_short << std::endl;
    cout << "long max: " << n_long << std::endl;
    cout << "long long max: " << n_llong << std::endl;
    cout << std::endl << "bits in bytes : " << CHAR_BIT << std::endl;
    return 0;
}