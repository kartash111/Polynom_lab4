#pragma once
#include "List.h"
#include <iostream>
#include <string>
class Monom
{
public:
	Monom(const Monom& copyMonom);
	Monom(std::string Coeff, std::string Power);
	Monom(double Coeff, int Power);
	friend bool operator==(const Monom&, const Monom&);
	Monom operator+(const Monom& right);
	Monom operator-(const Monom& right);
	Monom operator*(const Monom& right);
	double getCoeff() const { return coeff; }
	int getPower() const { return power; }
	void setCoeff(double Coeff) { coeff = Coeff; }
	void setPower(int Power) { power = Power; }
private:
	double coeff;
	int power;
};

class Polynomial
{
public:
	Polynomial(const Polynomial& copyPol);
	Polynomial() : size(0) {}
	friend std::istream& operator>> (std::istream& in, Polynomial& obj);
	friend std::ostream& operator<< (std::ostream& out, const Polynomial& obj);
	Polynomial& operator=(const Polynomial&);
	Polynomial operator+(const Polynomial& right);
	Polynomial operator-(const Polynomial& right);
	Polynomial operator*(const Polynomial& right);
	double calculate(int x);
	int getSize() const { return size; }
	void setPol(std::string pol);
	Monom returnMonom(int index) const;
private:
	List<Monom> data;
	int size;
	void addMonom(Monom);
};