/*
	Name: Tyler Ailes
	Class: CSCI 155
	Date: Oct 9, 2019
	Desc: Prints based on user input
*/

#include <stdio.h>

int main(void) {
   char star = '*';
   char sos[20] = "...---...";
   int menu_num;
   int line_width;
   int sos_amount;
   int num_one;
   int num_two;
   int i; // inference number 
   
   // print menu
   printf("1. Horizontal Line\n");
   printf("2. SOS\n");
   printf("3. Range\n");
   printf("4. Exit\n");
   printf("What task would you like to do?\n");
   scanf("%d", &menu_num);
   printf("\n"); // newline to keep it more clean
   
   while(menu_num != 4){
   // output one
   if (menu_num == 1) {
      printf("How wide?\n");
      scanf("%d", &line_width);
         while (line_width <= 0) { // makes sure input is positive
            printf("Negative width doesn't make sense! Try again:");
            scanf("%d", &line_width);
         }     
         i = 0;
         while (i < line_width) {
            printf("%c", star);
            i++;
            }
      printf("\n");
   }
   
   // output two
   if (menu_num == 2) {
      printf("How many?\n");
      scanf("%d", &sos_amount);
         while (sos_amount < 0) { // makes sure input is positive
            printf("Negative width doesn't make sense! Try again:");
            scanf("%d", &sos_amount);
         }     
         for (i = 0; i < sos_amount; i++) {
            printf("%s ", sos);
         }
      printf("\n");
   }
   
   // gathers input for three
   if (menu_num == 3) {
      printf("Enter value one:\n");
      scanf("%d", &num_one);
      printf("Enter value two:\n");
      scanf("%d", &num_two);
      printf("\n");
   
   // output for three
   if (num_one < num_two) { 
      for (i = num_one; i <= num_two; i++)
      printf("%d ", i);
   }     else { // switching around inputs for chronological order
            for (i = num_two; i <= num_one; i++)
            printf("%d ", i);
         }
      printf("\n");
   }

   // print menu
   printf("1. Horizontal Line\n");
   printf("2. SOS\n");
   printf("3. Range\n");
   printf("4. Exit\n");
   printf("What task would you like to do?\n");
   scanf("%d", &menu_num);
   printf("\n"); // newline to keep it more clean

   }
   
   printf("Thank you and have a great day!\n");
   return 0;
}



/*
while( not 4){
   
   if (==1)
   
   else if (==2)
   
   else if (==3)
   
   print menu
   scanf()
}


// output for 4
   if (menu_num == 4) {
      printf("Thank you and have a great day!\n");
   }

*/

/*while (menu_num != 4) { // loops until 4 is entered
      if (menu_num == 1) { // option 1
         printf("How wide?\n");
         scanf("%d", &line_width);
         while (line_width <= 0) { // makes sure input is positive
            printf("Negative width doesn't make sense! Try again:");
            scanf("%d", &line_width);
         }  while (i < line_width) {
               printf("%c", star);
               i++;
            }
      printf("\n\n");
      break;
      }
   }
   
   // printing menu again
   printf("1. Horizontal Line\n");
   printf("2. SOS\n");
   printf("3. Range\n");
   printf("4. Exit\n");
   printf("What task would you like to do?\n");
   scanf("%d", &menu_num);
   printf("\n"); // newline to keep it more clean
   
   while (menu_num != 4) { // loops until 4 is entered
      if (menu_num == 2) { // option 2
         printf("How many?\n");
         scanf("%d", &sos_amount);
            while (sos_amount < 0) { // makes sure input is positive
               printf("Negative width doesn't make sense! Try again:");
               scanf("%d", &sos_amount);
            }  for (i = 0; i < sos_amount; i++) {
                  printf("%s ", sos);
               }
      printf("\n\n");
      break;
      }
   }
   
   // printing menu again
   printf("1. Horizontal Line\n");
   printf("2. SOS\n");
   printf("3. Range\n");
   printf("4. Exit\n");
   printf("What task would you like to do?\n");
   scanf("%d", &menu_num);
   printf("\n"); // newline to keep it more clean
   
   while (menu_num != 4) {
      // gathers input for three
   if (menu_num == 3) {
      printf("Enter value one:\n");
      scanf("%d", &num_one);
      printf("Enter value two:\n");
      scanf("%d", &num_two);
      printf("\n");
   
   // output for three
   if (num_one < num_two) { 
      for (i = num_one; i <= num_two; i++)
      printf("%d ", i);
   } else { // switching around inputs for chronological order
     for (i = num_two; i <= num_one; i++)
     printf("%d ", i);
   }
   }
   */