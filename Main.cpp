#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_line(FILE *finp)
{
	int count = 0;
	char ch;
	for (ch = getc(finp); ch != '\n'; ch = getc(finp))
	count++;
	return (count);
}

int main()
{
	int count = 0,b = 0,i=0,d=0,j=0;
	
	char fName[50],mName[50],lName[50],a[50];
	
	printf("Enter your first and last name: ");
    
    
   scanf("%[^\n]%*c", a); 
	
	
	
	while(a[i] != '\0') {
		
		if(a[i] == ' ') b++;
		i++;	
	}
	
	i=0;
	if(b==1) {
		while(a[i] != '\0') {
			
			if(d == 0) fName[j] = a[i]; else lName[j] = a[i];
			
			if(a[i] == ' ')  {d = 1; j =0;}
			
			j++;
			i++;	
		}
	} else {
		while(a[i] != '\0') {
			
			if(d == 0) fName[j] = a[i];
			if(d == 1) mName[j] = a[i]; 
			if(d == 2) lName[j] = a[i];  
			
			if(a[i] == ' ')  {d++; j =0;}
			
			j++;
			i++;	
		}		
	}
	

	i = 0;
	while(fName[i] != '\0') { printf("%c",fName[i]); i++; }
	
	
	if(b>1) {	
		printf("%c.",toupper(mName[1]) );
			
	}	
	
	printf(" ");
	
	i = 1;
	while(lName[i] != '\0') { printf("%c",lName[i]); i++; }	
    
    return 0;

}
