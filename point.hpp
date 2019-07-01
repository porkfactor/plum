#ifndef POINT_HPP_
#define POINT_HPP_

#include "vector.hpp"

template<typename _Type>
class point
{
public:
    point() : x_(0), y_(0), z_(0)
    {

    }

    point(_Type _x, _Type _y, _Type _z) :
        x_(_x), y_(_y), z_(_z)
    {
        
    }
    
    _Type const &x() const { return x_; }
    _Type const &y() const { return y_; }
    _Type const &z() const { return z_; }

    bool operator == (point const &v)
    {
        return (x_ == v.x_) && (y_ == v.y_) && (z_ == v.z_);
    }

    bool operator != (point const &v)
    {
        return (x_ != v.x_) || (y_ != v.y_) || (z_ != v.z_);
    }

    template<typename _Other>
    point &operator += (vector<_Other> const &v)
    {
        x_ += v.x();
        y_ += v.y();
        z_ += v.z();

        return *this;
    }

    template<typename _Other>
    point &operator -= (vector<_Other> const &v)
    {
        x_ -= v.x();
        y_ -= v.y();
        z_ -= v.z();

        return *this;
    }

private:
    _Type x_;
    _Type y_;
    _Type z_;
};

template<typename _Type>
inline point<_Type> operator + (point<_Type> l, vector<_Type> const &r)
{
    return l += r;
}

template<typename _Type>
inline point<_Type> operator - (point<_Type> l, vector<_Type> const &r)
{
    return l -= r;
}

#endif
