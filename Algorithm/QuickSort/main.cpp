#include <iostream>
#include <vector>

using std::vector;

void swap(vector<int>& v, int x, int y);
void quicksort(vector<int> &vec, int L, int R);


int main() {

    vector<int> vertices {1, 33, 4, 0, 11, 77, 9, 128, 0};
    quicksort(vertices, 0, vertices.size() - 1);

    for(int x : vertices)
        std::cout << x << " ";
    std::cout.put('\n');

    return 0;
}

void quicksort(vector<int> &vec, int L, int R) {
    int i, j, mid, piv;
    i = L;
    j = R;
    mid = L + (R - L) / 2;
    piv = vec[mid];

    while (i<R || j>L) {
        while (vec[i] < piv)
            i++;
        while (vec[j] > piv)
            j--;

        if (i <= j) {
            swap(vec, i, j); //error=swap function doesnt take 3 arguments
            i++;
            j--;
        }
        else {
            if (i < R)
                quicksort(vec, i, R);
            if (j > L)
                quicksort(vec, L, j);
            return;
        }
    }
}

void swap(vector<int>& v, int x, int y) {
    int temp = v[x];
    v[x] = v[y];
    v[y] = temp;
}