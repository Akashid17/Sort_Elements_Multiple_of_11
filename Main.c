
#include<stdio.h>
#include <stdlib.h>

void Display(int iArr[], int iLength)
{
    for(int j = 0; j < iLength; j++)
    {
        if(iArr[j] % 11 == 0)
        {
            printf("%d\t",iArr[j]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iResult = 0;
    int *p = NULL;

    printf("Enter Count of Elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to Allocate Memory\n");
        return -1;
    }

    printf("Enter %d Elements\n",iSize);

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&p[i]);
    }

    Display(p,iSize);

    free(p);

    return 0;
}