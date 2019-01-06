#include <iostream>

struct meal{  // meal macros in grams
    short calories;
    short protein;
    short fat;  // we dont need fat!

};

int main() {

    meal *pMeal = new meal;
    meal snack[3];

    pMeal -> calories = 10;
    pMeal -> protein = 30;
    pMeal -> fat = 5;

    std::cout << "pMeal -> protein: " << pMeal -> protein << std::endl;

    // init all three protein snacks
    snack[0].protein = 20;
    snack[1].protein = 30;
    snack[2].protein = 50;

    // you can always init calories or so
     snack[0].calories = 350;

    std::cout << "snack[1].protein: " << snack[1].protein << std::endl;
    std::cout << "snack[0].calories: " << snack[1].calories << std::endl;
    return 0;
}