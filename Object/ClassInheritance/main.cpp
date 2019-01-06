#include <iostream>
#include "Entity.h"

int main() {

    using std::cout;
    using std::endl;
    Entity player1("Max", "Walker", false);
    Rating rplayer1(1140, "Simon", "Web", true);
    rplayer1.player(); // obiekt klasy pochodnej korzysta z metody klasy bazowej
    if (rplayer1.didwin())
        cout << ": won at least once.\n";
    else
        cout << ": didn't win.\n";
    player1.player(); // obiekt klasy bazowej korzysta z metody klasy bazowej
    if (player1.didwin())
        cout << ": won at least once.\n";
    else
        cout << ": didnt win.\n";
    cout << "name & surname: ";
    rplayer1.player();
    cout << "; Ranking: " << rplayer1.view_rating() << endl;
    // inicjalizacja obiektu klasy RatedPlayer obiektem klasy TableTennisPlayer
    Rating rplayer2(1212, player1);
    cout << "name & surname: ";
    rplayer2.player();
    cout << "; Ranking: " << rplayer2.view_rating() << endl;

    return 0;
}