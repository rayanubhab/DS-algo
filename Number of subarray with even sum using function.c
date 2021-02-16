#include<stdio.h>

int count_SubArray(int array[], int n);

int main()
{
    int array[] = {2,4}; 
    int size = sizeof(array) / sizeof(array[0]); 
    int count = count_SubArray(array, size); 

    printf("SubArray = %d\n", count);

    return 0;
}

int count_SubArray(int array[], int n)
{
    int count=0,j,i;
    for(i=0; i<n;i++)
    {
        int sum=0;
        for (j=i; j<n;j++)
        {
            sum = array[j] + sum;
            if((sum )%2 == 0)
            {
                count++;
            }
        }
    }
    return count;
}
