#include <stdio.h>
#include <stdlib.h>
int find(int a[], int n, int x);
int main()
{
    int n,i,x;   int a[10];
    printf("�������������");
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {    printf("���������%d������",i+1);
	    scanf("%d",&a[i]);
    }
    printf("������Ҫ����Ԫ�أ�");
    scanf("%d",&x);
    if(find(a,n,x) != -1)
    {
        printf("������������λ��Ϊ%d",find(a,n,x)+1);
    }
    else
    printf("Not Found");
    return 0;
}
int find(int a[], int n, int x)
{
    int i,flag,t;
    flag = 0;
    for (i = 0; i<n; i++)
    {
        if ( a[i] == x)
        {
            flag = 1;
            t = i;
        }
    }
    if( flag == 1)
        return t;
    else
        return -1;
}

