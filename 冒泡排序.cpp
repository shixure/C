#include <stdio.h>  
int main()  
{  
    int i,j,temp,n;     
    printf("please enter the number of digits:\n") ;  
    scanf("%d",&n);//输入要排序的数的个数  
      
    int a[n];  
    printf("please enter the numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);//输入要排序的数 
    
    for(j=0;j<n-1;j++)  
    {  
        for(i=0;i<n-1-j;i++)  
        if(a[i+1]<a[i])//如果前一个数大于后一个数，则交换两数的位置 
        {  
            temp=a[i];  
            a[i]=a[i+1];  
            a[i+1]=temp;  
        }  
    }  
    printf("output:\n");   
    for(i=0;i<n;i++)  
    printf("%d ",a[i]);//从小到大输出 
} 
