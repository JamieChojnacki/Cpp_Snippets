#include <iostream>
#include <array>

void SortGivenArray(std::array<int,10>& );

int main() {

    std::array<int, 10> someArray {1, 20, 2, 3, 1, 20, 3, 125, 29, 9};
    SortGivenArray(someArray);

    std::array<int, 10>::iterator it = someArray.begin();
    while(it != someArray.end())
        std::cout << *it++ << std::endl;

    return 0;
}

void SortGivenArray(std::array<int,10>& GivenArray) {
    int ongoingElement;
    size_t size = GivenArray.size();

    for( int index = 0; index < GivenArray.size(); index++ )
    {
        ongoingElement = index;
        for( int next = index + 1; next < size; next++ )
            if( GivenArray[ next ] < GivenArray[ ongoingElement ] )
                ongoingElement = next;

        std::swap( GivenArray[ ongoingElement ], GivenArray[ index ] );
    }
}