// CODECHEF : OPMIN
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T != 0)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int min = arr[0], max = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        int steps = max - min;

        printf("%d\n", steps);
        T = T - 1;
    }

    return 0;
}
