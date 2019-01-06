#include <fstream>
#include <iostream>

int main()
{
    using namespace std;

    ifstream infile;
    infile.open("text");

    char ch;
    int count = 0;
    while(infile >> ch)
        count++;

    infile.close();

    // output
    cout << "There are " << count << " characters." << endl;

    return 0;
}