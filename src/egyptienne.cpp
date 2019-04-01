#include	<egyptienne.hpp>

fraction_egyptienne::fraction_egyptienne(float newValue) {
  this->_value = newValue;
}

fraction_egyptienne::fraction_egyptienne(double newValue) {
  this->_value = newValue;
}


fraction_egyptienne::fraction_egyptienne(int newValue) {
  this->_value = newValue;
}

fraction_egyptienne::~fraction_egyptienne() {}

float	fraction_egyptienne::getValue() const {
  return (this->_value);
}

void	fraction_egyptienne::setValue(float newValue) {
  this->_value = newValue;  
}

fraction_egyptienne::operator float () const {
  return (this->_value);
}

std::ostream &operator<<(std::ostream &out, const fraction_egyptienne &obj) {

  float nbr = obj.getValue();
  int entier = std::floor(nbr);
  int x = 2;
  
  nbr -= entier;
  out << entier;
  while (nbr > 0.0 && x < 10000)
    {
      if (nbr >= (1.0/x)) {
	out << " + " << "1/" << x;
	nbr -= 1.0/x;
      }
      x++;
    }
  return (out);
}

fraction_egyptienne operator-(const fraction_egyptienne &left, const fraction_egyptienne &right) {
  
  if ((left.getValue() - right.getValue()) < 0) {
    std::string tmp = "fraction_egyptienne: " + std::to_string(left.getValue() - right.getValue()) + " est negatif";
      throw std::runtime_error(tmp);
  }
  return fraction_egyptienne(left.getValue() - right.getValue());
}

fraction_egyptienne operator+(const fraction_egyptienne &left, const fraction_egyptienne &right) {
  return fraction_egyptienne(left.getValue() + right.getValue());
}

fraction_egyptienne operator/(const fraction_egyptienne &left, const fraction_egyptienne &right) {
  return fraction_egyptienne(left.getValue() / right.getValue());
}

fraction_egyptienne operator*(const fraction_egyptienne &left, const fraction_egyptienne &right) {
  return fraction_egyptienne(left.getValue() * right.getValue());
}
