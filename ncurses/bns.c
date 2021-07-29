#include <form.h>
#include <menu.h>
#include <ncurses.h>
#include <stdio.h>
#include <string.h>

int main() {
  FIELD *field[3];
  FORM *my_form;
  int ch;
  int row, col;

  /* Initialize curses */
  initscr();
  cbreak();
  noecho();
  keypad(stdscr, TRUE);

  /* Initialize the fields */
  field[0] = new_field(1, 10, 4, 18, 0, 0);
  field[1] = NULL;

  /* Set field options */
  set_field_back(field[0], A_UNDERLINE); /* Print a line for the option
                                          */
  field_opts_off(field[0], O_AUTOSKIP);  /* Don't go to next field when this */
                                         /* Field is filled up 		*/

  /* Create the form and post it */
  my_form = new_form(field);
  post_form(my_form);
  refresh();

  getmaxyx(stdscr, row, col);
  int x = 1;
  mvaddch(row, col, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
  mvprintw(4, 10, "Value 1:");
  refresh();

  /* Loop through to get user requests */
  while ((ch = getch()) != KEY_F(1)) {
    switch (ch) {
    case KEY_DOWN:
      /* Go to next field */
      form_driver(my_form, REQ_NEXT_FIELD);
      /* Go to the end of the present buffer */
      /* Leaves nicely at the last character */
      form_driver(my_form, REQ_END_LINE);
      break;
    case KEY_UP:
      /* Go to previous field */
      form_driver(my_form, REQ_PREV_FIELD);
      form_driver(my_form, REQ_END_LINE);
      break;
    default:
      /* If this is a normal character, it gets */
      /* Printed				  */
      form_driver(my_form, ch);
      break;
    }
  }

  /* Un post form and free the memory */
  unpost_form(my_form);
  free_form(my_form);
  free_field(field[0]);
  free_field(field[1]);

  endwin();
  return 0;
}
