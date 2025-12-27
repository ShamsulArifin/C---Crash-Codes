#include <iostream>
#include <time.h>

class Watch
{
public:
  bool running = true;
  void currentTime()
  {
    time_t ct = time(0);
    std::string currenttime = ctime(&ct);

    std::cout << "Current time: " << currenttime << std::endl;
  }
};

class MechanicalWatch : public Watch
{
public:
  void movement()
  {
    std::cout << "This is automatic movement\n";
  }
};

class DigitalWatch : public Watch
{
public:
  void movement()
  {
    std::cout << "This is digital watch, it has no movement. Powered by battery\n";
  }
};

int main()
{
  using std::cout, std::cin, std::string, std::endl;

  // inheritance = A class can receive attributes and methods from another class
  //               Children classes inherit from parent class
  //               Help to reuse similar code within multiple classes

  MechanicalWatch Seiko;
  DigitalWatch Casio;

  cout << Seiko.running << endl;
  Seiko.currentTime();
  Seiko.movement();

  cout << Casio.running << endl;
  Casio.currentTime();
  Casio.movement();

  return 0;
}