/** Read an undetermined number of pairs of integer values. Write a message for
each pair indicating if this two numbers are in ascending or descending order.
Input
The input file contains several test cases. Each test case contains two integer
numbers X and Y. The input will finished when X = Y.
Output
For each test case print “Crescente”, if the values X and Y are in ascending order,
otherwise print “Decrescente”. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    scanf("%d %d",&a,&b);

    if ( a > b)
    {
        printf("Decrescente");
    }
    else if (a < b)
    {
        printf("Crescente");
    }
    else
    {
        printf("");
    }
}
