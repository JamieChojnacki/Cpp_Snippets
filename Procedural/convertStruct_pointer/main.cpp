#include <iostream>
#include <cmath>

struct polar{
    double distance;
    double angle;
};

struct rect{
    double x;
    double y;
};

void rect_to_polar(const rect *, polar *);
void show_polar(const polar *);

int main() {

     using std::cout;

     rect rplace;
     polar pplace;

     cout << "insert x and y values: " << std::endl;
     while(std::cin >> rplace.x >> rplace.y)
     {
         rect_to_polar(&rplace, &pplace);
         show_polar(&pplace);
         cout << "insert another x and y pair: ";
     }

    return 0;
}

void rect_to_polar(const rect *pxy, polar *pda)
{
    using namespace std;
    pda->distance = sqrt(pxy->x * pxy->x * pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);

}

void show_polar(const polar *pda)
{
    const double rad_to_deg = 57.29577951;
    std::cout << "distance: " << pda->distance << std::endl;
    std::cout << "angle = " << pda -> angle * rad_to_deg << "degree" << std::endl;

}