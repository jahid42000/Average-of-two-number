#include <stdio.h>
int main()
{
    int a,b,sum;
    float avg;
    printf("Enter the value : \n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("The results of sum is :%d\n",sum);

    avg = (float)sum /2;
    printf("The results of average is : %.2f\n",avg);


}
