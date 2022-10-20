#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int kasus, cek = 0, now = 0, primax;
    int wadah[78500];
    int urutankasus = 1;

    scanf("%d", &kasus);
    int prima[2*kasus];
    // primax = 1000000;



    for(int i = 2; i <= 1000000; i++){
        cek = 0;
        for(int j = 1; j <= sqrt(i); j++){
            if(i % j == 0){
                cek+=1;
            }
            if(cek > 1){
                break;
            }
        }
        if(cek < 2){
            wadah[now] = i;

            now++;
        }

    }

    for(int i = 0; i < 2*kasus; i++){
        scanf("%d", &prima[i]);
    }

    for(int i = 0; i < 2*kasus; i++){
        printf("Test Case #%d :\n", urutankasus);
        for(int j = prima[i]-1; j < prima[i+1]; j++){
            printf("%d\n", wadah[j]);
        }
        i += 1;
        urutankasus += 1;
    }
}