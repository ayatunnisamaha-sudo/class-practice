#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int arr[5];

    // input values
    for (int i = 0; i < 5; i++)
    {
        arr[i] = get_int("Enter number %i: ", i + 1);
    }

    int sum = 0;

    // calculate sum
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    float average = sum / 5.0;

    printf("Sum = %i\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

