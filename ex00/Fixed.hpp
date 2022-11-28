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

    private:
        int                 fp;
        static const int    fracbit = 8;

};

#endif