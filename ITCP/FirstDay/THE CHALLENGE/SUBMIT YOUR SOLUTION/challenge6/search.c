#include "stdio.h"
int main (){
int t[40]; int n,y,x,i;
printf("give the size of arrays ");
scanf("%d",&n);
for (i=0;i<n;i++){
    printf("type in an element ");
    scanf("%d",&t[i]);
}
printf("type in the element you're looking for \n");
scanf("%d",&x);
for (i=0;i<n;i++){
        if (t[i]==x) y=i;
       else y==-1;
}
printf("%d",y);
return(0);
}
