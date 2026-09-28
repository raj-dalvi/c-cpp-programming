//write a program to calculate the sum of the squares of the first n natural
//numbers  where n is entered by the user.
// 1) using for loop ,  2) rewrite using a while loop.
#include<stdio.h>

int main(){
    int n,i=1;
    printf("Enter Natural Number\n");
    scanf("%d",&n);
    int sum=0;
   /* for (int i = 1; i <= n; i++)
    {
        sum += i*i;
    }
printf("The sum of the squares of the first n natural numbers is %d",sum);
*/
while (i<=n)
{
    sum+=i*i;
    i++;
}
printf("The sum of the squares of the first n natural numbers is %d",sum);
    return 0;
}