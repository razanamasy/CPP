#include "iter.hpp"

int main()
{
    int intTab[4] = {1, 2, 3, 4};
    iter(intTab, 4, transform<int>);
    std::cout << std::endl;
    
    float floatTab[4] = {1.34f, -234.f, 3.14f, 4};
    iter(floatTab, 4, transform<float>);
    std::cout << std::endl;

    char charTab[5] = "ABCD";
    iter(charTab, 4, transform<char>);

    return (0);
}
