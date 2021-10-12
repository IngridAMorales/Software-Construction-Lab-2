#include <iostream>
#include <string>
#include "c-echo.h"

int main()
{
<<<<<<< HEAD

    std::string name;
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Hello " << name << "!" << std::endl;

    return 0;

>>>>>>> 8bc74f8086892f13d803ec6d3cfed7e0c47b1c08
}
int main(int argv, char** argc) {
	std::cout<< "Count of output: " << count(echo(argv,argc)) <<std::endl;
}
