#ifndef PDS2_SAVINGS_H
  #define PDS2_SAVINGS_H

  #include <iostream>

  using namespace std;

  class SavingsAccount{

    private:
      double savings_balance;

    public:
      static float annual_savings_rate;

      SavingsAccount(double s);
      double calculate_monthly_balance();
      static void modify_interest_rate(float rate);

  };
#endif