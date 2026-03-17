#ifndef _SALARIEDCOMMISSIONEMPLOYEE_H_
#define _SALARIEDCOMMISSIONEMPLOYEE_H_

#include "SalarieDemployee.h"
class SalariedCommissionEmployee : public SalariedEmployee {
public:
	SalariedCommissionEmployee(std::string name, double salary, double sales, double commissionRate);

	void SetSales(double sales);
	void SetCommissionRate(double commissionRate);

	double GetSales() const;
	double GetCommissionRate() const;

	double Earnings() const;
	std::string toString() const;
private:
	double sales = 0.0, commissionRate = 0.0;
};

#endif