#include <stdio.h>

#define N 8

long long comparisons = 0;
long long writes_to_array = 0;

void print_array(const int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d%s", a[i], (i == n - 1) ? "\n" : ", ");
    }
}

void merge(int a[], int left, int middle, int right)
{
    int left_size = middle - left + 1;
    int right_size = right - middle;

    int left_part[N], right_part[N];

    for (int i = 0; i < left_size; ++i)
        left_part[i] = a[left + i];

    for (int j = 0; j < right_size; ++j)
        right_part[j] = a[middle + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < left_size && j < right_size)
    {
        ++comparisons;

        if (left_part[i] <= right_part[j])
            a[k++] = left_part[i++];
        else
            a[k++] = right_part[j++];

        ++writes_to_array;
    }

    while (i < left_size)
    {
        a[k++] = left_part[i++];
        ++writes_to_array;
    }

    while (j < right_size)
    {
        a[k++] = right_part[j++];
        ++writes_to_array;
    }
}

void merge_sort(int a[], int left, int right)
{
    if (left >= right)
        return;

    int middle = left + (right - left) / 2;

    merge_sort(a, left, middle);
    merge_sort(a, middle + 1, right);

    merge(a, left, middle, right);
}

int main(void)
{
    int a[N] = {324, 125, 456, 218, 102, 389, 275, 147};

    printf("Merge Sort\n");

    printf("Input : ");
    print_array(a, N);

    merge_sort(a, 0, N - 1);

    printf("Sorted: ");
    print_array(a, N);

    printf("Key comparisons: %lld\n", comparisons);
    printf("Writes to main array during merging: %lld\n",
           writes_to_array);

    return 0;
}
