#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int a[15],b[50],c[65],Sn[65] = {0};
    int i,j,k,isSwap;
    printf("A:");
    for(i = 1;i <= 50;i ++){  //取50个
        b[i-1] = 2*i-1;
        printf("%d ",b[i-1]);
    }
    printf("\n\nB:");
    for(i = 1;i <= 15;i ++){  //取15个
        a[i-1] = pow(2,i);
        printf("%d ",a[i-1]);
    }
    //an
    for(i = 0,k = 0;i < 50; i ++,k ++){
        c[k] = b[i];
    }
    for(i = 0;i < 15;i ++,k ++){
        c[k] = a[i];
    }
    //printf("\n");
    //Bubblesort
    for(i = 64;i > 0;i --){
        isSwap = 0;
        for(j = 0;j < i;j ++){
            if(c[j] > c[j+1]){
                swap(c[j],c[j+1]);
                isSwap = 1;
            }
        }
        if(isSwap == 0){
            break;
        }
    }
    //printf the new an:
    printf("\n\nThe new an:");
    for(i = 0;i < 64;i ++){
        printf("%d ",c[i]);
    }
    //printf the Sn
    printf("\n\nThe Sn:");
    for(i = 0;i < 64;i ++){
        if(i == 0){
            Sn[0] = c[0];
        }
        else{
            Sn[i] = Sn[i-1] + c[i];
        }
        printf("%d ",Sn[i]);
    }
    printf("\n\nThe answer:");
    for(i = 0;i < 64;i ++){
        if(Sn[i] > 12*c[i+1]){
            printf("%d ",i+1);
        }
    }
    return 0;
}
