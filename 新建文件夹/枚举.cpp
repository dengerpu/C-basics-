#include<stdio.h>
int main()
{
	enum color{red,yellow,blue};
	enum color i,j,k,pir;
	int n=0,loop;
	for(i=red;i<=blue;i++)
		for(j=red;j<=blue;j++)
			if(i!=j)
			{
				for(k=red;k<=blue;k++)
					if((k!=i)&&(k!=j))
					{
						n++;
						printf("%-4d",n);
						for(loop=1;loop<=3;loop++)
						{
							switch(loop)
							{
							case 1:pir=i;break;
							case 2:pir=j;break;
							case 3:pir=k;break;
							default:break;
							}
							switch(pir)
							{
							case red:printf("%-4s","ºì");break;
							case blue:printf("%-4s","À¶");break;
							case yellow:printf("%-4s","»Æ");break;
							default:break;
							}
							
						}
						printf("\n");
					}
					
			}
			
			
			return 0;
}