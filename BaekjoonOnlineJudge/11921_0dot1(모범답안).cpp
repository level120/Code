
//내가 찾아낸 빠른입력

#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;


//---------------------------------------------


#include <stdio.h>
 
static char buf[8192*32];
static int len;
static int idx;
 
int getInt()
{
    int r, n;
    for (n=0; ; idx++)
    {
        if (len == idx)
        {
            int rd = fread(buf, 1, sizeof(buf), stdin);
            if (rd > 0)
            {
                len = rd;
                idx = 0;
            }
            else
            {
                return n;
            }
        }
 
        if (buf[idx] >= '0' && buf[idx] <='9')
            n = n *10 + (buf[idx] -'0');
        else if (n)
        {
            idx++;
            return n;
        }
    }
}
 
int main()
{
    int n, i, c;
    unsigned long long s = 0;
 
    scanf("%d", &n);
 
    for (i=0; i<n; i++)
        s += getInt();
 
    printf("%d\n%llu", n, s);
 
    return 0;
}


-------------------------------------------------------


#include<stdio.h>
static char input[524288];
static char *_input=input+524288;
static char *index=_input;
static int sum,num;
static long long int _sum;
extern inline int read()
{
    if(index==_input)
    {
        fread(input,1,524288,stdin);
        index=input;
    }
        return *(index++);
}
extern inline int readInt()
{
    sum=0;
    num=read();
    while(num^10)
    {
        sum*=10;
        sum+=num-48;
        num=read();
    }
    return sum;
}
int main()
{
    fread(input,8,1,stdin);
    int n=5000000;
    while(n--)
        _sum+=readInt();
    printf("5000000\n%lld",_sum);
    return 0;
}