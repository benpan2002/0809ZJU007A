#include <stdio.h>
int main(int argc, char *argv[])
{//����11�����3��Ԫ�س�ʼ��Ϊ0 
int a[11]={0,1,2,3,4,11,12,13 	};
int b,insertpos;
int i;
for(i=0; i<11; i++)

	{		printf("%d, ",a[i]);

	}

		printf("\n------input:",a[i]);

	

	scanf("%d", &b);

	insertpos=0;

	//i< ��ЧԪ�صĸ���	
for(i=0; i<8; i++)

	{	// �ҵ�����λ�� 

		if( a[i] < b)

		{	insertpos++;

		}	

		else 

			break; 		

	}

 

	for(i=10; i> insertpos; i--)

	{	 a[i]=a[i-1];	//���� 

	}

	//Ȼ��ֵ��ָ��λ�� 

	a[insertpos] =b;

	for(i=0; i<11; i++)

	{		printf("%d, ",a[i]);

	}

		

	return 0;

}
