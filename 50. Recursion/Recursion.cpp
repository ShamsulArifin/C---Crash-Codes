#include <iostream>

void walk(int steps);

int main()
{
  using std::cout, std::cin, std::string, std::endl;

  // recursion = a programming technique where a function
  //             invokes itself from within
  //             break a complex concept into a repeatable single step

  // (ITERATIVE VS RECURSIVE)

  // advantages = less code and is cleaner
  //              useful for storing and searching algorithms

  // disadvantages = uses more memory
  //                 slower

  walk(100);

  return 0;
}

// void walk(int steps)
// {
//   for (int i = 0; i <= steps; i++)
//   {
//     std::cout << "You take a step! " << i << "\n";
//   }
// }

void walk(int steps)
{
  if (steps > 0)
  {
    std::cout << "You take a step!\n";
    walk(steps - 1);
  }
}