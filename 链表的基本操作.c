/*����10������Ԫ�ص����Ա�L={1��2��3��10}ָ���ڵ�2λ�ò���Ԫ��25��Ȼ��ɾ����4��λ���ϵ�Ԫ�أ�
�ֱ���ʾ�������������Ա������ʾ��ʵ��*/
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct Nodes
{
   ElemType data;
   struct Node *next;
} LNode, *LinkList;

void inilialist(LNode **L)
{
   if ((*L = (LNode *)malloc(sizeof(LNode))) == NULL)
      exit(1);
   (*L)->next = NULL;
}

void insert(LNode *L, int i, ElemType x)
{
   LNode *s, *p = L;
   int j = 0;
   while (j != (i - 1) && p != NULL)
   {
      p = p->next;
      j++;
   }
   if (p == NULL)
   {
      printf("��ų���");
   }
   else
   {
      if ((s = (LNode *)malloc(sizeof(LNode))) == NULL)
         exit(1);
      s->data = x;
      s->next = p->next;
      p->next = s;
   }
}

void Delete(LNode *L, int i) //ɾ��ֵΪx�Ľ��
{
   LNode *p;
   LNode *u;
   int j = 0;
   p = L;
   while (j != i - 1 && p != NULL)
   {
      p = p->next;
      j++;
   }
   if (p == NULL || p->next == NULL)
   {
      printf("ɾ����ų���");
   }
   else
   {
      u = p->next;
      p->next = u->next;
      free(u);
   }
}
int main()
{
   LNode *L;
   inilialist(&L);
   int i, x;
   LNode *head = L;
   for (i = 1; i < 11; i++)
   {
      scanf("%d", &x);
      insert(L, i, x);
   }
   printf("��ʼ��");
   L = head->next;
   while (L)
   {
      printf("%d ", L->data);
      L = L->next;
   }
   printf("\n");
   L = head;
   insert(L, 2, 25);
   printf("�����");
   L = head->next;
   while (L)
   {
      printf("%d ", L->data);
      L = L->next;
   }
   printf("\n");
   L = head;
   Delete(L, 4);
   printf("ɾ����");
   L = head->next;
   while (L)
   {
      printf("%d ", L->data);
      L = L->next;
   }
}
