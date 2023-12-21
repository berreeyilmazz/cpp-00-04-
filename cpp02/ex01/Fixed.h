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
		Fixed(const int i);
		Fixed(const float f);
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

void	printInsertion(float f);

#endif

