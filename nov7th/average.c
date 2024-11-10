#include<stdio.h>

int main()
{
    int n =0,a[100],sum;
    double avg=0;
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&a[i++]));

    for(int i=0;i<n;sum+=a[i++]);
    avg=(double)sum/n;
    printf("%lf",avg);
    return 0;

}