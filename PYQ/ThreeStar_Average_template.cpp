#include <iostream>
using namespace std;

// a template function that returns the average of all the elements of an array.
// The arguments to the function should be the array name and the size of the array (type int).
template <typename T>
double average(T elements[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += elements[i];
    }
    return sum / (double)size;
}
int main()
{
    // In main(), exercise the function with arrays of type int, long, double, and char.
    int integers[] = {1, 2, 1, 4, 5};
    double doubles[] = {5.1, 5.5, 2.9, 1.7, 8.45};
    long longs[] = {2147483, 456764, 132684, 4445, 78754};
    char chars[] = {'a', 'b', 'c', 'd', 'e'};

    cout << "Average of integers: " << average<int>(integers, 5) << endl;
    cout << "Average of doubles: " << average<double>(doubles, 5) << endl;
    cout << "Average of long: " << average<long>(longs, 5) << endl;
    cout << "Average of chars: " << average<char>(chars, 5) << endl;

    system("pause");
}