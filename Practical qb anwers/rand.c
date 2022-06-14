#include <stdio.h>
#include<stdlib.h>
void main()
{
    int a[3][3] = { {1,2,3}, {1,2,3}, {1,2,3} };
    int r1,r2,r3,c1,c2,c3,d;
    r1=r2=r3=c1=c2=c3=d=0;
    

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
        
            if (i=0)
            r1=r1+a[0][0];
            if (i=1)
            r2=r2+a[1][j];
            if (i=2)
            r3=r3+a[i][j];
            
            if (j=0)
            c1=c1+a[i][j];
            if (j=1)
            c2=c2+a[i][j];
            if (j=2)
            c2=c2+a[i][j];
            
            if(i=j)
            d=d+a[i][j];
            
        }
    }
    printf("R1 R2 R3 are %d %d %d\n",r1,r2,r3);
    printf("C1 C2 C3 are %d %d %d\n",c1,c2,c3);
    printf("Sum of diagnal elemnts is %d\n",d);
}