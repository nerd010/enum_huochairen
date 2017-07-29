//
//  main.c
//  enum_huochairen
//
//  Created by Charles Wang on 16/3/24.
//  Copyright © 2016年 CHW. All rights reserved.
//

#include <stdio.h>

int fun (int x);

int main(int argc, const char * argv[])
{
    int m = 0;
    printf("请输入总的火柴根数(<=24)：\n");
    scanf("%d", &m);
    
    int a = 0;
    int b = 0;
    int c = 0;
    int num = 0;
    
    for (a = 0; a <= 1111; a++)
    {
        for (b = 0; b <= 1111; b++)
        {
            c = a + b ;
            
            if (fun(a) + fun(b) + fun(c) == m - 4)
            {
                printf("%d + %d = %d\n", a, b, c);
                num ++;
            }
        }
    }
    printf("num:%d\n", num);
    getchar();getchar();
    
    return 0;
}

int fun (int x)
{
    int sum = 0;
    int f[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    
    while (x / 10 != 0)//大于等于两位数
    {
        sum += f[x % 10];
        x = x / 10; //取出高位
    }
    
    sum += f[x];
    
    return sum;
}