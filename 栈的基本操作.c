/*������������Ԫ��1,2,3,4,5,Ȼ���ж�ջ�Ƿ�Ϊ��,��ʾջ��Ԫ��,��ջ������Ļ����ʾ��ջ������Ԫ��*/
#include <malloc.h>
#include <stdio.h> /*���ļ�����pringtf()�Ⱥ���*/
#include <stdlib.h>
#define MaxStackSize 100 /*����MaxSizeΪ100*/
typedef int DataType;	/*����DataTypeΪint*/
typedef struct
{
	DataType stack[MaxStackSize];
	int top;
} SeqStack;

void StackInitiate(SeqStack *S) /*��ʼ��˳���ջS*/
{
	S->top = -1; /*�����ʼջ���±�ֵ*/
}

int StackNotEmpty(SeqStack S)
/*��˳���ջS�ǿշ񣬷ǿ��򷵻�1�����򷵻�0*/
{
	if (S.top != -1)
		return 1;
	else
		return 0;
}

int StackPush(SeqStack *S, DataType x)

/*������Ԫ��ֵxѹ��˳���ջS����ջ�ɹ��򷵻�1�����򷵻�0 */
{
	if (S->top == MaxStackSize - 1)
	{
		printf("��ջ�����޷�����! \n");
		return 0;
	}
	else
	{
		S->top++;
		S->stack[S->top] = x;

		return 1;
	}
}

int StackPop(SeqStack *S, DataType *d)

/*����˳���ջS��ջ������Ԫ��ֵ������d ����ջ�ɹ��򷵻�1�����򷵻�0*/
{
	if (S->top == -1)
	{
		printf("��ջ�ѿ�������Ԫ�س�ջ! \n");
		return 0;
	}
	else
	{
		*d = S->stack[S->top];
		S->top--;

		return 1;
	}
}

int StackTop(SeqStack S, DataType *d)
/*ȡ˳���ջS�ĵ�ǰջ������Ԫ��ֵ������d ���ɹ��򷵻�1�����򷵻�0*/
{
	if (S.top == -1)
	{
		printf("��ջ�ѿ�! \n");
		return 0;
	}
	else
	{
		*d = S.stack[S.top];
		return 1;
	}
}

int main()
{
	SeqStack S;
	StackInitiate(&S);
	int x, i, n, d;
	int a;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &x);
		StackPush(&S, x);
	}
	n = StackNotEmpty(S);
	if (n = 1)
	{
		printf("ջ�ǿ�\n");
		StackTop(S, &d);
		printf("ջ��Ԫ�أ�%d\n", d);
	}
	else
		printf("ջΪ��\n");
	printf("��ջ��");
	for (i = 0; i < 5; i++)
	{
		StackPop(&S, &d);
		printf("%d ", d);
	}
}
