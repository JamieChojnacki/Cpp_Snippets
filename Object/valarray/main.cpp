#include <iostream>
#include <valarray>

int main() {

    int Array[5] = {1,2,3,4,1};

    std::valarray<int> MathScores;
    std::valarray<int> PhysicsScores {2,5};
    std::valarray<int> BiologyScores(8, 2);
    std::valarray<int> ChemistryScores(Array,4);

    std::cout << PhysicsScores[1] << std::endl;
    std::cout << BiologyScores.sum()/BiologyScores.size() << std::endl;
    std::cout << ChemistryScores[3] << std::endl;

    return 0;
}