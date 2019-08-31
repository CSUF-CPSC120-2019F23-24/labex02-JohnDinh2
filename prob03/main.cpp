// Name: John Dinh
// This program calculates the tax and tip on a restaurant bill.
#include <iostream>
int main()
{
  double mealCost;
  double tax;
  double tip;
  double total;
  std::cout << "How much was the meal?" << '\n'; //ask for meal cost
  std::cin >> mealCost;
  tax = mealCost * .0775; //calcuate tax
  tip = mealCost * .20; //calculate tip
  total = tip + tax + mealCost; //calculate total
  std::cout << "Tip:\t" << "$" << tip << '\n';
  std::cout << "Tax:\t" << "$" << tax << '\n';
  std::cout << "Total:\t" << "$" << total <<'\n';
  return 0;
}
