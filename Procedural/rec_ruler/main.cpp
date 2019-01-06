// ruler.cpp - użycie rekurencji do dzielenia linijki
#include <iostream>
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);
int main()
{
    char ruler[Len];  // create array of length 66
    int i;
    for (i = 1; i < Len - 2; i++)  // 0 - 64 are spaces
        ruler[i] = ' ';
    ruler[Len - 1] = '\0';  // 65 is NULL
    int max = Len - 2;
    int min = 0;
    ruler[min] = ruler[max] = '|';  // 0 and 64 are |
    std::cout << ruler << std::endl;
    for (i = 1; i <= Divs; i++)  // in range 0 to 6
    {
        subdivide(ruler,min,max, i);  // get array, min, max and current i
        std::cout << ruler << std::endl;
        for (int j = 1; j < Len - 2; j++)
            ruler[j] = ' ';  // zerowanie linijki
    }

    return 0;
}

void subdivide(char ar[], int low, int high, int level)
{
    if (level == 0)  // take care of recurency level
        return;
    int mid = (high + low) / 2;
    ar[mid] = '|';  // 32 is mis
    subdivide(ar, low, mid, level - 1);  // change mid with high/low
    subdivide(ar, mid, high, level - 1);
}
