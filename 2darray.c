#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int disp[2][3];
   /*Counter variables for the loop*/
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter the element in [%d][%d]",i+1,j+1);
            scanf("%d",&disp[i][j]);
        }
    }
   //Displaying array elements in matrix form
   printf("Two Dimensional array elements in matrix form:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}
