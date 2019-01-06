#include <iostream>

template <class T>
void swap(T &a, T &b);  // template

struct job{
    double salary;
    int floor;
};

template <> void swap<job> (job &j1, job &j2);  // spec template
void show(job &j);

int main() {

    using std::cout;

    cout.precision(2);
    cout.setf(std::ios::fixed, std::ios::floatfield );

    int i = 10;
    int j = 20;
    swap(i, j);

    job sue = { 7200.1, 300};
    job mark = {5000.2, 200};

    cout << "before change: " << std::endl;
    show(sue);
    show(mark);

    swap(sue, mark);  // swap fields

    cout << "after change: " << std::endl;
    show(sue);
    show(mark);


    return 0;
}

template <class T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <> void swap<job> (job &j1, job &j2)
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}


void show(job &j)
{
    std::cout << j.salary << std::endl;
    std::cout << j.floor << std::endl;
}
