#include<stdio.h>
int hanoi(int n,char A,char B,char C)
{
  if(n==1)
    return 0;
  else{
     hanoi(n-1,A,B,C);
     printf("%c-->%c,A,C);
     hanoi(n-1,C,A,B);
    }
}
int main()
{
  int n;
  scanf_s("%d",&n)
  char A,B,C;
  hanoi(n,A,B,C);
}