#include <iostream>
// using cout instead of println because it's easier to work with pointers through cout
using std::cout;

auto main() -> int {
  int variable = 39;
  cout << "value of the variable: " << variable << '\n';
  // use '&' prefix to get an address of an variable
  cout << "address of the variable: " << &variable << '\n';

  // <type of variable> *<pointer_name> = &<variable_name>;
  int *pointer = &variable;
  // auto works too!
  auto autoPointer = &variable;

  cout << "the value of the pointer is address of variable it points to: "
       << pointer << '\n';

  // add '*' prefix to get the value
  cout << "use 'dereference' to get a value stored in the variable through pointer: "
       << *pointer << '\n';

  cout << "pointers have their own addresses: " << &pointer << '\n';

  // use dereference ('*') to change variable's value through pointer
  *pointer = 93;
  cout << "new variable value: " << variable << '\n';
  return 0;
}
