#include<stdio.h>
int main()
{
    int disp[2][3];
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter the element in [%d][%d]",i+1,j+1);
            scanf("%d",&disp[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("(%d)(%d) = {%d} \n",i+1,j+1,disp[i][j]);
            }
        }

    return 0;
}
