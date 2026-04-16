#ifndef _SALARIEDEMPLOYEE_H_
#define _SALARIEDEMPLOYEE_H_

#include <iostream>
#include <string>
#include <format>

class SalariedEmployee {
public:
	SalariedEmployee(std::string name, double salary, double taxRate, int joinDay, int joinMounth, int joinYear);
	
	void SetName(std::string name);
	void SetSalary(double salary);
	void SetTaxRate(double taxRate);
	void SetJoinDay(int joinDay);
	void SetJoinMounth(int joinMounth);

	std::string GetName() const;
	double GetSalary() const;
	double GetTax() const;
	double GetYearsTogetherUpSalary(int nowYear) const;

	void UpSalary(double plusSalary);
	double Earnings(int nowYear) const;
	std::string toString() const;

	virtual ~SalariedEmployee() = default;
protected:
	double taxRate;
	int joinDay, joinMounth, joinYear;
private:
	std::string name{};
	double salary = 0.0;
};

std::ostream& operator<< (std::ostream& out, const SalariedEmployee& obj);

#endif