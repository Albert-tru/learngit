//21_ÖÇ¿Æ-»ôØ¾Ãú 2021/10/4 18:01:11
#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   for(int c=1;c<=t;c++)
   {
   	 int n,k=0;
   	 scanf("%d",&n);
   	 for(int b=0;b<n;b++)	
     {
        for(int i=0;i<k;i++)
		{
			printf("(");
		}	
		for(int i=0;i<n-k;i++)
		{
			printf("()");
		}
		for(int i=0;i<k;i++)
		{
			printf(")");
		}
	
			k++; 
		  	printf("\n");
   	}   	 	

   	return 0;
   }
   
}

