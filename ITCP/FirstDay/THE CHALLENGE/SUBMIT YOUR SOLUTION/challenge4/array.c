#include "stdio.h"
int main(){
int t[40]; int k[40]; int i,j,x,n,m;
printf("give the size of arrays \n ");
scanf("%d%d",&n,&m);
for (i=0;i<n;i++){
    printf("type in an element \n");
    scanf("%d",&t[i]);
}
for (j=0;j<m;j++){
    printf("type in the element \n ");
    scanf("%d",&k[j]);
} j=0;
while (j<m){

    for (i=0;i<n;i++){

        if (k[j]<t[i]) {
            x=t[i]; t[i]=k[j]; k[j]=x;
        }

    }
j++;
}

    for (j=0;j<n;j++){
        if (k[j]>k[j+1]) {x=k[j]; k[j]=k[j+1]; k[j+1]=x;}
    }
    for (i=0;i<n;i++){
    printf("%d", t[i]);
}
printf("\n");
for (j=0;j<m;j++){
    printf("%d", k[j]);
}

return(0);
}
