#include <stdio.h>
int main()
{
	char P,Q,c;
	printf("������P����ֵ��"); 
	scanf("%c",&P);
	scanf("%c",&c);
	printf("������Q����ֵ��");
	scanf("%c",&Q);

	if(P=='T')
		printf("��P����ֵΪF\n");
	if(P=='F')
		printf("��P����ֵΪT\n");
	if(P=='T' && Q=='T')
	{
		printf("P��Q����ֵΪT\nP��Q����ֵΪT\nP��Q����ֵΪF\nP��Q����ֵΪT\nP?Q����ֵΪT"); 
	}
	if(P=='T' && Q=='F')
	{
		printf("P��Q����ֵΪF\nP��Q����ֵΪT\nP��Q����ֵΪT\nP��Q����ֵΪF\nP?Q����ֵΪF"); 
	}
	if(P=='F' && Q=='T')
	{
		printf("P��Q����ֵΪF\nP��Q����ֵΪT\nP��Q����ֵΪT\nP��Q����ֵΪT\nP?Q����ֵΪF"); 
	}
	if(P=='F' && Q=='F')
	{
		printf("P��Q����ֵΪF\nP��Q����ֵΪF\nP��Q����ֵΪF\nP��Q����ֵΪT\nP?Q����ֵΪT"); 
	}
	else
	{
		printf("������Ϣ����"); 
	}
} 
