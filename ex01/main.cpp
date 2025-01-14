#include "iter.hpp"

template <typename T>
void print(T  &x) {
    // return (int)x;
    std::cout << x << std::endl;
}

int main()
{
    // int tab[] = {0, 1, 2, 3, 4};
    char tab2[] = {'a', 'b', 'c', 'd', 'e'};
    ::iter(tab2, 5, ::print<char>);
    return 0;
}