#include <iostream>
#include <vector>
using namespace std;

int factorialNumIteration(int num)
{

    int fact = 1;

    for (int i = 1; i <= num; i++)
    {

        fact = fact * i;
    }
    return fact;
}

int factByRecurrsion(int num)
{
    // int fact = 1;

    if (num <= 1)
    {
        return 1;
    }

    return num * factByRecurrsion(num - 1);
}

int main()
{
    int num = 5;
    // int ans = factorialNum(num);
    int ans = factByRecurrsion(num);

    cout << "Factorial is : " << ans;

    return 0;
}