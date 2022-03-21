#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//函数结果状态代码
#define  OK    1;
#define  TRUE  1;
#define  FALSE 0;
#define  ERROR 0;
#define  INFEASIBLE  -1;
#define  OVERFLOW   -2;


typedef  int Status;
typedef  int ElemType;


//定义一个结点
typedef struct Lnode
{
    ElemType  data;   //数据域
	struct Lnode* next;  //指针域
}Lnode, * LinkList;
//Lnode 意思是类型；*LinkList是指向这个链表的指针


LinkList L;          //建立一个链表L
//
// //空链表
//Status GetElem(LinkList L, int i, ElemType& e)
//{
//    LinkList p = p->next;    //初始化
//	int j = 1;
//	while (p && j < i)//p前进寻找第i个元素
//	{
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i)//找不到
//	{
//		return ERROR;
//	}
//	e = p->data; //找到后赋值给e
//	return OK;
//
//}

//建立一个单链表   头插法  插入n个结点
void CreatList(LinkList& L, int n)
{
	L= new Lnode;
	L->next = NULL;
	for (int i = 0; i <n; i++)
	{
		Lnode* p = (LinkList)malloc(sizeof(Lnode));
		scanf("%d", &p->data);     //输入每个结点的数据域
		p->next = L->next;   //新的指针域指向L后面的东西
		L->next = p;        //L的指针域指向插入的结点p
	}
}




//查找结点
Lnode* GetElem(LinkList L, int i)//找到第i个位置
{
	int j = 1;
	Lnode* p = L->next;//从头结点开始
	if (i < 1)
		return ERROR;
	while (p && j < i)
	{
		p = p->next;
		j++;
	}
}





////插入新节点
void InsertLnode(LinkList& L, int e, int i)
{
	Lnode* s = (Lnode*)malloc(sizeof(Lnode));     //开辟空间
	s->data = e;
	Lnode* p = GetElem( L, i);     //先查找到他所在的位置
	s->next = p->next;
	p->next = s;           //调换指针方向
}

//输出链表
void printList(LinkList L)
{
	Lnode* p;
	printf("%d", p->data);//输出他的数值
	while (p->next !=NULL)
	{
		p = p->next;
		printf("%d", p->data);
	}
}






int main()
{
		printf(" * ********************系统功能菜单 * ********************\n");
		printf(" ------------------------------------------------------\n");
		printf("* **********************************************\n");
				printf("*1.创建新链表 * *2.插入新节点 *\n");
		printf("***********************************************\n");
				printf("3.输出链表 * *4.将链表反向 *\n");
		printf(" ***********************************************\n");
				printf("*5.找到单链表中点 * *6.判断是否成环 *\n");
		printf(" ***********************************************\n");
				printf("*7.删除节点取值 * *8.奇偶反转 *\n");
		printf(" ***********************************************\n");
				printf("  * 9.查询数据是否在表中 *\n");
		printf("***********************************************\n");
				printf(" *0.删除链表并退出系统 *\n");
		printf("***********************************************\n");
				printf(" *10.构造循环链表 *\n");
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
			printf("请输入节点数：\n");
			scanf("%d", &b);
			CreatList(L, b);
			printf("创建成功");
			break;
		case 2:
			printf("请输入插入到第几个结点后面：\n");
			scanf("%d", &c);
			printf("请输入插入结点的数据\n");
			scanf("%d", &d);
			InsertLnode(L, d,c);
			break;
		case 3:
			printList(L);
			printf("已完成\n");
			break;
		case 4:
			//还不会将链表反向
			break;
		case 5:
			//找到单链表的中点
			//想计算出单链表的长度，然后除2得到中间的那个 
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

