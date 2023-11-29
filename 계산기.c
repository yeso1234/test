#include<stdio.h>
float mul(float x,float y){
    return x*y;
}
float div(float x,float y){
    return x/y;
}
main(){
    float a,b;
	int i;
    
    printf("두 수를 입력하세요 : ");
    scanf("%f %f",&a,&b);
    
    printf("4. 곱하기 5. 나누기 ");
    scanf("%d",&i);
    
    if(i==4){
        printf("%f",mul(a,b));
    }
    else if(i==5){
        printf("%f",div(a,b));
    }
}
