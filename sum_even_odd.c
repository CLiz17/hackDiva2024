#include <stdio.h>

int sum_even_odd(int arr[], int n)
{
    int sum_even = 0, sum_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            sum_even += arr[i];
        else
            sum_odd += arr[i];
    }
    return sum_even * 1000 + sum_odd;
}

int main()
{
    int n;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    int result, sum_even, sum_odd;
    result = sum_even_odd(arr, n);
    sum_even = result / 1000;
    sum_odd = result % 1000;
    printf("%d\n", sum_even);
    printf("%d\n", sum_odd);
    return 0;
}