#include <iostream>

void salam(std::string name);     //      <-- function declaration

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    // function = a block of reusable code

    salam("Omor");                        //       <-- function calling
    salam("Talha");
    salam("Rouhi");

    return 0;
}

//    ↓     function definition  
void salam(std::string name)      //      <-- function signature
{
    std::cout << "Assalamu alaikum" << std::endl;
    std::cout << "wa rahmatullahi" << std::endl;
    std::cout << "wa barakatuh" << std::endl;
    std::cout << "wa jannatuh" << std::endl;
    std::cout << "wa magfiratuh " << name << "\n\n";
}