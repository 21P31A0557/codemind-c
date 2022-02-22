#include<stdio.h>

int main()
{
    int r;
    
    //printf("give me the radius");
    scanf("%d",&r);
    float area = 3.14*r*r;
    printf("%0.2f
",area);
    return 0;
}