#include<stdio.h>

int main()
{
     int n=0,a[200];
     scanf("%d",&n);
     for(int i=0;i<n;scanf("%d",&a[i++]));
     for(int i=0;i<n;i++);
     {
        if(a[i]%5==0){
           printf("num divisible by 5 are:%d\n\n",a[i]);

        }
     }

 

}