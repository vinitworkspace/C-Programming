#include<stdio.h>
int main(){
    int n=5,cnt=6;
    int temp=cnt;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cnt=cnt-1;

            printf("%d\t",cnt);
        }
        printf("\n");
        cnt=temp;
        cnt=cnt+(n-i);
        temp=cnt;
    }
}