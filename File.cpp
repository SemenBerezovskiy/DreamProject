#include <iostream>
#include <string>

void Print(auto PrintableInformation)
{
    std::cout << PrintableInformation << std::endl;
    return 1;
}
int main()
{
    std::string Catty = "I love cats";
    Print(Catty);
}