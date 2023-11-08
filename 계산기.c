#include<stdio.h>
int mul(int x,int y){
    return x*y;
}
int div(int x,int y){
    return x/y;
}
main(){
    int a,b,i;
    
    printf("두 수를 입력하세요 : ");
    scanf("%d %d",&a,&b);
    
    printf("4. 곱하기 5. 나누기 ");
    scanf("%d",&i);
    
    if(i==4){
        printf("%d",mul(a,b));
    }
    else if(i==5){
        printf("%d",div(a,b));
    }
}