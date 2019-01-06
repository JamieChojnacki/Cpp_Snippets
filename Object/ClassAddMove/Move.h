#ifndef CLASSADDMOVE_MOVE_H
#define CLASSADDMOVE_MOVE_H


class Move {
private:
    double x;
    double y;
public:
    Move();
    Move(double a, double b);
    void showmove() const;
    Move add( const Move &m) const;
    void reset(double a = 0, double b = 0);

};

#endif //CLASSADDMOVE_MOVE_H
