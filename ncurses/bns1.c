#include <menu.h>
#include <ncurses.h> /* ncurses.h includes stdio.h */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))
#define CTRLD 4

void menu();
void new_acc();
void view_list();
void erase_acc();
void check_det();
void transact();

char exitcode;
struct date {
  int day, month, year;
};

struct {

  char name[60];
  int acc_no, age;
  char address[60];
  char citizenship[15];
  double phone;
  char acc_type[10];
  float amt;
  struct date dob;
  struct date deposit;
  struct date withdraw;

} add, upd, check, rem, transaction;

float interest(float t, float amount, int rate) {
  float SI;
  SI = (rate * t * amount) / 100.0;
  return (SI);
}
int main() {
  char mesg[] = "BANK MANAGEMENT SYSTEM";
  int row, col;
  char pass[10], password[10] = "pass";

  initscr(); /* start the curses mode */
  cbreak();
  noecho();
  start_color();

  init_pair(1, COLOR_BLUE, COLOR_BLACK);
  init_pair(2, COLOR_GREEN, COLOR_BLACK);
  wborder(stdscr, '|', '|', '-', '-', '+', '+', '+', '+');
  getmaxyx(stdscr, row, col); /* get the number of rows and columns */
  attron(COLOR_PAIR(1));
  mvprintw((row / 2) - 10, (col - strlen(mesg)) / 2, "%s", mesg);
  attron(COLOR_PAIR(2));
  mvprintw((row / 2) - 2, (col - strlen(mesg)) / 2, "%s", "Password: ");
  attroff(COLOR_PAIR(2));
  /*mvprintw(row - 2, 0, "This screen has %d rows and %d columns\n", row, col);
  printw("Try resizing your window(if possible) and then run this program "
         "again");
    */
  getstr(pass);
  clear();
  if (strcmp(pass, password) == 0) {
    menu();
  } else {
    printw("\n\nWrong password!!");
  login_try:
    mvprintw(4, 2, "Enter y to try again and n to exit:");
    exitcode = getch();
    if (exitcode == 'Y' || exitcode == 'y') {
      clear();
      main();
    } else if (exitcode == 'N' || exitcode == 'n') {
      exit(1);
    } else {
      printw("\nInvalid!");
      refresh();
      getch();
      clear();
      goto login_try;
    }
  }

  refresh();
  getch();
  endwin();

  return 0;
}

void menu() {
  wborder(stdscr, '|', '|', '-', '-', '+', '+', '+', '+');
  char *choices[] = {"New Account",  "Edit account",  "Perform Transaction",
                     "View details", "Erase account", "List all accounts",
                     "Exit"};
  ITEM **my_items;
  MENU *my_menu;
  ITEM *cur_item;
  int n_choices, c;
  keypad(stdscr, TRUE);
  int ch = 1, i;
  move(5, 5);
  n_choices = ARRAY_SIZE(choices);
  for (i = 0; i < n_choices; i++)
    my_items[i] = new_item(choices[i], " ");
  my_items[n_choices] = (ITEM *)NULL;

  my_menu = new_menu((ITEM **)my_items);
  mvprintw(LINES - 3, 2, "UP/DOWN arrow key to navigate\n");
  mvprintw(LINES - 2, 2, "Enter to select menu.");
  post_menu(my_menu);
  refresh();

  while ((c = getch())) {
    switch (c) {
    case KEY_DOWN:
      menu_driver(my_menu, REQ_DOWN_ITEM);
      ch++;
      break;
    case KEY_UP:
      menu_driver(my_menu, REQ_UP_ITEM);
      ch--;
      break;
    case 10: /* Enter */
             //    item_name(current_item(my_menu)), ch);
      free_item(my_items[0]);
      free_item(my_items[1]);
      free_item(my_items[3]);
      free_item(my_items[4]);
      free_item(my_items[7]);
      free_menu(my_menu);
      switch (ch) {
      case 1:
        new_acc();
        break;
      case 2:
        break;
      case 3:
        transact();
        break;
      case 4:
        check_det();
        break;
      case 5:
        erase_acc();
        break;
      case 6:
        view_list();
        break;
      case 7:
        exit(1);
      }
      break;
    }
    if (ch < 1) {
      ch = 1;
    } else if (ch > 7) {
      ch = 7;
    }
  }
  /*for (i = 0; i < n_choices; i++) {
    printw("b: %d ", i);
    getch();
    free_item(my_items[i]);
    printw("c: %d\n", i);
  }*/

  getch();
  endwin();
}

void new_acc() {
  clear();

  refresh();
  int choice;
  FILE *ptr;

  ptr = fopen("record.dat", "a+");
account_no:
  wborder(stdscr, '|', '|', '-', '-', '+', '+', '+', '+');
  printw("ADD RECORD ");
  echo();
  mvprintw(2, 2, "Enter today's date(mm/dd/yyyy):");
  scanw("%2d/%2d/%4d", &add.deposit.month, &add.deposit.day, &add.deposit.year);
  mvprintw(4, 2, "Enter the account number:");
  scanw("%d", &check.acc_no);
  while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",
                &add.acc_no, add.name, &add.dob.month, &add.dob.day,
                &add.dob.year, &add.age, add.address, add.citizenship,
                &add.phone, add.acc_type, &add.amt, &add.deposit.month,
                &add.deposit.day, &add.deposit.year) != EOF) {
    if (check.acc_no == add.acc_no) {
      printw("Account no. already in use!");

      getch();
      clear();
      goto account_no;
    }
  }
  add.acc_no = check.acc_no;
  mvprintw(6, 2, "Enter the name:");
  scanw("%s", add.name);
  mvprintw(8, 2, "Enter the date of birth(mm/dd/yyyy):");
  scanw("%d/%d/%d", &add.dob.month, &add.dob.day, &add.dob.year);
  mvprintw(10, 2, "Enter the age:");
  scanw("%d", &add.age);
  mvprintw(12, 2, "Enter the address:");
  scanw("%s", add.address);
  mvprintw(14, 2, "Enter the citizenship number:");
  scanw("%s", add.citizenship);
  mvprintw(16, 2, "Enter the phone number: ");
  scanw("%lf", &add.phone);
  mvprintw(18, 2, "Enter the amount to deposit:$");
  scanw("%f", &add.amt);
  mvprintw(20, 2,
           "Type of account:\n\t#Saving\n\t#Current\n\t#Fixed1(for 1 "
           "year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter "
           "your choice:");
  scanw("%s", add.acc_type);

  fprintf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", add.acc_no,
          add.name, add.dob.month, add.dob.day, add.dob.year, add.age,
          add.address, add.citizenship, add.phone, add.acc_type, add.amt,
          add.deposit.month, add.deposit.day, add.deposit.year);

  fclose(ptr);
  mvprintw(22, 2, "\nAccount created successfully!");
add_invalid:
  clear();
  refresh();
  wborder(stdscr, '|', '|', '-', '-', '+', '+', '+', '+');
  mvprintw(2, 2, "Enter y to main menu and n to exit:");
  exitcode = getch();
  if (exitcode == 'Y' || exitcode == 'y') {
    clear();
    menu();
  } else if (exitcode == 'N' || exitcode == 'n') {
    clear();
    refresh();
    exit(1);
  } else {
    printw("\nInvalid!");
    refresh();
    getch();
    clear();
    goto add_invalid;
  }
}

void view_list() {
  FILE *view;
  view = fopen("record.dat", "r");
  int test = 0;
  clear();

  init_pair(1, COLOR_RED, COLOR_BLACK);
  wborder(stdscr, '|', '|', '-', '-', '+', '+', '+', '+');
  attron(COLOR_PAIR(1));
  attron(A_UNDERLINE);
  mvprintw(2, 4, "ACC. NO.\t\tNAME\t\t\tADDRESS\t\t\tPHONE");
  attroff(COLOR_PAIR(2));
  attroff(A_UNDERLINE);
  while (fscanf(view, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no,
                add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age,
                add.address, add.citizenship, &add.phone, add.acc_type,
                &add.amt, &add.deposit.month, &add.deposit.day,
                &add.deposit.year) != EOF) {
    mvprintw(test + 4, 2, "%6d\t %10s\t\t\t%10s\t\t%.0lf", add.acc_no, add.name,
             add.address, add.phone);
    test++;
    refresh();
  }

  fclose(view);
  if (test == 0) {
    clear();
    printw("\nNO RECORDS!!\n");
    refresh();
  }

  getch();
view_list_invalid:
  clear();
  refresh();
  wborder(stdscr, '|', '|', '-', '-', '+', '+', '+', '+');
  mvprintw(2, 2, "Enter y to main menu and n to exit:");
  exitcode = getch();
  if (exitcode == 'Y' || exitcode == 'y') {
    clear();
    menu();
  } else if (exitcode == 'N' || exitcode == 'n') {
    clear();
    refresh();
    exit(1);
  } else {
    printw("\nInvalid!");
    refresh();
    getch();
    clear();
    goto view_list_invalid;
  }
}

void erase_acc() {
  echo();
  clear();
  refresh();
  FILE *old, *newrec;
  int test = 0;
  old = fopen("record.dat", "r");
  newrec = fopen("new.dat", "w");
  wborder(stdscr, '|', '|', '-', '-', '+', '+', '+', '+');
  mvprintw(2, 2, "Enter the account no. of the customer you want to delete:");
  scanw("%d", &rem.acc_no);
  while (fscanf(old, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no,
                add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age,
                add.address, add.citizenship, &add.phone, add.acc_type,
                &add.amt, &add.deposit.month, &add.deposit.day,
                &add.deposit.year) != EOF) {
    if (add.acc_no != rem.acc_no)
      fprintf(newrec, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",
              add.acc_no, add.name, add.dob.month, add.dob.day, add.dob.year,
              add.age, add.address, add.citizenship, add.phone, add.acc_type,
              add.amt, add.deposit.month, add.deposit.day, add.deposit.year);

    else {
      test++;
      mvprintw(4, 2, "Record deleted successfully!");
    }
  }
  fclose(old);
  fclose(newrec);
  remove("record.dat");
  rename("new.dat", "record.dat");
  if (test == 0) {
    clear();
    refresh();
    wborder(stdscr, '|', '|', '-', '-', '+', '+', '+', '+');
    mvprintw(3, 2, "No record found");
  erase_acc_invalid:
    mvprintw(4, 2, "Enter r to retry,y to main menu and n to exit:");
    exitcode = getch();
    if (exitcode == 'y' || exitcode == 'y') {
      clear();
      menu();
    } else if (exitcode == 'N' || exitcode == 'n') {
      clear();
      refresh();
      exit(1);
    } else if (exitcode == 'R' || exitcode == 'r') {
      erase_acc();
    } else {
      printw("\nInvalid!");
      refresh();
      getch();
      clear();
      goto erase_acc_invalid;
    }
  } else {
    mvprintw(2, 2, "Enter y to main menu and n to exit:");
    exitcode = getch();
    if (exitcode == 'Y' || exitcode == 'y') {
      clear();
      menu();
    } else {
      clear();
      refresh();
      exit(1);
    }
  }
}
void check_det() {
  clear();
  echo();

  FILE *ptr;
  int test = 0, rate;
  float time;
  float intrst;
  ptr = fopen("record.dat", "r");
  printw("Enter the account number:");
  scanw("%d", &check.acc_no);

  while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no,
                add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age,
                add.address, add.citizenship, &add.phone, add.acc_type,
                &add.amt, &add.deposit.month, &add.deposit.day,
                &add.deposit.year) != EOF) {
    if (add.acc_no == check.acc_no) {
      clear();
      test = 1;

      printw("\nAccount NO.:%d\nName:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s "
             "\nCitizenship No:%s \nPhone number:%.0lf \nType Of Account:%s "
             "\nAmount deposited:$ %.2f \nDate Of Deposit:%d/%d/%d\n\n",
             add.acc_no, add.name, add.dob.month, add.dob.day, add.dob.year,
             add.age, add.address, add.citizenship, add.phone, add.acc_type,
             add.amt, add.deposit.month, add.deposit.day, add.deposit.year);
      if (strcmp(add.acc_type, "fixed1") == 0) {
        time = 1.0;
        rate = 9;
        intrst = interest(time, add.amt, rate);
        printw("\n\nYou will get $%.2f as interest on %d/%d/%d", intrst,
               add.deposit.month, add.deposit.day, add.deposit.year + 1);
      } else if (strcmp(add.acc_type, "fixed2") == 0) {
        time = 2.0;
        rate = 11;
        intrst = interest(time, add.amt, rate);
        printw("\n\nYou will get $.%.2f as interest on %d/%d/%d", intrst,
               add.deposit.month, add.deposit.day, add.deposit.year + 2);

      } else if (strcmp(add.acc_type, "fixed3") == 0) {
        time = 3.0;
        rate = 13;
        intrst = interest(time, add.amt, rate);
        printw("\n\nYou will get $.%.2f as interest on %d/%d/%d", intrst,
               add.deposit.month, add.deposit.day, add.deposit.year + 3);

      } else if (strcmp(add.acc_type, "saving") == 0) {
        time = (1.0 / 12.0);
        rate = 8;
        intrst = interest(time, add.amt, rate);
        printw("\n\nYou will get $.%.2f as interest on %d of every month",
               intrst, add.deposit.day);

      } else if (strcmp(add.acc_type, "current") == 0) {

        printw("\n\nYou will get no interest\a\a");
      }
    }
  }

  fclose(ptr);
  if (test != 1) {
    clear();
    refresh();
    wborder(stdscr, '|', '|', '-', '-', '+', '+', '+', '+');
    mvprintw(3, 2, "No record found");
  check_det_invalid:
    mvprintw(4, 2, "Enter r to retry,y to main menu and n to exit:");
    exitcode = getch();
    if (exitcode == 'y' || exitcode == 'y') {
      clear();
      menu();
    } else if (exitcode == 'N' || exitcode == 'n') {
      clear();
      refresh();
      exit(1);
    } else if (exitcode == 'R' || exitcode == 'r') {
      check_det();
    } else {
      printw("\nInvalid!");
      refresh();
      getch();
      clear();
      goto check_det_invalid;
    }
  } else {
    mvprintw(12, 2, "Enter y to main menu and n to exit:");
    exitcode = getch();
    if (exitcode == 'Y' || exitcode == 'y') {
      clear();
      menu();
    } else {
      clear();
      refresh();
      exit(1);
    }
  }
}

void transact() {
  echo();
  clear();
  int choice, test = 0;
  FILE *old, *newrec;
  old = fopen("record.dat", "r");
  newrec = fopen("new.dat", "w");

  printw("Enter the account no. of the customer:");
  scanw("%d", &transaction.acc_no);
  while (fscanf(old, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no,
                add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age,
                add.address, add.citizenship, &add.phone, add.acc_type,
                &add.amt, &add.deposit.month, &add.deposit.day,
                &add.deposit.year) != EOF) {

    if (add.acc_no == transaction.acc_no) {
      test = 1;
      if (strcmp(add.acc_type, "fixed1") == 0 ||
          strcmp(add.acc_type, "fixed2") == 0 ||
          strcmp(add.acc_type, "fixed3") == 0) {
        printw("YOU CANNOT DEPOSIT OR WITHDRAW CASH IN FIXED ACCOUNTS!!!!!");
        getch();
        menu();
      }
      printw("\n\nDo you want to\n1.Deposit\n2.Withdraw?\n\nEnter your "
             "choice(1 for deposit and 2 for withdraw):");
      scanw("%d", &choice);
      if (choice == 1) {
        printw("Enter the amount you want to deposit:$ ");
        scanw("%f", &transaction.amt);
        add.amt += transaction.amt;
        fprintf(newrec, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",
                add.acc_no, add.name, add.dob.month, add.dob.day, add.dob.year,
                add.age, add.address, add.citizenship, add.phone, add.acc_type,
                add.amt, add.deposit.month, add.deposit.day, add.deposit.year);
        printw("\n\nDeposited successfully!");
      } else {
        printw("Enter the amount you want to withdraw:$ ");
        scanw("%f", &transaction.amt);
        add.amt -= transaction.amt;
        fprintf(newrec, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",
                add.acc_no, add.name, add.dob.month, add.dob.day, add.dob.year,
                add.age, add.address, add.citizenship, add.phone, add.acc_type,
                add.amt, add.deposit.month, add.deposit.day, add.deposit.year);
        printw("\n\nWithdrawn successfully!");
      }

    } else {
      fprintf(newrec, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",
              add.acc_no, add.name, add.dob.month, add.dob.day, add.dob.year,
              add.age, add.address, add.citizenship, add.phone, add.acc_type,
              add.amt, add.deposit.month, add.deposit.day, add.deposit.year);
    }
  }
  fclose(old);
  fclose(newrec);
  remove("record.dat");
  rename("new.dat", "record.dat");
  if (test != 1) {
    clear();
    refresh();
    wborder(stdscr, '|', '|', '-', '-', '+', '+', '+', '+');
    mvprintw(3, 2, "No record found");
  transact_invalid:
    mvprintw(4, 2, "Enter r to retry,y to main menu and n to exit:");
    exitcode = getch();
    if (exitcode == 'y' || exitcode == 'y') {
      clear();
      menu();
    } else if (exitcode == 'N' || exitcode == 'n') {
      clear();
      refresh();
      exit(1);
    } else if (exitcode == 'R' || exitcode == 'r') {
      transact();
    } else {
      printw("\nInvalid!");
      refresh();
      getch();
      clear();
      goto transact_invalid;
    }
  } else {
    mvprintw(12, 2, "Enter y to main menu and n to exit:");
    exitcode = getch();
    if (exitcode == 'Y' || exitcode == 'y') {
      clear();
      menu();
    } else {
      clear();
      refresh();
      exit(1);
    }
  }
}
