#include "savings.h"

SavingsAccount::SavingsAccount(double s){
  savings_balance = s;
}

float SavingsAccount::annual_savings_rate;

double SavingsAccount::calculate_monthly_balance(){
  return (savings_balance += savings_balance*annual_savings_rate/12);
}

void SavingsAccount::modify_interest_rate(float rate){
  annual_savings_rate = rate;
}