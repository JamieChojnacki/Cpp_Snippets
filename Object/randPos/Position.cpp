#include <cmath>
#include "Position.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace Vector
{
    // przelicznik radianów na stopnie
    const double Rad_to_deg = 45.0 / atan(1.0);

    /* private */
    void Position::set_mag()
    {
        mag = sqrt(x * x + y * y);
    }

    void Position::set_ang()
    {
        if (x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x);
    }

    // count x from POL
    void Position::set_x()
    {
        x = mag * cos(ang);
    }

    // count y from POL
    void Position::set_y()
    {
        y = mag * sin(ang);
    }

    /* public */
    Position::Position()          // def ctor
    {
        x = y = mag = ang = 0.0;
        mode = RECT;
    }

    Position::Position(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x();
            set_y();
        }
        else
        {
            cout << "bad 3rd parameter Position() -- ";
            cout << "insta reset\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }

    void Position::newval(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x();
            set_y();
        }
        else
        {
            cout << "bad 3rd arg set() -- ";
            cout << "insta reset\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }

    Position::~Position()   // destro
    {
    }

    void Position::polar_mode()  // switch to POL
    {
        mode = POL;
    }

    void Position::rect_mode()   // switch to RECT
    {
        mode = RECT;
    }


    /* overloading */
    Position Position::operator+(const Position & b) const
    {
        return Position(x + b.x, y + b.y);
    }

    Position Position::operator-(const Position & b) const
    {
        return Position(x - b.x, y - b.y);
    }

    Position Position::operator-() const
    {
        return Position(-x, -y);
    }

    Position Position::operator*(double n) const
    {
        return Position(n * x, n * y);
    }

    /* friend func */
    Position operator*(double n, const Position & a)
    {
        return a * n;
    }


    std::ostream & operator<<(std::ostream & os, const Position & v)
    {
        if (v.mode == Position::RECT)
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == Position::POL)
        {
            os << "(m,a) = (" << v.mag << ", "
               << v.ang * Rad_to_deg << ")";
        }
        else
            os << "Bad type of representation";
        return os;
    }
} // Vector namespace ended