#include <stdio.h>  
int main()  
{  
    int i,j,temp,n;     
    printf("please enter the number of digits:\n") ;  
    scanf("%d",&n);//����Ҫ��������ĸ���  
      
    int a[n];  
    printf("please enter the numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);//����Ҫ������� 
    
    for(j=0;j<n-1;j++)  
    {  
        for(i=0;i<n-1-j;i++)  
        if(a[i+1]<a[i])//���ǰһ�������ں�һ�������򽻻�������λ�� 
        {  
            temp=a[i];  
            a[i]=a[i+1];  
            a[i+1]=temp;  
        }  
    }  
    printf("output:\n");   
    for(i=0;i<n;i++)  
    printf("%d ",a[i]);//��С������� 
} 
