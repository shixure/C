/*����10������Ԫ�ص����Ա�L={1��2��3��10}ָ���ڵ�2λ�ò���Ԫ��25��Ȼ��ɾ����4��λ���ϵ�Ԫ�أ�
�ֱ���ʾ�������������Ա�˳���ʾ��ʵ��*/
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100
typedef int DataType;

typedef struct
{
	DataType list[MaxSize];
	int size;
} SeqList;

void ListInitiate(SeqList *L)
{
	L->size = 0; /*�����ʼ����Ԫ�ظ���*/
}

int creat(SeqList *L)
{
	int i;
	printf("input the datas:");
	for (i = 0; i < 10; i++)
		scanf("%d", &L->list[i]);
	return 1;
}

int ListLength(SeqList L)

{
	return L.size;
}
int ListInsert(SeqList *L, int i, DataType x)
{
	int j;
	if (i < 0 || i > L->size)
	{
		printf("i is error");
		return 0;
	}
	for (j = L->size; j > i - 1; j--)
		L->list[j] = L->list[j - 1]; /*���κ���*/
	L->list[i] = x;					 /*����x*/
	L->size++;						 /*Ԫ�ظ�����1*/
	return 1;
}

int ListDelete(SeqList *L, int i, DataType *x)
{
	int j;

	if (L->size <= 0)
	{
		printf("˳����ѿգ��޷�ɾ��");
		return 0;
	}
	else
		*x = L->list[i]; /*����ɾ����Ԫ�ص�x��*/
	for (j = i + 1; j <= L->size - 1; j++)
		L->list[j - 1] = L->list[j]; /*����ǰ��*/
	L->size--;						 /*����Ԫ�ظ�����1*/
	return 1;
}

int ListGet(SeqList L, int i, DataType *x)
{
	if (i < 0 || i > 10)
	{
		printf("����i���Ϸ�! \n");
		return 0;
	}
	else
	{
		*x = L.list[i];
		return 1;
	}
}
int main()
{
	SeqList L;
	ListInitiate(&L);
	DataType a, b;
	creat(&L);
	L.size = 10;
	printf("��ʼ��");
	for (int i = 0; i < 10; i++)
	{
		ListGet(L, i, &a);
		printf("%d ", a);
	}
	printf("\n");
	ListInsert(&L, 2, 25);
	printf("�����");
	for (int i = 0; i < 11; i++)
	{
		ListGet(L, i, &a);
		printf("%d ", a);
	}
	printf("\n");
	ListDelete(&L, 4, &b);
	printf("ɾ����");
	for (int i = 0; i < 10; i++)
	{
		ListGet(L, i, &a);
		printf("%d ", a);
	}
}
