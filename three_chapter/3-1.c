#include <stdio.h>

int binsearch2(int x, int v[], int n)
{
    int low, high, mid;
    int ret = -1;
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    for (;low <= high && (x - v[mid]) != 0; mid = (low + high) / 2) {
        if ((x - v[mid]) < 0)
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (x == v[mid])
        ret = mid;

    return ret;
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main(void)
{
    int v[5] = {1, 2, 3, 4, 5};
    printf("binsearch = %d\n", binsearch(5, v, 5));
    printf("binsearch2 = %d\n", binsearch2(5, v, 5));

}
