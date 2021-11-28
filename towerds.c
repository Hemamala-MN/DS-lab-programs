#include<stdio.h>
void towers(int,char,char,char);
void towers(int num,char frompeg,char topeg,char auxpeg)
{
    if(num==1)
    {
        printf("\n move disk 1 from peg %c to peg %c",frompeg,topeg);
        return ;
    }
    towers(num-1,frompeg,auxpeg,topeg);
    printf("\n move disk %d from peg %c to peg %c",num,frompeg,topeg);
    towers(num-1,auxpeg,topeg,frompeg);
}
int main()
{
    int num;
    printf("Enter the number of disks\n");
    scanf("%d",&num);
    printf("sequence of moves moved are:\n");
    towers(num,'A','B','C');
    return 0;
}
