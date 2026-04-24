#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int arr[5];

    // input array
    for (int i = 0; i < 5; i++)
    {
        arr[i] = get_int("Enter number %i: ", i + 1);
    }

    // assume first element is minimum
    int min = arr[0];

    // find minimum
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Minimum = %i\n", min);

    return 0;
}
