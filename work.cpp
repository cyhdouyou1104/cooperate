#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
int a,b,c,d,jieguo,daan,i=0,j=0; 
bool english=0; 
struct fenshu
{
	int fenzi;
	int fenmu;
};
int fun(int m,int n)
{
	int t;
	while(n!=0)
	{
		t=m%n;
		m=n;
		n=t;
	}
	return m;
}
void jiafa()                         //�ӷ����� 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	printf("%d+%d=",a,b);
	daan=a+b; 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;}
}  
void jianfa()                         //�������� 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	printf("%d-%d=",a,b);
	daan=a-b; 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;}
}  
void chengfa()                       //�˷����� 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	printf("%d*%d=",a,b);
	daan=a*b; 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;}
}  
void chufa()                         //�������� 
{
	float h,s;
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	printf("%d��%d=",a,b);
	h=((int)(((float)a/b)*100+0.5))/100.0;
	scanf("%f",&s);
	if(h==s)
	{if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;}
}  
void hunhe1()                      //�������ģ��1 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	c=rand()%10;
	d=rand()%10;
	printf("(%d+%d)*(%d-%d)=",a,b,c,d);
	daan=(a+b)*(c-d); 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;}
}  
void hunhe2()                       //�������ģ��2 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	c=rand()%10;
	d=rand()%10;
	printf("(%d+%d)-(%d-%d)=",a,b,c,d);
	daan=(a+b)-(c-d); 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;}
}  
void hunhe3()                         //�������ģ��3 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	c=rand()%10;
	printf("%d+%d*%d=",a,b,c);
	daan=a+b*c; 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;} 
}  
void hunhe4()                    //�������ģ��4 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	c=rand()%10;
	printf("%d+%d-%d=",a,b,c);
	daan=a+b-c; 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;}
}  
void fenshujiafa()                    //�����ӷ� 
{
	int q,w,e,result1,result2,qq,ww;
	struct fenshu x,y;
	srand(time(0));
	x.fenzi=rand()%10+1;
	x.fenmu=rand()%10+1;
	y.fenzi=rand()%10+1;
	y.fenmu=rand()%10+1;
	printf("%d/%d+%d/%d=",x.fenzi,x.fenmu,y.fenzi,y.fenmu); 
	q=x.fenmu*y.fenmu/fun(x.fenmu,y.fenmu);          //fenmu
	w=q/x.fenmu*x.fenzi+q/y.fenmu*y.fenzi;           //fenzi 
	e=fun(q,w);
	if(q/e==1)
	{
		result1=w/e;
		scanf("%d",&qq);
		if(qq==result1)
		{if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
		i++;
		}
		else
		{
		if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
			j++;
		}
	}
	else
	{
		result1=w/e;
		result2=q/e;
		scanf("%d %d",&qq,&ww);
		if(qq==result1&&ww==result2)
		{
			if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
			i++; 
		}
		else
		{
		if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
			j++;
		}
	}

}
void fenshujianfa()                   //�������� 
{
	int q,w,e,result1,result2,qq,ww;
	struct fenshu x,y;
	srand(time(0));
	x.fenzi=rand()%10+1;
	x.fenmu=rand()%10+1;
	y.fenzi=rand()%10+1;
	y.fenmu=rand()%10+1;
	printf("%d/%d-%d/%d=",x.fenzi,x.fenmu,y.fenzi,y.fenmu); 
	q=x.fenmu*y.fenmu/fun(x.fenmu,y.fenmu);          //fenmu
	w=q/x.fenmu*x.fenzi-q/y.fenmu*y.fenzi;           //fenzi 
	e=fun(q,w);
	if(q/e==1)
	{
		result1=w/e;
		scanf("%d",&qq);
		if(qq==result1)
		{if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
		i++;
		}
		else
		{
			if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
			j++;
		}
	}
	else
	{
		result1=w/e;
		result2=q/e;
		scanf("%d %d",&qq,&ww);
		if(qq==result1&&ww==result2)
		{
			if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
			i++; 
		}
		else
		{
			if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
			j++;
		}
	}

}
void fenshuchengfa()                    //�����˷� 
{
	int q,w,e,result1,result2,qq,ww;
	struct fenshu x,y;
	srand(time(0));
	x.fenzi=rand()%10+1;
	x.fenmu=rand()%10+1;
	y.fenzi=rand()%10+1;
	y.fenmu=rand()%10+1;
	printf("%d/%d*%d/%d=",x.fenzi,x.fenmu,y.fenzi,y.fenmu); 
	q=x.fenmu*y.fenmu;          //fenmu
	w=x.fenzi*y.fenzi;       //fenzi 
	e=fun(q,w);
	if(q/e==1)
	{
		result1=w/e;
		scanf("%d",&qq);
		if(qq==result1)
		{if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
		i++;
		}
		else
		{
			if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
			j++;
		}
	}
	else
	{
		result1=w/e;
		result2=q/e;
		scanf("%d %d",&qq,&ww);
		if(qq==result1&&ww==result2)
		{
			if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
			i++; 
		}
		else
		{
			if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
			j++;
		}
	}

}
void fenshuchufa()                      //�������� 
{
	int q,w,e,result1,result2,qq,ww;
	struct fenshu x,y;
	srand(time(0));
	x.fenzi=rand()%10+1;
	x.fenmu=rand()%10+1;
	y.fenzi=rand()%10+1;
	y.fenmu=rand()%10+1;
	printf("%d/%d��%d/%d=",x.fenzi,x.fenmu,y.fenzi,y.fenmu); 
	q=x.fenmu*y.fenzi;        //fenmu
	w=x.fenzi*y.fenmu;          //fenzi 
	e=fun(q,w);
	if(q/e==1)
	{
		result1=w/e;
		scanf("%d",&qq);
		if(qq==result1)
		{if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
		i++;
		}
		else
		{
			if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
			j++;
		}
	}
	else
	{
		result1=w/e;
		result2=q/e;
		scanf("%d %d",&qq,&ww);
		if(qq==result1&&ww==result2)
		{
			if(english==0)
	{
		printf("��ȷ��\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
			i++; 
		}
		else
		{
			if(english==0)
	{
		printf("����\n");
	}
	else
	{
		printf("WRONG!\n");
	}
			j++;
		}
	}

}
int main()
{
	int e,k;
	int nSelect=MessageBox(NULL,TEXT("����,����ȷ��ѡ�����ģ�click cancle switch to English"),TEXT("��������"),MB_OKCANCEL);
	if(nSelect==IDOK)
	{
	printf("��ӭʹ�ÿ���������������\n���롰e����ֹͣ��\n˵��������������λС��,������������������ӷ�ĸ�м��ÿո����������Ϊ'��',������Ϊ'/'��\n"); 
	printf("**********************************************\n");
	for(k=0;1<4;k++)
	{
			srand(time(0));
			e=rand()%12+1;
			char o;
		switch (e)
	{
		case 1:
		jiafa();break;
		case 2:
		jianfa();break;
		case 3:
		chengfa();break;
		case 4:
		chufa();break;
		case 5:
		hunhe1();break;
		case 6:
		hunhe2();break;
		case 7:
		hunhe3();break;
		case 8:
		hunhe4();break;
		case 9:
		fenshujiafa();break;
		case 10:
		fenshujianfa();break;
		case 11:
		fenshuchengfa();break;
		case 12:
		fenshuchufa();break;
	}
	o=getchar();
	if(o=='e'){
	
		printf("**********************************************\n");
		printf("���β�������%d����Ŀ\n",i);
		printf("���β�������%d����Ŀ\n\n",j-1);
		printf("��־���¾��ɣ�\n");
		break;
}
	}
	
	
	}
	else
	{
		english=1;
		printf("Welcome!\ninput��e��to stop.\n Notes:divison operation keep two places of decimal,fraction operation please input numerator than input denominator and space between them.The sign of divisor is '��',the sign of fraction is'/'.\n"); 
		printf("**********************************************\n");
	for(k=0;1<4;k++)
	{
			srand(time(0));
			e=rand()%12+1;
			char o;
		switch (e)
	{
		case 1:
		jiafa();break;
		case 2:
		jianfa();break;
		case 3:
		chengfa();break;
		case 4:
		chufa();break;
		case 5:
		hunhe1();break;
		case 6:
		hunhe2();break;
		case 7:
		hunhe3();break;
		case 8:
		hunhe4();break;
		case 9:
		fenshujiafa();break;
		case 10:
		fenshujianfa();break;
		case 11:
		fenshuchengfa();break;
		case 12:
		fenshuchufa();break;
	}
	o=getchar();
	if(o=='e'){
	
		printf("**********************************************\n");
		printf("the number of right answer is %d in this quiz\n",i);
		printf("the number of wrong answer is %d in this quiz\n\n",j-1);
		printf("where there is a will there is a way��\n"); 
		break;
}
	}
	 
	}
	 getch();
	 return 0;  
	
 } 
