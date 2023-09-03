#include<stdio.h>
void DecimalToBinary(int n){
    if(n<1)
      return;
    else{
        DecimalToBinary(n/2);
        int r;
        r=n%2;
        printf("%d",r);
    }  
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    DecimalToBinary(n);
    return 0;
}