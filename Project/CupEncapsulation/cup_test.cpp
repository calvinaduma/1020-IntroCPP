#include <iostream>
#include "Cup.h"
using std::cout;
using std::endl;

// the macro name definition and substitution capability of the
//   preprocessor is used to provide aliases for the Decrease()
//   and Increase() methods 

#define Drink Decrease
#define Sip Decrease
#define Pour Decrease
#define Spill Decrease
#define Fill Increase

int main(){
  Cup small_cup;
  Cup coffee_cup {9.0};
  Cup red_solo_cup {18.0,12.0};
  Cup bad_cup_1 {1.5,-3.0};
  Cup bad_cup_2 {5.0,-3.0};
  Cup bad_cup_3 {-5.0,3.0};
  Cup bad_cup_4 {6.0,7.0};

  double amount;

  cout << "bad cup 1 {1.5,-3.0} = both parms are bad" << endl;
  cout << "  capacity = " << bad_cup_1.Capacity() << " oz." << endl;
  cout << "  contains = " << bad_cup_1.Contains() << " oz." << endl;
  cout << endl;

  cout << "bad cup 2 {5.0,-3.0} = initial amount is bad" << endl;
  cout << "  capacity = " << bad_cup_2.Capacity() << " oz." << endl;
  cout << "  contains = " << bad_cup_2.Contains() << " oz." << endl;
  cout << endl;

  cout << "bad cup 3 {-5.0,3.0} = cup size is bad" << endl;
  cout << "  capacity = " << bad_cup_3.Capacity() << " oz." << endl;
  cout << "  contains = " << bad_cup_3.Contains() << " oz." << endl;
  cout << endl;

  cout << "bad cup 4 {6.0,7.0} = initial amount is too large" << endl;
  cout << "  capacity = " << bad_cup_4.Capacity() << " oz." << endl;
  cout << "  contains = " << bad_cup_4.Contains() << " oz." << endl;
  cout << endl;

  cout << "small cup" << endl;
  cout << "  capacity = " << small_cup.Capacity() << " oz." << endl;
  cout << "  contains = " << small_cup.Contains() << " oz." << endl;
  cout << endl;

  cout << "coffee cup" << endl;
  cout << "  capacity = " << coffee_cup.Capacity() << " oz." << endl;
  cout << "  contains = " << coffee_cup.Contains() << " oz." << endl;
  cout << endl;

  cout << "red solo cup" << endl;
  cout << "  capacity = " << red_solo_cup.Capacity() << " oz." << endl;
  cout << "  contains = " << red_solo_cup.Contains() << " oz." << endl;
  cout << endl;

  cout << "attempt to add 2 oz. to the red solo cup" << endl;
  amount = red_solo_cup.Fill(2.0);
  cout << "  capacity = " << red_solo_cup.Capacity() << " oz." << endl;
  cout << "  contains = " << red_solo_cup.Contains() << " oz." << endl;
  cout << "  filled   = " << amount << " oz." << endl;
  cout << endl;

  cout << "attempt to add -2 oz. to the red solo cup" << endl;
  amount = red_solo_cup.Fill(-2.0);
  cout << "  capacity = " << red_solo_cup.Capacity() << " oz." << endl;
  cout << "  contains = " << red_solo_cup.Contains() << " oz." << endl;
  cout << "  filled   = " << amount << " oz." << endl;
  cout << endl;

  cout << "attempt to add 12 oz. to the coffee cup" << endl;
  amount = coffee_cup.Fill(12.0);
  cout << "  capacity = " << coffee_cup.Capacity() << " oz." << endl;
  cout << "  contains = " << coffee_cup.Contains() << " oz." << endl;
  cout << "  filled   = " << amount << " oz." << endl;
  cout << endl;

  cout << "drink 4 oz. from the coffee cup" << endl;
  amount = coffee_cup.Drink(4.0);
  cout << "  capacity = " << coffee_cup.Capacity() << " oz." << endl;
  cout << "  contains = " << coffee_cup.Contains() << " oz." << endl;
  cout << "  drank    = " << amount << " oz." << endl;
  cout << endl;

  cout << "drink 4 oz. more from the coffee cup" << endl;
  amount = coffee_cup.Drink(4.0);
  cout << "  capacity = " << coffee_cup.Capacity() << " oz." << endl;
  cout << "  contains = " << coffee_cup.Contains() << " oz." << endl;
  cout << "  drank    = " << amount << " oz." << endl;
  cout << endl;

  cout << "attempt to drink 4 oz. more from the coffee cup" << endl;
  amount = coffee_cup.Drink(4.0);
  cout << "  capacity = " << coffee_cup.Capacity() << " oz." << endl;
  cout << "  contains = " << coffee_cup.Contains() << " oz." << endl;
  cout << "  drank    = " << amount << " oz." << endl;
  cout << endl;

  return 0;
}
