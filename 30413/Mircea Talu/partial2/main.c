#include <stdio.h>
#include <stdlib.h>

int numberOfSolutions(int n, int m)
{
    if(n < 0 || m < 0)
        return 0;
    if(n == 0 && m == 0)
        return 1;
    else
        return numberOfSolutions(n, m-1) + numberOfSolutions(n-1, m-1) + numberOfSolutions(n-1, m);
    // We can reach a cell in the matrix from the different places
    // from the west, from the south or from the southwest
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", numberOfSolutions(n-1, m-1));
    return 0;
}
