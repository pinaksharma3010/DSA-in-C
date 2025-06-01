#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int insert(int arr[], int n, int x, int pos)
{
    int i;
    for (i = n - 1; i>= pos - 1;
    i--)
    {
        arr[i + 1] = arr[i];
        }
        arr[pos - 1] = x;
        return n + 1;
}
int delete(int arr[], int n, int x)
{
    int i;
    for (i = 0; i<n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
if (i == n)
{
    return n;
}

for (int j = i; j < n - 1; j++)
{
    arr[j] = arr[j + 1];
}
return n-1;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5};
    int x = 100;
    int pos = 1;
    int n = 5;
    display(arr, n);
    n= insert(arr, n, x, pos);
    display(arr, n);
    n = delete (arr, n, 3);
    display(arr, n);
}