#ifndef READER
#define READER
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Macros.h"

typedef struct _changes{
  char type;
  int line;
  int col;
  int value;
  struct _changes *next;
}Changes;

typedef Changes Item;

Changes *ChangeType(char, int, int, int);

int Solve(Puzzle *);
int Solver(Puzzle*, int (*Verification) (Puzzle *));
void FillLine(Puzzle *);
void FillCol(Puzzle *);
void FillSumsLine(Puzzle *);
void FillSumsCols(Puzzle *);
void FindEmpty(Puzzle *, int *, int *);
void FillRandom(Puzzle *);
int WrongPuzz(Puzzle *);
int WrongLine(Puzzle *);
int WrongCol(Puzzle *);
int WrongSum(Puzzle *);
int CleanErrors(Puzzle *, int (*Verification) (Puzzle *));
int FullPuzz(Puzzle *);
int WrongPuzz2(Puzzle *);
int EqualLine(Puzzle *);
int EqualCol(Puzzle *);
void FillRandom2(Puzzle *);
void FindEmpty2(Puzzle *, int *, int *);
#endif