#include <stdio.h>   
int main()  
{  
    int temp,i,j;  
    int a[5];  
    printf("please enter the numbers:\n");
    for(i=0;i<5;i++)  
    scanf("%d",&a[i]);//����Ҫ�������   
      
    for(i=0;i<5;i++)  
    {  
        for(j=i+1;j<5;j++)  
        {  
            if(a[j]<a[i]) //���ѡȡ�������ڸ������򽻻����� 
            {  
            temp=a[j];  
            a[j]=a[i];  
            a[i]=temp;    
            }  
        }  
    }  
    printf("output:\n");
    for(i=0;i<5;i++)  
    printf("%d ",a[i]);//��С�������
}  
