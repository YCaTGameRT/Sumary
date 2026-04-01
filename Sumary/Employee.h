#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include <iostream>
#include <string>

class Employee {
public:
	virtual double Earnings() const = 0;
	virtual ~Employee() = default;
private:
	std::string name;
};

#endif