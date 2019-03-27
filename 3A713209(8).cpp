#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    bool number;
    int num1;
    printf("請輸入數字");
	scanf("%d",&num1);
    for(int x=2;x<=num1;++x)
    {
        number=true;
        for(int y=2;y<x;++y)
        {
            if(x%y==0)
            {
                number=false;
            }
        }
        if(number)
        {
            printf("1-100的質數為:%d\n",x);
        }
    }
    system("PAUSE");
	return 0;
}
