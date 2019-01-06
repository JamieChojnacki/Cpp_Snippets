#include <iostream>

const int ARSIZE = 30;

struct prog{
    char name[ARSIZE];
    char nickname[ARSIZE];
};

int main() {

    prog members[3];
    int choice;

    strcpy( members[0].name, "Sara" );
    strcpy( members[1].name, "James" );
    strcpy( members[2].name, "Alice" );
    strcpy( members[0].nickname, "Sar" );
    strcpy( members[1].nickname, "Jam" );
    strcpy( members[2].nickname, "Ali" );

    std::cout << "1 - group names\n2 - group nicknames" << std::endl;

    std::cin >> choice;
    switch(choice)
    {

        case 1:
            for(int i: {0, 1, 2} )
                std::cout << members[i].name << std::endl;
            break;
        case 2:
            for(int i: {0, 1, 2} )
                std::cout << members[i].nickname << std::endl;
            break;
                default: break;
    };

    return 0;
}