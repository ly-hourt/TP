#include<stdio.h>
int main()
{
    //1.b
    char alphabet[26];
    int a=65;
    for(int i=0;i<26;i++)
    {
        alphabet[i]=a;
        a++;
        printf("%c ",alphabet[i]);
    }
}
