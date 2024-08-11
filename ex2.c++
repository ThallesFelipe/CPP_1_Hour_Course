#include <iostream>

#define STATE_TAX .04
#define COUNTY_TAX .02

using namespace std;

int main()
{
    double sales = 95000.;
    cout << "Sales before taxes: $ " << sales << "\n\n";

    double state_tax = sales * STATE_TAX;
    double county_tax = sales * COUNTY_TAX;
    cout << "State tax: $ " << state_tax << "\n";
    cout << "County tax: $ " << county_tax << "\n\n";

    double have_to_pay = state_tax + county_tax;
    cout << "Total to pay (state tax plus county tax): $ " << have_to_pay << "\n\n";

    double sales_after_taxes = sales - have_to_pay;
    cout << "Sales after taxes:  $ " << sales_after_taxes << "\n";

    return 0;
}