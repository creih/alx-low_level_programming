#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - sqrt of the number
 * @n: nbr passed
 * Return: square root of n
 */
#include <stdio.h>

int _sqrt_recursive(int n, int low, int high)
{
    if (low > high)
    {
        return -1; // Number doesn't have a natural square root
    }

    int mid = (low + high) / 2;
    int mid_square = mid * mid;

    if (mid_square == n)
    {
        return mid; // Found the square root
    }
    else if (mid_square > n)
    {
        return _sqrt_recursive(n, low, mid - 1); // Search in the lower half
    }
    else
    {
        return _sqrt_recursive(n, mid + 1, high); // Search in the upper half
    }
}

int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1; // Negative numbers don't have a natural square root
    }
    if (n == 0 || n == 1)
    {
        return n; // 0 and 1 are their own square roots
    }

    return _sqrt_recursive(n, 0, n);
}
