#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
  char s[31], choice;
  int i;
  do{
    printf("Enter a string: ");
    gets(s);
    printf("\nThe original string: ");
    printf("%s", s);
    printf("\nThe reversed string: ");
    for(i=strlen(s); i>=0; i--) {
	     if (s[i]==' '){
		s[i]='\0';
		printf("%s ", &s[i]+1);
	    }
    } 
    printf("%s", s);
    printf("\nThe program continues to do another reverse task if user press enter key, exit is press Esc.\n");
    choice=getch();
   }while(choice!=27);
}
    
    
