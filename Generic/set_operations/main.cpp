#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <set>

int main() {

    const int SIZE {6};
    using std::string;
    using std::set;

    string S1[SIZE] = {"here", "comes", "the", "hotstepper", "this", "the"};
    string S2[SIZE] = {"where", "should", "i", "start", "this", "tho"};

    set<string> A(S1, S1 + SIZE);
    set<string> B(S2, S2 + SIZE);

    std::ostream_iterator<string, char> out(std::cout, " ");
    std::cout << "A : " << std::endl;
    std::copy(A.begin(), A.end(), out);
    std::cout << std::endl;
    std::cout << "B : " << std::endl;
    std::copy(B.begin(), B.end(), out);
    std::cout << std::endl << std::endl;

    std::cout << "A & B UNION : " << std::endl;
    std::set_union(A.begin(), A.end(), B.begin(), B.end(), out);
    std::cout << std::endl << std::endl;

    std::cout << "A & B DIFF : " << std::endl;
    std::set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
    std::cout << std::endl << std::endl;

    std::cout << "A & B INTERSECTION : " << std::endl;
    std::set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
    std::cout << std::endl << std::endl;

    set<string> C;
    std::cout << "C = A & B UNION : " << std::endl;
    std::set_union(A.begin(), A.end(), B.begin(), B.end(),
            std::insert_iterator<set<string>>(C, C.begin()));
    std::copy(C.begin(), C.end(), out);
    std::cout << std::endl << std::endl;

    std::cout << "BOUNDING: " << std::endl;
    std::copy(C.lower_bound("dang"), C.upper_bound("sopa"), out);

    return 0;
}