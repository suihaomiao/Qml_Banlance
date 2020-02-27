#include "vector.h"

Vector::Vector()
{
    real = 0;
    imag = 0;
    amp = 0;
    angle = 0;
}

Vector::Vector(const double &m, const double &n, bool IsReal)
{
    if(IsReal == 1) //实数形式
    {
        real = m;
        imag = n;
        TurnType(IsReal);
    }
    else {
        amp = m;
        angle = n * P;
        TurnType(IsReal);
    }
}

void Vector::TurnType(bool IsReal)
{
    if(IsReal == 1)//实数形式
    {
        amp = sqrt(real * real + imag * imag);
        angle = atan2(imag, real) / P;

    }
    else {
        real = amp * cos(angle);
        imag = amp * sin(angle);
    }
}

Vector& Vector::operator+(const Vector &m)
{
    Vector temp;
    temp.real = this->real + m.real;
    temp.imag = this->imag + m.imag;
    TurnType(1);
    return temp;
}

Vector& Vector::operator-(const Vector &m)
{
    Vector temp;
    temp.real = this->real - m.real;
    temp.imag = this->imag - m.imag;
    TurnType(1);
    return temp;
}

Vector& Vector::operator*(const Vector &m)
{
    Vector temp;
    temp.amp = this->amp * m.amp;
    temp.angle = this->angle + m.angle;
    TurnType(0);
    return temp;
}

Vector& Vector::operator/(const Vector &m)
{
    Vector temp;
    temp.amp = this->amp / m.amp;
    temp.angle = this->angle - m.angle;
    TurnType(0);
    return temp;
}

Vector& Vector::operator+(const double &)
{

}

Vector& Vector::operator*(const double &m)
{
    Vector temp;
    temp.amp = this->amp * m;
    temp.angle = this->angle;
    TurnType(0);
    return temp;
}

Vector& Vector::operator/(const double &m)
{
    Vector temp;
    temp.amp = this->amp / m;
    temp.angle = this->angle;
    TurnType(0);
    return temp;
}

Vector &Vector::operator=(const Vector &)
{
    Vector temp;
    temp.amp = this->amp;
    temp.angle = this->angle;
    temp.real = this->real;
    temp.imag = this->imag;
    return temp;
}




