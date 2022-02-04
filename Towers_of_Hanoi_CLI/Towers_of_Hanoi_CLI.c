#include <stdio.h>

void print(int from, int to)
{
    printf("%d -> %d\n", from, to);
}

void recursive_hanoi(int count, int start, int end)
{
    if (count == 1)
        print(start, end);

    else
    {
        int other = 6 - start - end;
        recursive_hanoi(count - 1, start, other);
        print(start, end);
        recursive_hanoi(count - 1, other, end);
    }
}

int main()
{
    int count;

    printf("How many discs are there on 1. tower: ");
    scanf_s("%d", &count);

    recursive_hanoi(count, 1, 3);
}
