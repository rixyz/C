#include <ncurses.h>
#include <stdio.h>

int main(void) {
  int ch;
  char a[10];
  initscr();
  start_color();
  init_pair(1, COLOR_CYAN, COLOR_RED);
  raw();
  cbreak();
  noecho();

  int nlines = 10, ncols = 10, y0 = 5, x0 = 5, row, col;
  getmaxyx(stdscr, row, col);
  mvprintw(row / 2, col / 2, "%d %d", row, col);
  // WINDOW *win = newwin(nlines, ncols, y0, x0);
  printw("\n");
  ch = getch();

  if (ch == 1) {
    printw("a: 1\n");
  } else {
    printw("b: Key is ");
    attron(A_BOLD);
    printw("%c\n", ch);
    attroff(A_BOLD);
  }
  move(5, 5);
  attron(COLOR_PAIR(0));
  addch(ch | A_UNDERLINE | A_BLINK | COLOR_BLACK);
  mvaddch(8, 8, ACS_UARROW);
  echo();
  getstr(a);
  mvprintw(LINES - 2, 0, "%s", a);
  refresh();
  noecho();
  getch();
  endwin();

  return 0;
}
