#pragma once
class Employee {
public:
	virtual double Earnings() const = 0;
	virtual ~Employee() = default;
private:
	std::string name;
};

