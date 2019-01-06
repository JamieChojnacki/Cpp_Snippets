#include <iostream>
#include <array>

/* log2(n) - is a maximum effort put to guess the number */
/* 256 numbers in array makes it max of 8 moves */


unsigned int vanilla(std::array<unsigned int, 9>&, unsigned);

int main() {

    std::array<unsigned int, 9> data {1,2,3,6,7,8,9,11,12};
    std::cout << vanilla(data, 11) << std::endl;

    return 0;
}

/* easier version */
unsigned int vanilla(std::array<unsigned int, 9>& source, unsigned int target){
    /* that's a easy version */
    /* return position */
    unsigned int low = 0;
    unsigned int high = 8;
    unsigned int mid = 0;
    unsigned int guess = 0;

    while(low <= high) {
        mid = (low + high);  // update mid
        guess = source[mid];
        if (guess == target)
            return mid;
        if (guess > target) {
            high = mid - 1;
        } else
            low = mid + 1;
    }
    return 0;
}
