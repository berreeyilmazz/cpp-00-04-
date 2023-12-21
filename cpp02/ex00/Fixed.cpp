#include "Fixed.h"

Fixed::Fixed() {
	this->fixed_pointNumber = 0;
	std::cout << "[+] Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &a) {
	this->fixed_pointNumber = a.fixed_pointNumber;
	std::cout << "[/] Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& CopiedBy) {
	if (this != &CopiedBy) // öz atamayı önler
		this->fixed_pointNumber = CopiedBy.fixed_pointNumber;
	std::cout << "[=] Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "[--] Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_pointNumber);
}

void Fixed::setRawBits(int const raw) {
	this->fixed_pointNumber = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
