#include <stdio.h>
#include <stdlib.h>

int main() {

    int m1[2][2]={10,21,12,8};
    int m2[2][2]={15,9,20,7};
    int toplam[2][2];

    int i,j,k,l;

    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
        	toplam[i][j]=m1[i][j]+m2[i][j];
        }
	}

    for(k=0;k<2;k++)
    {
    	for(l=0;l<2;l++)
    	{
    		printf(" %d ",toplam[k][l]);
		}
		printf("\n");
	}
	return 0;
}
