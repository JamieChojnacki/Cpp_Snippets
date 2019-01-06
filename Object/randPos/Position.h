#ifndef RANDPOS_POSITION_H
#define RANDPOS_POSITION_H

#include <iostream>

namespace Vector
{
    class Position
    {
    public:
        enum Mode {RECT, POL};
        // RECT - Cartesian POL - Polar
    private:
        double x;
        double y;
        double mag;      // vector length
        double ang;      // vector direction
        Mode mode;       // RECT or POL
        // priv methods used to set stuff
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Position();
        Position(double n1, double n2, Mode form = RECT);
        void newval(double n1, double n2, Mode form = RECT);
        ~Position();
        double xval() const {return x;}      // get x
        double yval() const {return y;}      // get y
        double magval() const {return mag;}  // get length
        double angval() const {return ang;}  // get angle
        void polar_mode();    // make Polar
        void rect_mode();     // make Cartesian
        /* overload stuff */
        Position operator+(const Position & b) const;
        Position operator-(const Position & b) const;
        Position operator-() const;
        Position operator*(double n) const;
        /* friend stuff */
        friend Position operator*(double n, const Position & a);
        friend std::ostream &
        operator<<(std::ostream & os, const Position & v);

    };
} // Vector namespace ended


#endif //RANDPOS_POSITION_H
