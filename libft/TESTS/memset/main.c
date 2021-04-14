#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   printf("%s\n",str);

   ft_memset(str,'$',7);
   printf("%s\n",str);
   
   memset(str,'$',7);
   printf("%s\n",str);
   return(0);
}
