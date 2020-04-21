//
// Created by Danny Teel on 4/21/20.
//

#include <iostream>

class Pair
{
public:
    Pair(int length1 = rand()%100, int length2 = rand()%100)
    {
        array1[length1];
        array2[length2];
    };

    Pair(const Pair &p2)
    {
        int array1 = p2.array1[p2.length1];
        int array2 = p2.array2[p2.length2];
    };

    ~Pair();

private:
    int length1, length2;
    int *array1{ new int[length1]{} };
    int *array2{ new int[length2]{} };
};

Pair::~Pair()
{
    delete []array1;
    delete []array2;
}


int main()
{
    return 0;
};
