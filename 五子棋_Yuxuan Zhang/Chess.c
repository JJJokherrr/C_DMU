#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
#define ROW 5
#define COL 5
 
char g_broad[ROW][COL];
void menu();
void menu()
{
 printf("-----------------------\n"); 
 printf("------1.开始游戏-------\n");
 printf("------0.结束游戏-------\n"); 
 printf("-----------------------\n");
 printf("请输入您的选择：");
 }
void Init(char broad[ROW][COL])
{ 
int row;
int col;
  for (row = 0; row < ROW; ++row)
  { 
  for (col = 0; col < COL; ++col)
   { 
   broad[row][col] = ' ';
   } 
  }
 }
void print(char broad[ROW][COL])
{
	int row;
 for (row = 0; row < ROW; ++row)
 { 
  printf("| %c | %c | %c | %c | %c |\n", broad[row][0], 
  broad[row][1], broad[row][2], broad[row][3], 
  broad[row][4]);
  if (row != ROW - 1)
 { 
 printf(" ---|---|---|---|--- \n"); 
    } 
 }
}
void playermove(char broad[ROW][COL])
{ 
  printf("玩家落子:\n"); 
  while (1) 
  { 
  printf("玩家请输入一组坐标：(row col)"); 
  int row = 0; 
  int col = 0; 
  scanf("%d %d", &row, &col); 
  if (row < 0 || row >= ROW || col < 0 || col >= COL) 
  { 
  printf("您输入的坐标非法，请重新输入：\n"); 
  continue; 
  } 
 else if (broad[row][col] != ' ') 
 { 
  printf("该位置已经被占用，请重新输入：\n"); 
  continue; 
 } 
 else
 { 
  broad[row][col] = 'x'; 
  break; 
 }
 }
}
void computermove(char broad[ROW][COL])
{ 
  printf("电脑落子：\n"); 
  while (1)
  { 
   int row = rand() % ROW; 
   int col = rand() % COL; 
   if (broad[row][col] != ' ') 
   { 
   continue; 
   } 
  else
  { 
  broad[row][col] = 'o'; 
  break; 
  }
  }
 }
int Isfull(char broad[ROW][COL])
{ 
int row;
int col;
 for (row = 0; row < ROW; ++row) 
 { 
  for (col = 0; col < COL; ++col) 
  { 
  if (broad[row][col] == ' ') 
  return 0; 
  }
  } 
 return 1;
}
char checkwinner(char broad[ROW][COL])
{ 
int row;
 for (row = 0; row < ROW; ++row)
 { 
 if (broad[row][0] == broad[row][1] 
 && broad[row][0] == broad[row][2] 
 && broad[row][0] == broad[row][3] 
 && broad[row][0] == broad[row][4] 
 && broad[row][0] != ' ') 
 { 
 return broad[row][0]; 
 }
   } 
   int col;
   for (col = 0; col < COL; ++col) 
   { 
   if (broad[0][col] == broad[1][col] 
   && broad[0][col] == broad[2][col] 
   && broad[0][col] == broad[3][col] 
   && broad[0][col] == broad[4][col] 
   && broad[0][col] != ' ') 
    { 
    return broad[0][col]; 
    }
    } 
    if (broad[0][0] == broad[1][1] 
    && broad[0][0] == broad[2][2] 
    && broad[0][0] == broad[3][3] 
    && broad[0][0] == broad[4][4] 
    && broad[0][0] != ' ')
    { 
    return broad[0][0]; 
    } 
    if (broad[0][4] == broad[1][3] 
    && broad[0][4] == broad[2][2] 
    && broad[0][4] == broad[3][1] 
    && broad[0][4] == broad[4][0] 
    && broad[4][0] != ' ') 
    { 
    return broad[4][0]; 
    } 
    if (Isfull(broad)) 
     { 
     return 'p'; 
     } 
     else
     return ' ';
    }
int main()
{
//	char c='Y';
//while(char c!= 'N') 
srand((unsigned int)time(0)); 
int input = 0; 
menu(g_broad); //初始化棋盘，将棋盘初始化成' ' 
Init(g_broad); 
scanf("%d", &input); 
char winner = ' '; 
while (input) 
{ 
 //第一次打印棋盘 
 print(g_broad); 
 //玩家输入，提示玩家输入一组坐标，检查游戏是否结束 
 playermove(g_broad); 
 winner = checkwinner(g_broad); 
 if (winner != ' ') 
  { 
  break; 
  } 
  computermove(g_broad); 
  winner = checkwinner(g_broad); 
  if (winner != ' ') 
   { 
   break; 
   } 
}
   if (winner == 'x') 
   { 
   printf("玩家胜利！\n"); 
   print(g_broad);
   } 
   if (winner == 'o')
  { 
  printf("电脑胜利！\n"); 
  print(g_broad); 
  } 
  if (winner == 'p') 
  { 
  printf("和棋！\n"); 
  print(g_broad); 
  } 
  if (winner == ' ') 
  { 
  printf("游戏结束！goodbay~\n"); 
  return 0; 
  } 
  return 0;
}

