#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//�������״̬����
#define  OK    1;
#define  TRUE  1;
#define  FALSE 0;
#define  ERROR 0;
#define  INFEASIBLE  -1;
#define  OVERFLOW   -2;


typedef  int Status;
typedef  int ElemType;


//����һ�����
typedef struct Lnode
{
    ElemType  data;   //������
	struct Lnode* next;  //ָ����
}Lnode, * LinkList;
//Lnode ��˼�����ͣ�*LinkList��ָ����������ָ��


LinkList L;          //����һ������L
//
// //������
//Status GetElem(LinkList L, int i, ElemType& e)
//{
//    LinkList p = p->next;    //��ʼ��
//	int j = 1;
//	while (p && j < i)//pǰ��Ѱ�ҵ�i��Ԫ��
//	{
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i)//�Ҳ���
//	{
//		return ERROR;
//	}
//	e = p->data; //�ҵ���ֵ��e
//	return OK;
//
//}

//����һ��������   ͷ�巨  ����n�����
void CreatList(LinkList& L, int n)
{
	L= new Lnode;
	L->next = NULL;
	for (int i = 0; i <n; i++)
	{
		Lnode* p = (LinkList)malloc(sizeof(Lnode));
		scanf("%d", &p->data);     //����ÿ������������
		p->next = L->next;   //�µ�ָ����ָ��L����Ķ���
		L->next = p;        //L��ָ����ָ�����Ľ��p
	}
}




//���ҽ��
Lnode* GetElem(LinkList L, int i)//�ҵ���i��λ��
{
	int j = 1;
	Lnode* p = L->next;//��ͷ��㿪ʼ
	if (i < 1)
		return ERROR;
	while (p && j < i)
	{
		p = p->next;
		j++;
	}
}





////�����½ڵ�
void InsertLnode(LinkList& L, int e, int i)
{
	Lnode* s = (Lnode*)malloc(sizeof(Lnode));     //���ٿռ�
	s->data = e;
	Lnode* p = GetElem( L, i);     //�Ȳ��ҵ������ڵ�λ��
	s->next = p->next;
	p->next = s;           //����ָ�뷽��
}

//�������
void printList(LinkList L)
{
	Lnode* p;
	printf("%d", p->data);//���������ֵ
	while (p->next !=NULL)
	{
		p = p->next;
		printf("%d", p->data);
	}
}






int main()
{
		printf(" * ********************ϵͳ���ܲ˵� * ********************\n");
		printf(" ------------------------------------------------------\n");
		printf("* **********************************************\n");
				printf("*1.���������� * *2.�����½ڵ� *\n");
		printf("***********************************************\n");
				printf("3.������� * *4.�������� *\n");
		printf(" ***********************************************\n");
				printf("*5.�ҵ��������е� * *6.�ж��Ƿ�ɻ� *\n");
		printf(" ***********************************************\n");
				printf("*7.ɾ���ڵ�ȡֵ * *8.��ż��ת *\n");
		printf(" ***********************************************\n");
				printf("  * 9.��ѯ�����Ƿ��ڱ��� *\n");
		printf("***********************************************\n");
				printf(" *0.ɾ�������˳�ϵͳ *\n");
		printf("***********************************************\n");
				printf(" *10.����ѭ������ *\n");
		printf("***********************************************\n");
		printf("------------------------------------------------------\n");
		int a = 0;
		scanf("%d", &a); 
		int b = 0;
		int c = 0;
		int d = 0;
		switch (a)
		{
		case 1:
			printf("������ڵ�����\n");
			scanf("%d", &b);
			CreatList(L, b);
			printf("�����ɹ�");
			break;
		case 2:
			printf("��������뵽�ڼ��������棺\n");
			scanf("%d", &c);
			printf("����������������\n");
			scanf("%d", &d);
			InsertLnode(L, d,c);
			break;
		case 3:
			printList(L);
			printf("�����\n");
			break;
		case 4:
			//�����Ὣ������
			break;
		case 5:
			//�ҵ���������е�
			//������������ĳ��ȣ�Ȼ���2�õ��м���Ǹ� 
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;    
		}


}

