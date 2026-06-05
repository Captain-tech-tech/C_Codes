// question #1

/*#include <stdio.h>
void main()
{
    int number,real_number,reverse_number;
    int D1,D2,D3,D4;
    int middle_sum;
    printf("Enter your four digit number : ");
    scanf("%d",&number);

    if (number<1000 || number>9999 )
    {
        printf("You have entered invalid number, Enter a four digit number");

        return;
    }
    real_number = number;


    D1 = number/1000;
    D2 = (number/100)%10;
    D3 = (number/10)%10;
    D4 = number%10;

    reverse_number = D4*1000 + D3*100 + D2*10 + D1;
    
         if(real_number == reverse_number)
            {
                printf("%d is a palindrome but ",real_number);
            }
         else
                {
                    printf("%d is not a palindrome . Not a special palindrome");
                    return;
                }   

        middle_sum = D2 + D3;
        if(middle_sum<=1) 
         {
            printf("Not speical palindrome");
            
         }  
        else if(middle_sum == 2 || middle_sum == 3)
         {
            printf("Special palindrome as well");
         }          
        else if(middle_sum == 5 || middle_sum == 7)
         {
            printf("Special palindrome as well");
         }
        else if(middle_sum == 11 || middle_sum == 13)
         {
           printf("Special palindrome as well"); 
        
         }
        else if(middle_sum == 17)
         {
            printf("Special palindrome as well");
         }   
        else
         {
            printf("Not special palindrome");
         } 

}*/

// question #2

/*#include <stdio.h>
void main()
{
   int attendence_percentage,internal_marks;
   char a;
   int final_marks;
   char grade;
   int scholarship = 0;

   printf("**********************************************\n");
   printf("**ELIGIBLITY CRITERIA TO APPLY FOR SCHOLARSHIP\n");
   printf("***********************************************\n");

   printf("Enter your attendence percentage : ");
   scanf("%d",&attendence_percentage);
   scanf("%c",&a);

   printf("Enetr your internal assesment marks : ");
   scanf("%i",&internal_marks);
   printf("Enter your final marks : ");
   scanf("%d",&final_marks); 


   if(attendence_percentage >= 75 && internal_marks >= 40)
     {
         printf("YOU ARE ELIGIBLE TO APPLY FOR SCHOLARSHIP\n");

         if(final_marks >= 90)
           {
            grade = 'A';
            printf("Grade A+\n");
           }
         else if(final_marks >= 80)
           {
            grade = 'A';
            printf("Grade A\n");
           }
         else if(final_marks >= 70)
           {
            grade = 'B';
            printf("Grade B\n");
           }  
         else if(final_marks >= 60)
           {
            grade = 'C';
            printf("Grade C\n");
           }  
         else if(final_marks >= 50)
           {
            grade = 'D';
            printf("Grade D");
           }  
         else 
           {
            grade = 'F';
            printf("Grade Fail");
           }
     }
   else 
     {
         printf("YOU ARE NOT ELIGIBLE TO APPLY FOR SCHOLARSHIP\n");
     } 


         if(attendence_percentage >= 90 && grade == 'A' && final_marks >= 90)
           {
            scholarship = 100;
           }
         else if(attendence_percentage >= 85 && grade == 'A')  
           {
            scholarship = 50;
           }
         else 
           {
            scholarship = 0;
           }  


             printf("-_--__---___--__-_\n");
             printf("|**FINAL RESULT**|\n");
             printf("-_--__---___--__-_\n");

          
printf("Attendence : %d\nInternal Marks : %d\nFinal Marks : %d\n--->Grade : %c\nScholarship : %d",attendence_percentage,
internal_marks,final_marks,grade,scholarship);             

}*/

// question #3

/*#include <stdio.h>
void main()
{
  int consumer_type,units_consumed;
  float total_bill,surcharge = 0.0;//surcharge is assigned 0.0 value b/c total_bill 
                                  //for commercial and domestic consumers will contain a garbage value

    printf("1 --> Domestic\n");
    printf("2 -->Commercial\n");
    printf("3 -->Industrial\n");

    printf("Enter your consuming type(1 for domestic,2 for commercial,3 for industrial) : ");
    scanf("%i",&consumer_type);

    printf("Enter the units number being used : ");
    scanf("%d",&units_consumed);

    switch(consumer_type)
      {case 1:    //domestic
          if(units_consumed <= 100)
           {
            total_bill = units_consumed*5;
           }
          else if(units_consumed <= 300)
           {
            total_bill = (100*5)+((units_consumed-100)*7);
           }
          else
           {
            total_bill = (100*5) + (200*7) +((units_consumed-300)*10);
           } 
          break;

      case 2:   //commercial 
          if(units_consumed <= 200)
           {
            total_bill = units_consumed*8;
           }     
          else if(units_consumed <= 500)
           {
            total_bill = (200*8) + ((units_consumed-200)*12);
           } 
          else
           {
            total_bill = (200*8)+(300*12)+((units_consumed-500)*15);
           } 
           break;

      case 3:  //Industrial
          if(units_consumed <= 500)     
           {
            total_bill = units_consumed*15;
           }
          else 
           {
            total_bill = (500*15)+((units_consumed-500)*20);
           } 

           if(units_consumed > 1000)
            {
              surcharge = total_bill*0.10;
              total_bill += surcharge;
            }
            break;

      default:
            printf("Invalid consumer type entered.\n");
            return;
      }

               printf("Total electricity bill amount : RS.%.2f\n",total_bill);
               
               if(consumer_type ==3 && units_consumed >1000)
                {
                  printf("Including Surcharge Of RS.%.2f",surcharge);
                }

                return;
            
}*/

// question #4

/*#include <stdio.h>
void main()
{
  char name_first_letter;
  int id_number;

    printf("Enter the first letter of your name(e.g : as A in case of Atif) : ");
    scanf("%c", &name_first_letter);

    printf("Enter a three digit ID number (like : 123): ");
    scanf("%i",&id_number);

    int D1 = id_number/100;
    int D2 = (id_number/10)%10;
    int D3 = id_number%10;

    char first_letter = name_first_letter;

    if(first_letter >= 'A' && first_letter <= 'Z')
     {  // for conversion to lowercase letter for easy check of vowel
       first_letter = first_letter + 32; 
     }

      if(first_letter == 'a' || first_letter == 'e' || first_letter == 'i' || first_letter == 'o' || first_letter == 'u')
       {
       D1+=5;
       D2+=5;
       D3+=5;
       }
      else
      {
        D1-=2;
        D2-=2;
        D3-=2;
      }  

      if(D1 > 9)
       {
        D1-=10;
       }
      else if(D1 < 0)
       {
        D1+=10;
       }

       if(D2 > 9)
        {
          D2-=10;
        }
       else if(D2 < 0) 
        {
          D2+=10;
        }

        if(D3 > 9)
         {
          D3-=10;
         }
        else if(D3 < 0)
         {
          D3+=10;
         } 

         int encoding_id = D1*100 + D2*10 + D3;

         char encoded_first_letter;

         switch(name_first_letter)
          {
            case 'A':
                encoded_first_letter = 'Z';
                                             break;
            case 'B':
                encoded_first_letter = 'Y';
                                             break;

            case 'C':
                encoded_first_letter = 'X';
                                               break;

            case 'D':
                encoded_first_letter = 'W';
                                               break;

            case 'E':
                encoded_first_letter = 'V';
                                                break;

            case 'F':
                encoded_first_letter = 'U';
                                                break;

            case 'G':
                encoded_first_letter = 'T';
                                                break;

            case 'H':
                encoded_first_letter = 'S';
                                                break;

            case 'I':
                encoded_first_letter = 'R';  
                                                break;
 
            case 'J':
                encoded_first_letter = 'Q';
                                                break;

            case 'K':
                encoded_first_letter = 'P'; 
                                                break;

            case 'L':
                encoded_first_letter = 'O';
                                                break;

            case 'M':
                encoded_first_letter = 'N';
                                                break;
            case 'N':
                encoded_first_letter = 'M';
                                             break;
            case 'O':
                encoded_first_letter = 'L';
                                             break;

            case 'P':
                encoded_first_letter = 'K';
                                               break;

            case 'Q':
                encoded_first_letter = 'J';
                                               break;

            case 'R':
                encoded_first_letter = 'I';
                                                break;

            case 'S':
                encoded_first_letter = 'H';
                                                break;

            case 'T':
                encoded_first_letter = 'G';
                                                break;

            case 'U':
                encoded_first_letter = 'F';
                                                break;

            case 'V':
                encoded_first_letter = 'E';  
                                                break;
 
            case 'W':
                encoded_first_letter = 'D';
                                                break;

            case 'X':
                encoded_first_letter = 'C'; 
                                                break;

            case 'Y':
                encoded_first_letter = 'B';
                                                break;

            case 'Z':
                encoded_first_letter = 'A';
                                                break;                                    
          }
          
          printf("Encoded Result : %c%d\n",encoded_first_letter,encoding_id);
                
             
          
          char decoding_letter;

          switch(encoded_first_letter)
           {
            case 'Z':
                decoding_letter = 'A';
                           
                break;
            case 'Y':
                decoding_letter = 'B';
                                                break;
            case 'X':
                decoding_letter = 'C';
                                                break;
            case 'W':
                decoding_letter = 'D';
                                                break;
            case 'V':
                decoding_letter = 'E';
                                                break;
            case 'U':
                decoding_letter = 'F';
                                                break;
            case 'T':
                decoding_letter = 'G';
                                                break;
            case 'S':
                decoding_letter = 'H';
                                                break;
            case 'R':
                decoding_letter = 'I';
                                                break;
            case 'Q':
                decoding_letter = 'J';
                                                break;
            case 'P':
                decoding_letter = 'K';
                                                break;
            case 'O':
                decoding_letter = 'L';
                                                break;
            case 'N':
                decoding_letter = 'M';
                                                break;
            case 'M':
                decoding_letter = 'N';
                                                break;
            case 'L':
                decoding_letter = 'O';
                                                break;
            case 'K':
                decoding_letter = 'P';
                                                break;
            case 'J':
                decoding_letter = 'Q';
                                                break;
            case 'I':
                decoding_letter = 'R';
                                                break;
            case 'H':
                decoding_letter = 'S';
                                                break;
            case 'G':
                decoding_letter = 'T';
                                                break;
            case 'F':
                decoding_letter = 'U';
                                                break;
            case 'E':
                decoding_letter = 'V';
                                                break;
            case 'D':
                decoding_letter = 'W';
                                                break;
            case 'C':
                decoding_letter = 'X';
                                                break;
            case 'B':
                decoding_letter = 'Y';
                                                break;
            case 'A':
                decoding_letter = 'Z';
                                                break;
            default:
                decoding_letter = encoded_first_letter;
                                                break;                                                                        
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
           } 


                int DD1 = encoding_id/100;
                int DD2 = (encoding_id/10)%10;
                int DD3 = encoding_id%10;
                
                if(first_letter=='a' || first_letter=='e' || first_letter=='i' || first_letter=='o' || first_letter=='u')
                  {
                  DD1-=5;
                  DD2-=5;
                  DD3-=5;
                  }
                else
                  {
                  DD1+=2;
                  DD2+=2;
                  DD3+=2;  
                  }  

                     if(DD1>9)
                     {
                      DD1-=10;
                     }
                     if(DD1<0)
                     {
                      DD1+=10;
                     }

                       if(DD2>9)
                       {
                        DD2-=10;
                       }
                       if(DD2<0)
                       {
                        DD2+=10;
                       }

                         if(DD3>9)
                         {
                          DD3-=10;
                         }
                         if(DD3<0)
                         {
                          DD3+=10;
                         }



            int decoded_id = DD1*100 + DD2*10 + DD3;
            printf("Decoded Result : %c%i",decoding_letter,decoded_id);

}*/

