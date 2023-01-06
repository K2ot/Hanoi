// Hanoi.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
double i = 0;

void hanoi(int n, char A, char B, char C)
{
    // przekłada n krążków z A korzystając z B na C
    if (n > 0)
    {
        hanoi(n - 1, A, C, B);
        std::cout << A << " -> " << C <<" "<<++i<< std::endl;
        hanoi(n - 1, B, A, C);
    }
}

int main(int argc, char* argv[])
{
    hanoi(3, 'A', 'B', 'C');
    std::cout << i << std::endl;
    return 0;

}