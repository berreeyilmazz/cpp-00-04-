#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
	private:
		int fixed_pointNumber;
		static const int bit = 8;
	public:
		Fixed();
		Fixed(Fixed &a);
		Fixed& operator=(const Fixed& CopiedBy);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
