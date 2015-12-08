/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_final_cleaned.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 11:55:23 by acresap           #+#    #+#             */
/*   Updated: 2015/12/01 12:37:37 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
** 'define' parameters
*/
#define NR_OF_PARAMS 10
#define NR_L         9
#define NR_C         9
#define NR_CL        81
#define TRUE         1
#define FALSE        0
#define NORMAL_END   0
#define ABNORMAL_END 1

void ft_putstr(char *str)
{
   char *p, c;
   p = str;
   while(*p)
   {
      c = *p;
      write(1, &c, 1);
	  ++p;
   }
}

void ft_putchar(char c)
{
   write(1, &c, 1);
}

/*
** Length of a string
*/
int ft_strlen(char *s)
{
   int ln;
   char *p;

   ln = 0;
   p = s;
   while(*(p++))
   {
	  ++ln;
   }
   return(ln);
}

/*
** Check for input errors
*/
int Sudoku_Verify(int argc,char *argv[])
{
   int j,k;
   char *p,errSw,doubleTest[NR_C+1];

   k = 0;
   errSw = FALSE;
   if(argc != NR_OF_PARAMS)
   {
      errSw = TRUE;
	  return(1);
   }
   while(++k <= NR_OF_PARAMS - 1)
   {
      if(ft_strlen(argv[k]) != NR_C)
	  {
	     errSw = TRUE;
	     continue;
	  }
	  j = -1;
	  while(++j <= NR_C)
	  {
	     doubleTest[j] = FALSE;
	  }
	  j = -1;
	  p = argv[k];
	  while(++j < NR_C)
	  {
	     if(*p == '.')
		 {
		    ++p;
		    continue;
		 }
	     if(*p < '1' || *p > '9')
         {
            errSw=TRUE;
            printf("\nCaractere inconnu <%c> en ligne %d <%s>",*p,k+1,argv[k]);
			++p;
			continue;
		 }
	     if(doubleTest[*p - '0'])
		 {
		    errSw=TRUE;
			printf("\nChiffre double <%c> en ligne %d <%s>",*p,k+1,argv[k]);
			++p;
			continue;
		 }
		 doubleTest[*p - '0'] = TRUE;
		 ++p;
	  }
   }
   if(errSw)
   {
       return(FALSE);
   }
   return(TRUE);
}

void init_tab(char *t,int size)
{
   char *p;
   int k;
   k = 0;
   p = t;
   while(++k <= size)
   {
      *p = 0x00;
	  ++p;
   }
}

char * Sudoku_Make_Tab(int argc,char *argv[])
{
   char *p, *ptab, *TabSud;
   int lin, col;
   TabSud = (char *) malloc(NR_CL * sizeof(char));
   if(TabSud == NULL)
   {
      return(NULL);
   }
   init_tab(TabSud, NR_CL);
   lin = -1;
   ptab = TabSud;
   while(++lin < NR_L)
   {
      p = argv[lin + 1];
	  col = -1;
	  while(++col < NR_C)
	  {
	     if(*(p + col) != '.')
		 {
			*ptab = *(p + col) - '0';			
		 }
		 ++ptab;
	  }
   }
   return(TabSud);
}
void displaySudoku(char *sudoVal)
{
   int ln, cl;
   char *p;
   ln = 0;
   p = sudoVal;
   char cc, c;
   cc = '\n';
   write(1, &cc, 1);
   while(++ln <= NR_L)
   {
      cl = 0;
      while(++cl <= NR_C)
	  {
		 c = *p + '0';
	     write(1, &c, 1);
		 ++p;
	  }
	  write(1, &cc, 1);
   }
}

char ** MakeSudo3d(char *sudoVal)
{
   int k;
   char ** T,*p;
   T = (char **) malloc(NR_CL * sizeof(char *));
   if(T == NULL)
   {
      return(NULL);
   }
   k = -1;
   p = sudoVal;
   while(++k < NR_CL)
   {
      if(*p == 0x00)
	  {
         T[k] = (char *) malloc(NR_C + 1);
	     init_tab(T[k],NR_C + 1);
	  } 
	  else
	  {
	  T[k] = NULL;
	  }
	  ++p;
   }
   return(T);
}

void init_1_9(char *t,int size)
{
   int k;
   char *p;
   
   k = -1;
   p = t;
   while(++k <= size)
   {
      *p = (char) k;
	  ++p;
   }
}

void printTab(char *t,int size)
{
   int k = -1;
   char *p;
   char c;

   p = t;
   while(++k < size)
   {
      c = '0' + *p;
      write(1, &c, 1);
	  ++p;
   }
}

/*
** Eliminate existing numbers in line. 
*/
void populateLin(char *SudoVal,int lin,char *elem3d)
{
   int k;
   char *p;

   k = -1;
   p = SudoVal + lin * NR_C;

   while(++k < NR_C)
   {
      if(*p > 0)
	  {
	     *(elem3d+*p)=0;
	  }
	  ++p;
   }
}

void populateCol(char *SudoVal,int col,char *elem3d)
{
   int k;
   char *p;

   k = -1;
   p = SudoVal + col;

   while(++k < NR_L)
   {
      if(*p > 0)
	  {
	     *(elem3d+*p)=0;
	  }
	  p = p + NR_C;
   }
}

void populateSQ(char *SudoVal,int lin,int col,char *elem3d)
{
   int const BlockStart[NR_C] = {0,0,0,3,3,3,6,6,6};
   int CornerL,CornerC,k,j,adr;
   char *p0,*p;

   CornerL = BlockStart [lin];
   CornerC = BlockStart [col];
   adr = CornerL * NR_C + CornerC;
   p0 = SudoVal + adr;
   k = -1;

   while(++k < 3)
   {
      j = -1;
      p = p0;
	  while(++j < 3)
	  {
	     *(elem3d+*p) = 0;
		 ++p;
	  }
	  p0 = p0 + NR_C;
   }
}

void populateXY(char *SudoVal,int lin,int col,char *elem3d)
{
   populateLin(SudoVal,lin,elem3d);
   populateCol(SudoVal,col,elem3d);
   populateSQ(SudoVal,lin,col,elem3d);
}

void populateSudo3d(char * SudoVal,char **Sudo3d)
{
   int lin, col, adr;
   lin = -1;
   char T[NR_C];
   char *elem3d;
   while(++lin < NR_L)
   {
      col = -1;
	  while(++col < NR_C)
	  {
	     adr = lin * NR_C + col;
	     elem3d = Sudo3d[adr];
		 if(elem3d != NULL)
		 {
		    init_1_9(elem3d,NR_C+1);
            populateXY(SudoVal,lin,col,elem3d);
         }
	  }
   }
}

int elementFound(char *t,int size)
{
   int k,ctr,NonZero;
   char *p;
   k = -1;
   p = t;
   ctr = 0;
   while(++k < size)
   {
      if(*p)
	  {
	     ++ctr;
		 NonZero = (int) *p;
	  }
	  ++p;
   }
   if(ctr == 1)
   {
      return(NonZero);
   }
   return(FALSE);
}

int GiveHypothesis(char *SudoVal,char **Sudo3d)
{
   int k,kl,kc,elemFound,adr,found;
   char *p;
   kl = -1;
   k = -1;
   found = FALSE;
   while(++kl<NR_L)
   {
      kc=-1;
	  while(++kc<NR_C)
	  {
	     ++k;
		 if(Sudo3d[k]==NULL)
		 {
		    continue;
		 }
	     if((elemFound=elementFound(Sudo3d[k],NR_C+1))!=FALSE)
		 {
		    found = TRUE;
            adr = kl * NR_C + kc;
		    *(SudoVal + adr) = elemFound;
		    free(Sudo3d[adr]);
		    Sudo3d[adr] = NULL;
		 }
	  }
   }
   return(found);
}

void cleanSlate(char **Sudo3d)
{
   int k;
   char *p;
   while(++k < NR_CL)
   {
      if(Sudo3d[k]!=NULL)
	  {
         free(Sudo3d[k]);
	  }
   }
}

int Sudoku_Solve(int argc,char *argv[])
{
   char *sudoValues, **sudo3d, stillFind;
   int iteration;

   if(Sudoku_Verify(argc,argv) == FALSE)
   {
      ft_putstr("Erreur");
	  ft_putchar('\n');
      return(ABNORMAL_END);
   }
   sudoValues = Sudoku_Make_Tab(argc,argv);
   if(sudoValues == NULL)
   {
      return(ABNORMAL_END);
   }
   iteration = 0;
   stillFind = TRUE;
   while(stillFind)
   {
      ++iteration;
      sudo3d = MakeSudo3d(sudoValues);
      populateSudo3d(sudoValues, sudo3d);
      stillFind = GiveHypothesis(sudoValues,sudo3d);
                            displaySudoku(sudoValues);
	  cleanSlate(sudo3d);
   }
   displaySudoku(sudoValues);
   return(NORMAL_END);
}

int main(int argc,char *argv[])
{
   if(Sudoku_Solve(argc,argv)==ABNORMAL_END)
   {
      return(ABNORMAL_END);
   }
   return(NORMAL_END);
}
