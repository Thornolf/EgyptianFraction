#ifndef		_EGYPTIENNE_HPP_
# define	_EGYPTIENNE_HPP_

#include	<iostream>
#include	<cmath>

class			fraction_egyptienne {
private:
  float			_value;
public:
  fraction_egyptienne(float);
  fraction_egyptienne(double);
  fraction_egyptienne(int);
  
  void			setValue(float);
  float			getValue() const;
  
  virtual ~fraction_egyptienne();
  operator float() const;  
};

std::ostream		&operator<<(std::ostream &out, const fraction_egyptienne &obj);
fraction_egyptienne	operator-(const fraction_egyptienne &left, const fraction_egyptienne &right);
fraction_egyptienne	operator+(const fraction_egyptienne &left, const fraction_egyptienne &right);
fraction_egyptienne	operator/(const fraction_egyptienne &left, const fraction_egyptienne &right);
fraction_egyptienne	operator*(const fraction_egyptienne &left, const fraction_egyptienne &right);

#endif			/* _EGYPTIENNE_HPP_ */
