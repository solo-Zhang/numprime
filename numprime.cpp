#include<cstdio>
bool ifprime(int num)
{
    int i;
    for(i = 2;i < num;i++)
    {
        if(num%i==0)
            return false;
    }
    if(i==num)
        return true;
    else
        return false;
}

int main()
{
    int number,sum=0;
    while(scanf("%d",&number)!=EOF)
    {
            for(int i = 2;i<number;i++)
            {
                if(ifprime(i))
                    sum+=i;
            }
            printf("%d",sum);
            return 0;
        }
    }
}