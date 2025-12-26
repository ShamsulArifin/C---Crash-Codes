#include <iostream>

class Car
{
public:
  std::string maker;
  std::string name;
  std::string type;
  std::string color;
  int year;

  void honk()
  {
    std::cout << "Honk Honk!\n";
  }
  void run()
  {
    std::cout << "Vrrrrooooooooooom!\n";
  }
  void stop()
  {
    std::cout << "Car stopped!\n";
  }
};

int main()
{
  using std::cout, std::cin, std::string, std::endl;

  // object = A collection of attributes and methods
  //          They can have characteristics and could perform actions
  //          Can be used to mimic real world items (ex. Phone, Book, Car)
  //          Created from a class which acts as a blueprint

  Car jdm1;
  Car jdm2;

  jdm1.name = "Nissan Skyline R34 V-Spec II (1999)";
  jdm1.type = "Sports sedan";
  jdm1.year = 1999;
  jdm1.maker = "Nissan Motor Co., Ltd.";
  jdm1.color = "Royal Blue";

  cout << jdm1.name << endl;
  cout << jdm1.type << endl;
  cout << jdm1.year << endl;
  cout << jdm1.maker << endl;
  cout << jdm1.color << endl;

  jdm1.honk();
  jdm1.run();
  jdm1.stop();

  std::cout << " " << '\n';
  std::cout << "⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗" << '\n';
  std::cout << " " << '\n';

  jdm2.name = "Mazda RX-7";
  jdm2.type = "Two-door hatchback";
  jdm2.year = 1993;
  jdm2.maker = "Mazda Motor Corporation";
  jdm2.color = "Cosmic Purple";

  cout << jdm2.name << endl;
  cout << jdm2.type << endl;
  cout << jdm2.year << endl;
  cout << jdm2.maker << endl;
  cout << jdm2.color << endl;

  jdm2.honk();
  jdm2.run();
  jdm2.stop();

  return 0;
}