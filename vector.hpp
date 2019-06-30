#ifndef VECTOR_HPP_
#define VECTOR_HPP_

template<typename _Type>
class vector
{
public:
    vector(_Type x, _Type y, _Type z) :
        _x(x), _y(y), _z(z)
    {

    }

    _Type const &x() const { return x_; }
    _Type const &y() const { return y_; }
    _Type const &z() const { return z_; }

private:
    _Type x;
    _Type y;
    _Type z;
};

#endif
