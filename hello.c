              #include <stdio.h>
              
               int main() {
              
                 int a = 2;
                 int b = 2;
                 int c = a + b;
		 printf("C says: Hello, World!\n"); 
                 printf("%d + %d = %d\n",a,b,c);


   		 char *list_of_users[] = {"User1", "User2", "User3"};
		 printf("Printing list of users in C:\n");
		 for(int i = 0; i < sizeof(list_of_users) / sizeof(list_of_users[0]); i++){
		 	printf("%s\n", list_of_users[i]);
		 }		
                 return 0;

	       }


