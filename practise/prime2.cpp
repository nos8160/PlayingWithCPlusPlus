#include<stdio.h>
int main(){
    int low,i,high,flag,sum =0;
    scanf("%d %d",&low,&high);
    while(low<high){
        flag =0;
        for(i= 2;i<=low;i++){
            if(low%i==0){
                flag =1;
                break;
            }
        }
        if(flag ==0){
            printf("%d",low);
        }
        sum = sum + low;
        ++low;
    }
    printf("%d",sum);
    return 0;
}
