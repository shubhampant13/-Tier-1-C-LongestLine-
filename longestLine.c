// Find the length and the contents of the LONGEST line in  the input
#include <stdio.h>
#define MAXLINE 1000

void copy(char to[], char from[]); 
int getLine(char line[], int maxline);

int main() {
          int max=0,len;
          char line[MAXLINE];
          char longest[MAXLINE];
          while((len = getLine(line,MAXLINE)) > 0)  //call by reference for array 'line' with array s[]
          {     
              if(len > max)
                {
                     max = len;
                     copy(longest,line);  // call by reference for array 'longest' with array to[] 
                }          
          }            
          if(max > 0)
            printf("The longest line in your input is : %s", longest); 
          getchar(); 
          return 0;
     }


int getLine(char s[],int lim){
         int i,c;
         for(i = 0 ; (i < lim-1) && ((c = getchar()) != EOF) && (c != '\n') ; ++i)
             s[i] = c;
         if(c == '\n'){
                s[i] = c;
                ++i; 
              }
         s[i] = '\0';
         return i;        
     }

void copy(char to[], char from[]){
         int i=0;
         while((to[i] = from[i]) != '\0')       
                  i++;                           
}

     
     
