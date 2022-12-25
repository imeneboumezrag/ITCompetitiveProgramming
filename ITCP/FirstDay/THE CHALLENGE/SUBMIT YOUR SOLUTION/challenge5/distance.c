#include "stdio.h"
#include "math.h"
int main (){
int t[30]; int k[30]; int i,j,n,dnew,dmin,x;
printf("how many points are there ? \n");
scanf("%d", &n);
printf("type the coordinates \n");
for (i = 0; i < n; i++){
    scanf("%d %d",&t[i],&k[i]);
}
dmin=sqrt(pow((t[1]-t[2]),2) + pow((k[1]-k[2]),2));
for (i = 0; i < n; i++)
   {
     for (j = 0; j < n; j++)
      dnew = sqrt ((pow(t[i]-t[j+1],2)) + (pow(k[i]-k[j+1],2)));
      if (dnew < dmin){
        dmin=dnew;
      }
}
printf("the minimum dis is %d", &dmin);
return(0);
}
