#ifndef CDCLASSICDYNAMIC_CD_H
#define CDCLASSICDYNAMIC_CD_H


class CD {
private:
    char * performers;
    char * label;
    int selections;
    double playtime;

public:
    CD(const char * s1, const char * s2, int n, double x);
    CD(const CD & d);
    CD();
    virtual ~CD();
    virtual void Report() const;

    // overloaded functions
    CD & operator=(const CD & d);
};


// derived class
class Classic : public CD
{
private:
    char * works;

public:
    Classic(const char * w, const char * s1, const char * s2, int n, double x);
    Classic(const Classic & c);
    Classic();
    virtual ~Classic();
    virtual void Report() const;

    // overloaded functions
    Classic & operator=(const Classic & c);
};


#endif //CDCLASSICDYNAMIC_CD_H
