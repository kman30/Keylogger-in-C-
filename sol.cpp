#include<stdio.h>
#include<stdlib.h>
#include<vector>
int main(){ int arr[6][6],sum=0,max=-76,k=0,i,j; for(int arr_i = 0; arr_i < 6; arr_i++){ for(int arr_j = 0; arr_j < 6; arr_j++){
scanf("%d",&arr[arr_i][arr_j]); } } for(i=0;i<4;i++)
for (j=0;j<4;j++) {
sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]; if(sum>max) max=sum; sum=0;
}
printf("%d",max);
return 0; }