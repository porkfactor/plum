#ifndef VECTOR_HPP_
#define VECTOR_HPP_

// TODO: need type-based square / square-root

template<typename _Type>
class vector
{
public:
    vector() : x_(0), y_(0), z_(0)
    {

    }

    vector(_Type _x, _Type _y, _Type _z) :
        x_(_x), y_(_y), z_(_z)
    {

    }

    _Type const &x() const { return x_; }
    _Type const &y() const { return y_; }
    _Type const &z() const { return z_; }

    _Type magnitude()
    {
        return sqrt(sqr(x_) + sqr(y_) + sqr(z_));
    }

    vector &normal()
    {
        _Type m(magnitude());

        x_ /= m;
        y_ /= m;
        z_ /= m;

        return *this;
    }

    vector &normal() const
    {
        vector t(*this);

        return t.normal();
    }

    bool operator == (vector const &v) const
    {
        return (x_ == v.x_) && (y_ == v.y_) && (z_ == v.z_);
    }

    bool operator != (vector const &v) const
    {
        return (x_ != v.x_) || (y_ != v.y_) || (z_ != v.z_);
    }

    vector &operator += (vector const &r)
    {
        x_ += r.x_;
        y_ += r.y_;
        z_ += r.z_;

        return *this;
    }

    vector &operator -= (vector const &r)
    {
        x_ -= r.x_;
        y_ -= r.y_;
        z_ -= r.z_;

        return *this;
    }

    vector &operator ^= (vector const &r)
    {
        return *this;
    }

private:
    _Type x_;
    _Type y_;
    _Type z_;
};

template<typename _Type>
inline vector<_Type> operator + (vector<_Type> l, vector<_Type> const &r)
{
    return l += r;
}

template<typename _Type>
inline vector<_Type> operator - (vector<_Type> l, vector<_Type> const &r)
{
    return l -= r;
}

template<typename _Type>
inline vector<_Type> operator * (vector<_Type> const &l, _Type const &t)
{
    return vector<_Type>(l.x() * t, l.y() * t, l.z() * t);
}

template<typename _Type>
inline double dot(vector<_Type> const &l, vector<_Type> const &r)
{
    return (l.x() * r.x()) + (l.y() * r.y()) + (l.z() * r.z());
}

template<typename _Type>
inline vector<_Type> cross(vector<_Type> const &l, vector<_Type> const &r)
{
    return vector<_Type>(
        (l.y() * r.z()) - (l.z() * r.y()),
        (l.z() * r.x()) - (l.x() * r.z()),
        (l.x() * r.y()) - (l.y() * r.x()));
}

#endif
