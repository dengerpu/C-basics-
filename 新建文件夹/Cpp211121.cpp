#include <stdio.h>
#include <stdlib.h>
  int main()
{ 
  float score;
   int x;
  char grade;
  printf("������һ���ٷ��Ʒ���:");
  scanf("%f",&score);
  x=(int)score;
  if (score<0||score>100)
  {printf("����һ���Ƿ�����!\n");
   exit(0);
  }
  else
{
  switch(x/10)
   {  
  case 10:
  case 9:grade='A';break;
  case 8:grade='B';break;
  case 7:grade='C';break;
  case 6:grade='D';break;
  default:grade='E';break;
   }
printf(" %f-->%c\n",score,grade);
}
return 0;
}    
