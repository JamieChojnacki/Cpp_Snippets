#ifndef CLASSTHISPOINTER_USER_H
#define CLASSTHISPOINTER_USER_H


class User {

private:
    int something;
public:
    User() = delete;  // ensure that default constructor is done
    User(int);
    void printCrap();
    const User & Select(const User & u) const;

};


#endif //CLASSTHISPOINTER_USER_H
