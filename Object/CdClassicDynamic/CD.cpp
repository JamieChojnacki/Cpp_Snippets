#include <iostream>
#include "CD.h"

#include <cstring>

// base class methods
CD::CD(const char * s1, const char * s2, int n, double x)
{
    performers = new char [std::strlen(s1) + 1];
    std::strcpy(performers, s1);
    label = new char [std::strlen(s2) + 1];
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

CD::CD(const CD & d)
{
    performers = new char [std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);

    label = new char [std::strlen(d.label) + 1];
    std::strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;
}

CD::CD()
{
    performers = new char [1];
    performers[0] = '\0';
    label = new char [1];
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

CD::~CD()
{
    delete [] performers;
    delete [] label;
}

void CD::Report() const
{
    std::cout << "performers: " << performers << std::endl;
    std::cout << "label: " << label << std::endl;
    std::cout << "selections: " << selections << std::endl;
    std::cout << "playtime: " << playtime << std::endl;
}

// overloaded functions
CD & CD::operator=(const CD & d)
{
    if (this == &d)
        return *this;

    delete [] performers;
    performers = new char [std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);

    delete [] label;
    label = new char [std::strlen(d.label) + 1];
    std::strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;

    return *this;
}

// Classic class methods
Classic::Classic(const char * w, const char * s1, const char * s2, int n, double x)
        : CD(s1, s2, n, x)
{
    works = new char [std::strlen(w) + 1];
    std::strcpy(works, w);
}

Classic::Classic(const Classic & c)
        : CD(c)
{
    works = new char [std::strlen(c.works) + 1];
    std::strcpy(works, c.works);
}

Classic::Classic()  // call default construct funtion of base class
{
    works = new char [1];
    works[0] = '\0';
}

Classic::~Classic()
{
    delete [] works;
}

void Classic::Report() const
{
    CD::Report();
    std::cout << "works: " << works << std::endl;
}
// overloaded functions
Classic & Classic::operator=(const Classic & c)
{
    if (this == &c)
        return *this;

    CD::operator=(c);
    delete [] works;
    works = new char [std::strlen(c.works) + 1];
    std::strcpy(works, c.works);

    return *this;
}