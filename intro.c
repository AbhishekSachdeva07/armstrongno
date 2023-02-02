//check whether given no. is armstrong or not
#include <stdio.h>
#include <math.h>
int main()
{
    int a; 
    
    printf("Enter number to check the given no. is armstrong or not\n");
    scanf("%d",&a);
    int temp=a,m=a,count=0,sum=0,c;
    while (m!=0){
        m=m/10;
        count+=1;
    }
    
    while (temp!=0){
        c = temp%10;
        sum=sum+pow(c,count);
        temp=temp/10;
    }
    if (sum==a){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}