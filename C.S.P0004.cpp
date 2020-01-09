#include <stdio.h>
#include <string.h>
#include <conio.h>
int out(char a[], int b[], int n, int max)
{
    int i; 
    printf("\n Times of appearance for each character: ");
    printf("\n");
    for(i=0;i<n;i++)
    printf("%3c",a[i]); 
    printf("\n");
    for(int i=0; i<n;i++)
    printf("%3d",b[i]);
    printf("\nCharacters that appears the most:\n");
    for(i=0;i<n;i++)
    if(b[i]==max) printf("%3c", a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    if(b[i]==max) printf("%3d",b[i]);

}

int main(){

   char s[50], a[50], choice;
   int L, i, j, b[50], max, check, key, n;
   do{
   	a[0]='\0'; b[0]='\0'; max=0; n=0;
   printf("\nEnter a tring: ");
   gets(s); 
   L=strlen(s); 
   for(i=0; i<L; i++){
	   if(s[i]!=' '){
	   	    check=1;
	   	    for(j=0; j<L; j++){
	   	    	if(a[j]==s[i]){
	   	    		b[j]=b[j]+1;
	   	    		if(max<b[j]) max=b[j];
	   	    		check=0;
				   }
			   }
			if(check){
				   a[n]=s[i];
			   a[n+1]='\0';
			   b[n]=1;
			   b[n+1]='\0';
			   n++;
		    }
	   }
    }
    out(a, b, n, max);
    key=getch();
   }while(key!=27);
    return 0;
}
