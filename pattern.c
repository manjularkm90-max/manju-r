// #include<stdio.h>
// int main(){
//     int i,j;
//     scanf("%d%d",&i,&j);{
//         for(i=1;i<=5;i++){
//             for(j=1;j<=5;j++){
//                 printf("*");
//             }
//             printf("\n");
//         }
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     scanf("%d%d",&i,&j);
//     for(i=1;i<=7;i++){
//         for(j=1;j<=7;j++){
//             printf("%d",j);
//         }
//         printf("\n");

//     }
// }

#include<stdio.h>
int main(){
    int i,j;
    scanf("%d%d",&i,&j);
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=1;j<=2*(5-i);j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=1;j<=2*(5-i);j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){+
            printf("*");
        }
        printf("\n");
    }
}

