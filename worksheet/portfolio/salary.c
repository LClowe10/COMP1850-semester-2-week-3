
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Lucas Parbott Clowe
 * ID: 201972343
 */

 int main( void ) {

    // define and initialise variables for the problem data
    float salary = 36250;
    float national_insurance = 0.08;
    float tax_rate = 0.15;

    // calculate the deductions and final take-home salary
    float national_insurance_contribution = salary * national_insurance;

    // if the salary with NI taken is greater than 12500 then calculate the tax on the amount over
    if ((salary - national_insurance_contribution) > 12500) {
       float tax_contribution = (salary - national_insurance_contribution) * tax_rate;
    }

    // else set the tax to 0
    else {
      float tax_contribution = 0;
    }
    
    float take_home_salary = salary - national_insurance_contribution - tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%f\n", salary);
    printf("NI contribution £%f\n", national_insurance_contribution);
    printf("Tax contribution £%f\n",tax_contribution);
    printf("Take home salary £%f\n",take_home_salary);

    return 0;
 }