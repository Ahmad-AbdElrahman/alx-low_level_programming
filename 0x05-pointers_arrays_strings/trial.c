
// C Program to convert string 
// into integer using for loop 
#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char* str = "ii"; 
    int i = 0, num = 0; 
    
    for(i = 0; *str != '\0'; i++)
    {
        if(*str >= 48 && *str =< 57)
        {
        // converting string to number 
            for (int i = 0; str[i] != '\0'; i++) {
                num = num * 10 + (str[i] - 48);
                printf("num = %d\n", num);
            } 
        }
        else
        {
            return(0);
        }
    }
    return 0; 
}
