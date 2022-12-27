#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>

class Fixed {
    public:
        Fixed( void );
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed(const Fixed &obj);
        Fixed &operator=(const Fixed &t);
        ~Fixed(void);
        Fixed( const int raw );
        Fixed( const float raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        bool    operator==(const Fixed &rhs) const;
        bool    operator!=(const Fixed &rhs) const;
        bool    operator>(const Fixed &rhs) const;
        bool    operator>=(const Fixed &rhs) const;
        bool    operator<(const Fixed &rhs) const;
        bool    operator<=(const Fixed &rhs) const;
        Fixed   operator+(const Fixed &rhs);    
        Fixed   operator-(const Fixed &rhs);    
        Fixed   operator*(const Fixed &rhs);    
        Fixed   operator/(const Fixed &rhs);
        Fixed   operator++();
        Fixed   operator++(int);

        static Fixed            &min(Fixed &a, Fixed &b);
        static const Fixed      &min(const Fixed &a, const Fixed &b);
        static Fixed            &max(Fixed &a, Fixed &b);
        static const Fixed      &max(const Fixed &a, const Fixed &b);



    private:
        int                 fp;
        static const int    fracbit = 8;

};

std::ostream    &operator<<(std::ostream &output, const Fixed &f);

#endif
