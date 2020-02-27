#ifndef VECTOR_H
#define VECTOR_H

#include <QObject>
#include <cmath>

const double P (M_PI/180);

class Vector
{
private:
    double real;
    double imag;
    double amp;
    double angle;
    bool IsReal;    //是否是实部加虚部的形式；true为是，false为否

public:

    explicit Vector();
    Vector(const double&,const double&,bool);
    void TurnType(bool x = 1);

    Vector& operator+(const Vector&);
    Vector& operator-(const Vector&);
    Vector& operator*(const Vector&);
    Vector& operator/(const Vector&);
    Vector& operator+(const double&);
    Vector& operator*(const double&);
    Vector& operator/(const double&);
    Vector& operator=(const Vector&);
};

#endif // VECTOR_H
