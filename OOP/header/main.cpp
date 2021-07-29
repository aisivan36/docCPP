#include "Account.h"
#include <iostream>

int main() {
  Account ivan_account;
  ivan_account.set_name("Ivan's account");
  ivan_account.set_balance(2300.0);

  if (ivan_account.deposit(1000.0))
    std::cout << "deposit is Okay" << '\n';
  else
    std::cout << "deposit is not Okay" << '\n';

  if (ivan_account.withdraw(1500.0))
    std::cout << "Withdrawal is Okay" << '\n';
  else
    std::cout << "You are going to suffer" << '\n';

  if (ivan_account.withdraw(2000.0))
    std::cout << "Withdraw is Okay" << '\n';
  else
    std::cout << "That's not sufficiently big deal" << '\n';

  return 0;
}