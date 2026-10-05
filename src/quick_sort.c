#include <stdio.h>

#define N 8

long long comparisons = 0;
long long swap_calls = 0;
long long non_self_exchanges = 0;

void print_array(const int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d%s", a[i], (i == n - 1) ? "\n" : ", ");
    }
}

void swap(int *x, int *y)
{
    ++swap_calls;

    if (x != y)
    {
        ++non_self_exchanges;

        int temporary = *x;
        *x = *y;
        *y = temporary;
    }
}

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; ++j)
    {
        ++comparisons;

        if (a[j] <= pivot)
        {
            ++i;
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[i + 1], &a[high]);

    return i + 1;
}

void quick_sort(int a[], int low, int high)
{
    if (low < high)
    {
        int pivot_index = partition(a, low, high);

        quick_sort(a, low, pivot_index - 1);
        quick_sort(a, pivot_index + 1, high);
    }
}

int main(void)
{
    int a[N] = {324, 125, 456, 218, 102, 389, 275, 147};

    printf("Quick Sort\n");

    printf("Input : ");
    print_array(a, N);

    quick_sort(a, 0, N - 1);

    printf("Sorted: ");
    print_array(a, N);

    printf("Key comparisons: %lld\n", comparisons);
    printf("Swap calls (including self-swaps): %lld\n",
           swap_calls);
    printf("Non-self exchanges: %lld\n",
           non_self_exchanges);

    return 0;
}
