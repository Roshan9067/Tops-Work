// 22. WAP to input the week number and print week day. 
 
 #include <stdio.h>
 int main() {

   int weeknumber;

   printf("Enter Week number between 1 to 7: ");
   scanf("%d", &weeknumber);

   switch(weeknumber){
      case 1:
      printf("monday\n");
      break;

      case 2:
      printf("Tuesday\n");
      break;

      case 3:
      printf("Wednesday\n");
      break;

      case 4:
      printf("Thursday\n");
      break;

      case 5:
      printf("Friday\n");
      break;

      case 6:
      printf("Saturday\n");
      break;

      case 7:
      printf("Sunday\n");
      break;

      default:
      printf("Invalid week number enter the number between 1 to 7.");
      break;
      
      





   }


    
   return 0;
    
}
    
    