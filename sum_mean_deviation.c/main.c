#include<stdio.h>
#include<math.h>
main()
{
    float a[10],*ptr,mean,std,sum=0,sumstd=0;
    int i,n;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    ptr=a;
    for(i=0;i<n;i++)ō
    {
        sum=sum+*ptr;ptr++;
    }
    mean=sum/n;
    ptr=a;
    for(i=0;i<n;i++)
    {
        sumstd=sumstd+pow((*ptr-mean),2);
        ptr++;
    }
    std=sqrt(sumstd/n);
    printf("Sum=%.3f\t",sum);
    printf("Mean=%.3f\t",mean);
    printf("Standard deviation=%.3f\t",std);
}
