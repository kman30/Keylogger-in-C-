#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,t,n,m,x,y,s,st,a[1200][1200],b[3000],c[3000],k,le,ee,lee,ff,kkk;
scanf("%d",&t);
    for(i=1;i<=t;i++)
        {
        scanf("%d%d",&n,&m);
        for(j=1;j<=n;j++)
            {
            for(k=1;k<=n;k++)
                {
                a[j][k]=360;
            }
            b[j]=360;
            c[j]=0;
        }
        for(j=1;j<=m;j++)
            {
            scanf("%d%d",&x,&y);
            s=6;
            if(a[x][y]>s)
                {
                a[x][y]=s;
                a[y][x]=s;
            }
        }
        scanf("%d",&st);ee=st;
        b[st]=0;
        c[st]=-1; 
        for(k=1;k<n;k++)
            {
            le=10000;lee=st;ff=0;
            for(j=1;j<=n;j++)
                {
                if(c[j]!=-1){
                if(b[j]>(b[st]+a[st][j]))
                    {
                    b[j]=b[st]+a[st][j];
                    
                }
                if((b[j]<le)&&(b[j]!=360))
                        {
                        le=b[j];
                        lee=j;
                        ff=1;
                    }
                }
            }
            if(ff==1){
            st=lee;
            c[st]=-1;}
        
        }
        kkk=-1;
        for(k=1;k<=n;k++){
            if(k!=ee){
                if((c[k]==0)||(b[k]==360))
                    printf("%d\t",kkk);
                else
                printf("%d\t",b[k]);}}
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
