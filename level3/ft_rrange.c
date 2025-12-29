#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
        int     len;
        int     i;
        int     *range;

        len = 0;
        if ((end - start) < 0)
                len = ((end -start) * -1) + 1;
        else
                len = (end - start) + 1;
        range = (int *)malloc(len * sizeof(int));
        if (!range)
                return (0);
        i = 0;
        while (i < len)
        {
                if (end < start)
                        range[i] = end++;
                else
                        range[i] = end--;
                i++;
        }
        return (range);
}

int main(void)
{
    int s = 3;
    int e = 23;
    int *arr;
    int len;
    int i;

    arr = ft_rrange(s, e);

    if (!arr)
        return (1);

    len = (e - s) + 1;
    if (len < 0)
        len = -len + 1;

    i = 0;
    while (i < len)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    free(arr);
    return (0);
}
