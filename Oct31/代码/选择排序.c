#include<stdio.h>
void SelectSort(int a[],int n)
{	int i=0,j=0;
    for(i=0;i<n-1;i++)
    {
        int min=i;  //���������Сֵ��λ�� 
        
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min]){
                min=j;   //�ҳ���Сֵ������¼λ�� 
            }
         } 
         if(min!=i) //��СԪ�����i��Ԫ�ػ���λ�� 
         {
            int swap=a[min];
             a[min]=a[i];
             a[i]=swap;
         }
    }
}
int main()
{	int i=0;
    int a[]={8,9,7,1,5,4,2,3,6};
    int n=sizeof(a)/sizeof(int);
    SelectSort(a,n);
     printf("ѡ����������");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
