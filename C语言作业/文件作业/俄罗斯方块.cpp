#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#define CUBE_R20//��
#define CUBE_L11//��
#define MOD 28
 
intcur_x,cur_y,SPEED=300;
intscore,next,cube,cube_color,next_color,map[CUBE_R+10][CUBE_L+10],color_map[CUBE_R+10][CUBE_L+10];
intGameSpeed=SPEED,system_color,cheat;
 
intdir[28][4][2]={//���ַ��鹲28�ֱ��Σ���xyƫ������ʾ
   {0,0,0,1,1,0,1,1}  ,{0,0,0,1,1,0,1,1}   ,{0,0,0,1,1,0,1,1}   ,{0,0,0,1,1,0,1,1}   ,
   {0,0,0,-1,0,1,1,1} ,{0,0,-1,0,1,0,1,-1} ,{0,0,0,-1,0,1,-1,-1},{0,0,-1,0,1,0,-1,1} ,
   {0,0,0,-1,0,1,1,-1},{0,0,-1,0,-1,-1,1,0},{0,0,0,-1,0,1,-1,1} ,{0,0,-1,0,1,0,1,1}  ,
   {0,0,0,-1,0,1,0,2} ,{0,0,-1,0,1,0,2,0}  ,{0,0,0,-1,0,1,0,2}  ,{0,0,-1,0,1,0,2,0}  ,
   {0,0,0,-1,1,0,1,1} ,{0,0,-1,0,0,-1,1,-1},{0,0,0,-1,1,0,1,1}  ,{0,0,-1,0,0,-1,1,-1},
   {0,0,0,1,1,0,1,-1} ,{0,0,-1,0,0,1,1,1}  ,{0,0,0,1,1,0,1,-1}  ,{0,0,-1,0,0,1,1,1}  ,
   {0,0,0,-1,0,1,-1,0},{0,0,0,1,-1,0,1,0}  ,{0,0,0,-1,0,1,1,0}  ,{0,0,-1,0,1,0,0,-1} ,
};
 
intcolor[6]={FOREGROUND_RED,FOREGROUND_BLUE,FOREGROUND_GREEN,
   FOREGROUND_RED   |FOREGROUND_GREEN, //��ɫ
   FOREGROUND_GREEN | FOREGROUND_BLUE ,  //��ɫ
   FOREGROUND_RED   |FOREGROUND_BLUE ,  //���ɫ
};
 
voidset_Color(int a)
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | color[a]);
}
 
voidgotoxy(int x,int y)//��λ����ĺ������ճ�����
{
   COORD c;
   c.X=x-1;c.Y=y-1;
   SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}
 
voidMove(int x,int y,int id,int state)//�ƶ�������������
{
   int i;
   for(i=0;i<4;i++)
   {
      x=cur_x+dir[id][i][0];
      y=cur_y+dir[id][i][1];
      if(x>0 &&y>0 &&x<CUBE_R &&y<CUBE_L)
      {
         gotoxy(y*2+1,x+1);
         if(state)printf("��");
         elseprintf("  ");
      }
   }
}
 
voidClear_Show_next(int x,int y,int id,int state)//��ʾ����������һ������
{
   int i,a,b;
   a=x;b=y;
   for(i=0;i<4;i++)
   {
      x=a+dir[id][i][0];
      y=b+dir[id][i][1];
      gotoxy(y*2+1,x+1);
      if(state)printf("��");
      else printf("  ");
   }
}
 
voidAdd_Cube(int x,int y,int id)
{
   int i;
   for(i=0;i<4;i++)
   {
      x=cur_x+dir[id][i][0];
      y=cur_y+dir[id][i][1];
      if(x>0 &&y>0 &&x<CUBE_R &&y<CUBE_L)
      {
         map[x][y]=1;
         color_map[x][y]=cube_color;
      }
   }
}
 
intJudge(int x,int y,int id)//�ж�Խ����߳�ͻ
{
   int i,a,b;
   a=x;b=y;
   for(i=0;i<4;i++)
   {
      x=a+dir[id][i][0];
      y=b+dir[id][i][1];
      if(x>0 &&y>0 &&x<CUBE_R &&y<CUBE_L)
      {
         if(map[x][y])return0;
      }
      else if(!(x<=0))return 0;
   }
   return 1;
}
voidSHOW_HELP()
{
   gotoxy(CUBE_L*2+10,14);
   printf("*����*");
   gotoxy(CUBE_L*2+6,16);
   printf(" a:�� d:��");
   gotoxy(CUBE_L*2+6,17);
   printf(" s:�� w:����");
   gotoxy(CUBE_L*2+6,19);
   printf(" [:���� ]:����");
}
 
voidSHOW_SCORE()
{
   set_Color(system_color);
   gotoxy(CUBE_L*2+14,10);
   printf("%d  ",score);
   set_Color(cube_color);
}
 
voidSHOW_SPEED()
{
   set_Color(system_color);
   gotoxy(CUBE_L*2+14,12);
   printf("%d  ",SPEED);
   set_Color(cube_color);
}
 
voidinit(int id)
{
   int i,j;
   score=0;cheat=-1;
   cur_x=0;cur_y=CUBE_L/2;
   memset(map,0,sizeof(map));
   memset(color_map,0,sizeof(color_map));
   gotoxy(1,1);
   for(i=0;i<=CUBE_R;i++)
   {
      for(j=0;j<=CUBE_L;j++)
      {
         if(i==0&&j==0)printf("�X");
         elseif(i==0 &&j==CUBE_L)printf("�[");
         elseif(i==CUBE_R &&j==0)printf("�^");
         elseif(i==CUBE_R &&j== CUBE_L)printf("�a");
         elseif(i==0 || i==CUBE_R)printf("==");
         elseif(j
