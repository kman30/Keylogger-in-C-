#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,d_min = -1, d ; 
    scanf("%d",&n);
    int *A = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
    {
       scanf("%d",&A[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(A[i] == A[j])
            {
                d = ((i > j)?(i - j):(j - i));
                if(d_min == -1)
                    d_min = d;
                else
                    d_min = (d < d_min)? d :d_min;
              //  printf("d: %d d_min: %d",d,d_min);
            }
        }
    }
    printf("%d",d_min);
    return 0;
}