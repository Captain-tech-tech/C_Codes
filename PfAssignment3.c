// question # 01
/*#include <stdio.h>
void main()
{
  int number, temp = 0;
  printf("Enter a number for collatz sequence : ");
  scanf("%d",&number);

  temp = number;

  int counter = 0;
  while(temp != 1)
    {
      if(temp % 2 == 0)
        {
          temp/=2;
        }
      else
        {
          temp = temp*3 + 1;
        }  
        counter++;
        printf("%d ",temp);
    }

    printf("\nThe operation performed %d times.\n",counter);

    int steps;
    while(counter >= 0)
      {
        steps = 1;
        temp = number;
        while(steps <= counter)
        {
          if(temp%2 == 0)
            {
              temp /= 2;
            }
          else
            {
              temp = temp*3 + 1;
            }  
            steps ++;
        }
        printf("%d ",temp);
        counter--;
      }
}*/

// question # 02
/*#include <stdio.h>
int main() {
    
    double balance = 5000.0;
    double transfer_account_balance = 1000.0;

    int op3 = 0; // Last operation
    int op2 = 0; // Second to last operation
    int op1 = 0; // Most recent operation

    int choice;
    int continue_operation;

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Welcome to the Advanced Banking System!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    do {
        printf("\n-------------------------------\n");
        printf("YOUR CURRENT BALANCE : $%.2f\n", balance);
        printf("--------------------------------\n");
        printf("1--> Deposit money\n");
        printf("2--> Withdraw money\n");
        printf("3--> Check balance\n");
        printf("4--> Transfer money\n");
        printf("5--> View mini history\n");
        printf("6 Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);
        
        while (  choice <= 0 || choice > 6)
        {
        printf("Invalid input. Sir enter a number between 1 and 6 : "); 
        }

        if (choice >= 1 && choice <= 5) {
            op3 = op2;
            op2 = op1;
            op1 = choice; 
        }

        switch (choice) {
            case 1: {
                double deposit_amount;
                printf("\nEnter amount to deposit : $");
                scanf("%lf",&deposit_amount);
                while (deposit_amount <= 0 || deposit_amount > 10000)
                {
                    printf("Invalid amount.Deposit must be positive and not more than $10,000.\n");
                }
                balance += deposit_amount;
                printf("Successfully deposited $%.2f. New balance: $%.2f\n", deposit_amount, balance);
                break;
            }
            case 2: {
                double withdraw_amount;
                printf("\nEnter amount to withdraw: $");
                scanf("%lf",&withdraw_amount);
                while (withdraw_amount <= 0) 
                {
                    printf("Invalid amount. Withdrawal amount must be positive.\n");                   
                }
                if (balance >= withdraw_amount) {
                    balance -= withdraw_amount;
                    printf("Successfully withdrew $%.2f. New balance: $%.2f\n", withdraw_amount, balance);
                } else {
                    balance -= 50.0;
                    printf("Insufficient funds, $50 fine applied. New balance: $%.2f\n", balance);
                }
                break;
            }
            case 3:
                printf("\nYour current balance is: $%.2f\n", balance);
                break;
            case 4: {
                double transfer_amount;
                double fee;
                printf("\nEnter amount to transfer: $");
                scanf("%lf", &transfer_amount);
                while (transfer_amount <= 0) 
                {
                    printf("Invalid amount. Transfer amount must be positive.\n");                    
                }
                fee = transfer_amount * 0.02;
                if (balance >= transfer_amount + fee) {
                    balance -= (transfer_amount + fee);
                    transfer_account_balance += transfer_amount;
                    printf("Transferred $%.2f with a $%.2f fee. New balance: $%.2f\n", transfer_amount, fee, balance);
                    printf("Recipient's new balance: $%.2f\n", transfer_account_balance);
                } else {
                    balance -= 50.0;
                    printf("Insufficient funds for transfer and fee, $50 fine applied. New balance: $%.2f\n", balance);
                }
                break;
            }
            case 5:
                printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("`Last 3 transactions History`\n");
                printf("\n`````````````````````````````\n");
  
                printf("3rd Last Operation: ");
                if (op3 == 1)
                 printf("Deposit\n");
                else if (op3 == 2) 
                printf("Withdraw\n");
                else if (op3 == 3) 
                printf("Check Balance\n");
                else if (op3 == 4) 
                printf("Transfer\n");
                else printf("NO TRANSAC...\n");
              
                printf("2nd Last Operation: ");
                if (op2 == 1) printf("Deposit\n");
                else if (op2 == 2) printf("Withdraw\n");
                else if (op2 == 3) printf("Check Balance\n");
                else if (op2 == 4) printf("Transfer\n");
                else printf("NO TRANSAC...\n");

                printf("Most recent operation: ");
                if (op1 == 1) printf("Deposit\n");
                else if (op1 == 2) printf("Withdraw\n");
                else if (op1 == 3) printf("Check Balance\n");
                else if (op1 == 4) printf("Transfer\n");
                else printf("NO TRANSAC...\n");
                break;
            case 6:
                break;
        }

        if (choice != 6) 
          {
            char continue_char;
            printf("\nDo you want to perform another operation.(y/n) : ");
            scanf(" %c",&continue_char);
            (continue_char == 'Y' || continue_char == 'y')?continue_operation == 1 : continue_operation == 0;
          }
        else
          {
            char confirm_exit;
            printf("\nAre you sure you want to exit.(y/n) : ");
            scanf(" %c", &confirm_exit);
            if (confirm_exit == 'y' || confirm_exit == 'Y')
                {
                continue_operation = 0; 
                } 
            else  
                {
                continue_operation = 1; 
                }
          }

    } while (continue_operation);

    printf("\nThank you for using the Advanced Banking System. Goodbye!\n");

    return 0;
}*/

// question # 03
/*#include <stdio.h>
// #include <stdlib.h>
int main() {
    int height, option;
    char symbol1, symbol2, fill_type;

    do {
        printf("Enter the height of your triangle (odd number >= 3) : ");
        scanf("%d",&height);
        if (height < 3 || height % 2 == 0) {
            printf("Invalid height. Please enter an odd number >= 3.\n");
        }
    } while (height < 3 || height % 2 == 0);

    do {
        printf("\nPrint one diamond or two overlapping diamonds? (1 for single, 2 for double): ");
        scanf("%d", &option); 
        if (option != 1 && option != 2) {
            printf("Invalid choice. Please enter 1 or 2.\n");
        }
    } while (option != 1 && option != 2);

    if (option == 1)
    {
        do {
            printf("Enter symbol to print (only * or #): ");
            scanf(" %c", &symbol1);

            if (!(symbol1 == '*' || symbol1 == '#'))
              {
                printf("Invalid symbol. Use only * or #.\n");
              }
            }
        while (!(symbol1 == '*' || symbol1 == '#'));

        do {
            printf("Hollow or filled? (y = hollow, n = filled): ");
            scanf(" %c", &fill_type);
            if (!(fill_type == 'y' || fill_type == 'n'))
              {
                printf("Invalid input. Use 'y' or 'n'.\n");
              }
            } 
        while (!(fill_type == 'y' || fill_type == 'n'));
    }
    else
    {
         do  {
            printf("Enter outer diamond symbol (only * or #): ");
            scanf(" %c", &symbol1);
            if (!(symbol1 == '*' || symbol1 == '#'))
              {
                printf("Invalid symbol. Use only * or #.\n");
              }
           }
         while (!(symbol1 == '*' || symbol1 == '#'));

         do {
            printf("Enter inner diamond symbol (only * or #, must be different from outer): ");
            scanf(" %c", &symbol2);
            if (!(symbol2 == '*' || symbol2 == '#') || symbol1 == symbol2)
              {
                printf("Invalid symbol or same as outer. Use only * or #, and ensure they are different.\n");
              }
           }
         while (!(symbol2 == '*' || symbol2 == '#') || symbol1 == symbol2);
    }

    printf("\nPrinting the diamond(s):\n");

    int i, j;
    int mid = height / 2;

    if (option == 1) {
        for (i = 0; i < height; i++) {
            for (j = 0; j < height; j++) 
            {
                int row_dist = (i >= mid) ? (i - mid) : (mid - i);
                int col_dist = (j >= mid) ? (j - mid) : (mid - j);
                int dist = row_dist + col_dist;

                if (fill_type == 'n') 
                {
                    if (dist <= mid) 
                    {
                        printf("%c", symbol1);
                    }
                     else 
                    {
                        printf(" ");
                    }
                }
                else
                { 
                    if (dist == mid)
                    {
                        printf("%c", symbol1);
                    }
                     else 
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
    } 
    else 
    {
        int inner_height = (height > 4) ? height - 2 : 3;
        if (inner_height % 2 == 0) {
            inner_height--;
        }
        int inner_mid = inner_height / 2;

        for (i = 0; i < height; i++) {
            for (j = 0; j < height; j++) {
                int row_dist = (i >= mid) ? (i - mid) : (mid - i);
                int col_dist = (j >= mid) ? (j - mid) : (mid - j);
                int dist = row_dist + col_dist;

                if (dist <= mid) {
                    int inner_row = i - (mid - inner_mid);
                    int inner_col = j - (mid - inner_mid);

                    int inner_row_dist = (inner_row >= inner_mid) ? (inner_row - inner_mid) : (inner_mid - inner_row);
                    int inner_col_dist = (inner_col >= inner_mid) ? (inner_col - inner_mid) : (inner_mid - inner_col);
                    int inner_dist = inner_row_dist + inner_col_dist;

                    if (inner_row >= 0 && inner_row < inner_height &&
                        inner_col >= 0 && inner_col < inner_height &&
                        inner_dist <= inner_mid) {
                        printf("%c", symbol2);
                    } else {
                        printf("%c", symbol1);
                    }
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}*/

// question # 04
/*#include <stdio.h>
int main() {
    int start, end;
    long long total_sum_all_tables = 0;
    long long largest_product;
    long long smallest_product;
    int first_product = 1;

    do {
        printf("Enter the starting number: ");
        scanf("%d", &start);
        printf("Enter the ending number: ");
        scanf("%d", &end);

        if (start > end) {
            printf("Error: Starting number cannot be greater than the ending number. Please try again.\n\n");
        }
    } while (start > end);

    for (int i = start; i <= end; i++)
    {
        long long sum_current_table = 0;
        printf("\n~~~ Multiplication Table For %d ~~~\n", i);

        for (int j = 1; j <= 10; j++) {
            long long product = (long long)i * j;

            if (first_product) 
            {
                largest_product = product;
                smallest_product = product;
                first_product = 0;
            } 
            else 
            {
                if (product > largest_product) {
                    largest_product = product;
                }
                if (product < smallest_product) {
                    smallest_product = product;
                }
            }

            if (product % 3 == 0 && product % 5 == 0)
             {
                printf("%d * %d = SKIP\n", i, j);
            } 
            else
            {
                printf("%d * %d = %lld\n", i, j, product);
            }

            sum_current_table += product;
        }

        printf("Sum of products for table %d: %lld\n", i, sum_current_table);
        total_sum_all_tables += sum_current_table;
    }

    printf("\n   ``Overall Summary``  \n");
    printf("---> Largest product found: %lld\n", largest_product);
    printf("---> Smallest product found: %lld\n", smallest_product);
    printf("---> Combined sum of all tables: %lld\n", total_sum_all_tables);

    if (total_sum_all_tables > 10000)
      {
        printf("Overflow Detected\n");
      }

    return 0;
}*/


