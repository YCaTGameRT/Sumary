#ifndef _SALARIEDEMPLOYEE_H_
#define _SALARIEDEMPLOYEE_H_

#include <iostream>
#include <string>
#include <format>

class SalariedEmployee {
public:
	SalariedEmployee(std::string name, double salary);
	
	void SetName(std::string name);
	void SetSalary(double salary);

	std::string GetName() const;
	double GetSalary() const;

	double Earnings() const;
	std::string toString() const;
private:
	std::string name{};
	double salary = 0.0;
};

#endif