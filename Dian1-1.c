#include <stdio.h>
#include<stdlib.h>
int main()
{
    int A,B,C;
    printf("请分别输入用户的起始位置，目标位置,电梯所在的层数\n");
    scanf("%d %d %d",&A,&B,&C);
    printf("%d 0 0\n",C);
    printf("%d %d 1\n",A,abs(A-C));
    printf("%d %d 0",B,abs(A-C)+abs(A-B));
    return 0;
}