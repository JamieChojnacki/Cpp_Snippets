#ifndef CLASSFRDOPCPY_STRING_H
#define CLASSFRDOPCPY_STRING_H

#include <iostream>
#include <cctype>

using std::istream;
using std::ostream;

namespace My {
    /* we'r going to use new and delete within class */

    class String {
    private:
        char* str; // pointer to a string
        int len;  // string length
        static int num_strings;  // count objects within class
        static const int CINLIM = 80; // max IN limit
    public:
        /* ctor destro and basic methods */
        String();  // def ctor
        String(const char*);
        String(const String&); // copy ctor
        ~String();  // destro
        int length() const { return this->len; }
        void stringlow();
        void stringup();
        int hasLetter(char) const;
        /* overload operators */
        String& operator=(const String&);
        String& operator=(const char*);
        String operator+(const String&);
        String operator+(const char*);
        char & operator[](int);
        const char & operator[](int) const;
        /* friend overloaded funcs */
        friend bool operator<(const String&, const String&);
        friend bool operator>(const String&, const String&);
        friend bool operator==(const String&, const String&);
        friend ostream& operator<<(ostream&, const String&);
        friend istream& operator>>(istream&, String&);
        friend String operator+(char*, const String&);
        /* static  method */
        static int HowMany();
    };

#endif //CLASSFRDOPCPY_STRING_H
}
