/*
 * Filename:      1082_orign.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-26 09:39
 * Description:
 *
 */
#include <stdio.h>  
int N=3;
long c;
long A[3];

long P(long l, long r)
{
 long x=A[l],
      i=l-1,
      j=r+1,
      t;
 while(1)
 {
  do {
	--j; ++c;
  } while(A[j]>x);
  do{++i; ++c;} while(A[i]<x);
  if(i<j)
  {
   t=A[i];
   A[i]=A[j];
   A[j]=t;
  }
  else return j;
 }
}

void Q(long l, long r)
{
 long n;
 if(l<r)
 {
  n=P(l,r);
  Q(l,n);
  Q(n+1,r);
 }
}

// c 是排序数组过程中，不用移动的数的个数
// F(N) = F(N-1)+(N-1) 通想F(N)=(N*N+3*N-4)/2
 
int main(void)
{
  c=0;
  scanf("%d", &N);
  for(long i=0; i<N; ++i)
   scanf("%ld", &A[i]);
  Q(0,N-1);
  if(c==(N*N+3*N-4)/2)
   printf
   ("Beutiful Vasilisa");
  else printf
   ("Immortal Koshcei");
  return 0;
 }
