//first home work
#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
struct Bank_Account {
  char account_holder[20];
  long account_num;
  double balance;
  struct Bank_Account *next;
};
struct Bank_Account *head = NULL;

bool IsEmpty(struct Bank_Account *head) {
  return (head == NULL);
}
//Comparing all the linked list
void highest_balance(struct Bank_Account *head) {
  struct Bank_Account *ptr = head;
  float max = ptr->balance;
  if (!IsEmpty(ptr)) {
    while (ptr != NULL) {
      if (ptr->balance > max) {
        max = ptr->balance;
      }
      ptr = ptr->next;
    }
    printf("The highest balance is %.2lf\n", max);
  } else {
    printf("Sorry, you don't enter any data\n");
  }
}

int main() {
    int n;
printf("Enter how many Account do you want: \n");
scanf("%d",&n);
  for (int i = 0; i < n; i++) {
   struct Bank_Account *new_account = malloc(sizeof(struct Bank_Account));
  if (!IsEmpty(head)) {
    new_account->next = NULL;
    struct Bank_Account *temp = head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = new_account;
  } else {
    head = new_account;
  }
  printf("Enter the name for Account#%d\n",(i+1));
  scanf("%s", new_account->account_holder);
  printf("Enter the number for Account#%d\n",(i+1));
  scanf("%ld", &new_account->account_num);
  printf("Enter the balance for Account#%d\n",(i+1));
  scanf("%lf", &new_account->balance);
  printf("********************\n");
  }
//printing the highest balance after Enter the linked list
 highest_balance(head);

}
