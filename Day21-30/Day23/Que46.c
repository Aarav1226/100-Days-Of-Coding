/*Write a program to print the following pattern:
*****
*****
*****
*****
******/
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        printf("*****\n");
    }
}