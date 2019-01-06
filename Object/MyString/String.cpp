#include <cstring>
#include "String.h"

using My::String;

int String::num_strings = 0;  // init static member

int String::HowMany() {
    /* return obj count */
    return num_strings;
}

String::String() {
    /* default parameters */
    this->len = 4;
    this->str = new char[1];
    str = nullptr;  // same as str[0] = '\0';
    num_strings++;
}

String::String(const char * string) {
    /* construct obj with C kind of string */
    this->len = static_cast<int>(std::strlen(string));  // define length
    this->str = new char[this->len + 1];  // allocate memo for string
    std::strcpy(this->str, string);  // copy content
    num_strings++;
}

/* warning! it works only when a new object is initialized with cnt from existing one */
String::String(const My::String & string) {
    /* copy ctor */
    this->len = string.len;  // same length
    this->str = new char[this->len + 1];
    std::strcpy(this->str, string.str);
    num_strings++;
}

String::~String() {
    /* destructor is must! */
    --num_strings;  // decrease obj num
    delete [] str;  // free memo
}

String & String::operator=(const My::String & string) {
    /* assign class obj to other obj */
    if(this == &string)  // better save than sorry
        return *this;
    delete [] str;
    this->len = string.len;
    this->str = new char[this->len + 1];
    std::strcpy(this->str, string.str);
    return *this;
}

String & String::operator=(const char * string) {
    /* assign C string to a obj */
    delete [] str;
    this->len = static_cast<int>(std::strlen(string));
    this->str = new char[this->len + 1];
    std::strcpy(this->str, string);
    return *this;
}

char & String::operator[](int index) {
    /* full access */
    return this->str[index];
}

const char & String::operator[](int index) const {
    /* read only  const obj */
    return this->str[index];
}

/* friend stuff */

bool My::operator<(const String & st1, const String & st2) {
    /* which str is first */
    return(std::strcmp(st1.str, st2.str) < 0);
}

bool My::operator>(const String & st1, const String & st2){
    /* matrix boy */
    return (st1.str > st2.str);
}

bool My::operator==(const String & st1, const String & st2){
    return(std::strcmp(st1.str, st2.str) == 0);
}

ostream & My::operator<<(ostream & os, const String & st){
    /* let ostream handle obj */
    os << st.str;
    return os;  // that is must
}

istream & My::operator>>(istream & is, String & st){
    /* would be nice to use cin with obj */
    char temp[My::String::CINLIM];
    is.get(temp, My::String::CINLIM);
    if(is)
        st = temp;
    while(is && is.get() != '\n')
        continue;
    return is;
}

void String::stringlow() {
    for(int i = 0; i < this->len; ++i) {
        if (std::isupper(str[i]))
            str[i] = std::tolower(str[i]);
    }
}

void String::stringup() {
    for(int i = 0; i < this->len; ++i)
    {
        if(std::islower(this->str[i]))
            this->str[i] = std::toupper(this->str[i]);
    }
}

int String::hasLetter(char ch) const {
    int sum, i;
    for(sum = i = 0; i < len; ++i)
    {
        if(str[i] == ch)
            sum++;
    }
    return  sum;
}

String String::operator+(const String & s) {
    /* string + string */
    int len = static_cast<int>(std::strlen(str) + std::strlen(s.str));
    char * str_sum = new char [len+1];
    std::strcpy(str_sum, str);
    std::strcat(str_sum, s.str);
    String str_new = str_sum;
    delete [] str_sum;

    return str_new;
}

String String::operator+(const char * s) {
    /* string + char* */
    String temp = s;
    String sum = *this + temp;
    return sum;
}

String My::operator+(char * st1, const String & st2) {
    /* char* + string */
    return String(st1) + st2.str;
}