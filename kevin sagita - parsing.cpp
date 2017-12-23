#include <stdio.h>
#include <string.h>

int push(char str[]){
    char keywords[10][10] = {"kuda","kambing","ikan","anjing","kucing","sapi","burung"};
    
	int a, z = 0;
    
    for(a = 0; a < 26; a++){
        if(strcmp(keywords[a], str) == 0){
            z = 1;
            break;
        }
    }
    return z;
}

int main(){
	
	char input[100], operators[] = "=-+*/%";;
	char *output; 
	
	printf("input : ");
	scanf("%s",input); 

	
	output=strtok(input," ,.");
	
	while(output!=NULL){ 
	
		if(strcmp(output,"=")==0){ 
			printf("/n	%s -- available\n",output);
		}
		else if(strcmp(output,"-")==0){
			printf("\n	%s -- available\n",output);
		}
		else if(strcmp(output,"+")==0){
			printf("\n	%s -- available\n",output);
		}
		else if(strcmp(output,"*")==0){
			printf("\n	%s -- available\n",output);
		}
		else if(strcmp(output,"/")==0){
			printf("\n	%s -- available\n",output);
		}
		else if(strcmp(output,"%")==0){
			printf("\n	%s -- available\n",output);
		}
		else if(push(output)==1){
			printf("\n	%s -- available\n",output);
		}
		else{
			printf("\n	%s -- not available\n",output);
		}
		output=strtok(NULL," ,.");
	}
	
	printf("\n");
	return main();
}
