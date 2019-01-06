#include <iostream>
#include <string>
#include <memory>


class Report {
private:
    std::string str;
public:
    explicit Report(const std::string& s) : str(s)
        { std::cout << "Object Created! " << std::endl; }
    ~Report() { std::cout << "Object Deleted! " << std::endl; }
    void comment() const { std::cout << this->str << std::endl; }
};


int main() {

#if 0
    {
        /* that one does not exist anymore */
        std::auto_ptr<Report> ps (new Report("Smart Auto pointer (C++98)"));
        ps->comment();
    }
#endif

    {
        std::shared_ptr<Report> ps (new Report("Smart Shared Pointer"));
        ps->comment();
    }

    {
        std::unique_ptr<Report> ps (new Report("Smart Unique Pointer"));
        ps->comment();
    }

    return 0;
}