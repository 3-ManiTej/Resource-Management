#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	FILE *ptr;
	int id,r,i,j;
	char a[500];
	ptr=fopen("text.txt","r+");
	printf("Enter the room no");
	scanf("%d",&r);
	
	for(i=1;i<2;i++)
		{
			fscanf(ptr,"%s",a);
			id=atoi(a);
			
			if(id!=r)
			{
			printf("Room no %d is not available\n",r);
			for(j=1;j<1000;j++)
				{
				if(id==r-j)
					{
					fgets(a,500,(FILE*)ptr);
					printf("the Room NO %d is available\n",id);
					printf("%s",a);
					break;
					}
				
				else if(id==r+j)
					{
					fgets(a,500,(FILE*)ptr);
					printf("the Room NO %d is available\n",id);
					printf("%s",a);
					break;
					}
				}
			
			}	
		}
}
