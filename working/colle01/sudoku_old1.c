#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define NR_OF_PARAMS 10
#define NR_L         9
#define NR_C         9
#define NR_CL        81
#define TRUE         1
#define FALSE        0
int ft_strlen(char *s)
{
   int ln;
   char *p;

   ln = 0;
   p = s;
   while(*p)
   {
      ++p;
	  ++ln;
   }
   return(ln);
}
int Sudoku_Verify(int argc,char *argv[])
{
   int k,j;
   char *p,errSw,T[NR_C+1];
   k=0;
   errSw = FALSE;
   if(argc!=NR_OF_PARAMS)
   {
      errSw = TRUE;
	  printf("\n*** Nr des parametres :  %d incorrect",argc);
	  return(1);
   }
   while(++k<=NR_OF_PARAMS-1)
   {
                         printf("\n%d <%s>\n",k,argv[k]);
      if(ft_strlen(argv[k]) != NR_C)
	  {
	     errSw=TRUE;
		 printf("\nNr des elements : %d incorrect dans <%s>",ft_strlen(argv[k]),argv[k]);
	     continue;
	  }
	  j=-1;
	  while(++j<=NR_C)
	  {
	     T[j]=0;
	  }
	  j=-1;
	  p=argv[k];
	  while(++j<NR_C)
	  {
	     if(*p == '.')
		 {
		    ++p;
		    continue;
		 }
	     if(*p < '1' || *p >'9')
         {
            errSw=TRUE;
            printf("\nCaractere inconnu <%c> en ligne %d <%s>",*p,k+1,argv[k]);
			++p;
			continue;
		 }
	     if(T[*p - '0'])
		 {
		    errSw=TRUE;
			printf("\nChiffre double <%c> en ligne %d <%s>",*p,k+1,argv[k]);
			++p;
			continue;
		 }
		 T[*p - '0']=TRUE;
		 ++p;
	  }
   }
   return(! errSw);
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
   char *p, *TabSud;
   int j,k;
   TabSud = (char *) malloc(NR_C * NR_L);
   if(TabSud == NULL)
   {
      return(NULL);
   }
   init_tab(TabSud, NR_C * NR_L);
   k = 0;
   while(++k<=NR_C)
   {
      p = argv[k];
	  j = 0;
	  while(++j <= NR_C)
	  {
	     if(*(p+j-1) != '.')
		 {
		    *(TabSud + (k - 1) * NR_C + (j - 1)) = * (p+j-1) - '0';
			      // int adr=(k - 1) * NR_C + (j - 1);
			      // printf("\nTabSud[%d] : %d",adr,(int) TabSud[adr]);
		 }
	  }
   }
   return(TabSud);
}
void displaySudoku(char *ZwXRT)
{
   int ln;
   int cl;
   char *p;
   ln = 0;
   p = ZwXRT;
   char cc;
   char c;
   cc = '\n';
   write(1, &cc, 1);
   while(++ln <= NR_L)
   {
      cl = 0;
      while(++cl <= NR_C)
	  {
		 c=*p + '0';
	     write(1, &c, 1);
		 ++p;
	  }
	  write(1, &cc, 1);
   }
}

char ** MakeSudo3d()
{
   int k;
   char ** T;
   T = (char **) malloc(NR_CL * sizeof(char *));
   if(T == NULL)
   {
      return(NULL);
   }
   k = -1;
   while(++k < NR_CL)
   {
      T[k] = (char *) malloc(NR_C + 1);
	  init_tab(T[k],NR_C + 1);
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
   int k=-1;
   char *p;
   char c;
   p = t;
   while(++k<size)
   {
      c = '0' + *p;
      write(1, &c, 1);
	  ++p;
   }
}

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
   int const T[NR_C] = {0,0,0,3,3,3,6,6,6};



}

void populateXY(char *SudoVal,int lin,int col,char *elem3d)
{
   populateLin(SudoVal,lin,elem3d);
   populateCol(SudoVal,col,elem3d);
   populateSQ(SudoVal,lin,col,elem3d);
   
}

void populateSudo3d(char * SudoVal,char **Sudo3d)
{
   int lin;
   int col;
   int adr;
   lin = -1;
   char T[NR_C];
   char *elem3d;
   while(++lin < NR_L)
   {
      col = -1;
	  while(++col < NR_C)
	  {
	     adr = lin * NR_C + col;
	     elem3d=Sudo3d[adr];
		 init_1_9(elem3d,NR_C+1);
		          /*if(lin==4 && col ==6)
				  {
				      printf("\n Tableau de line 4 et col 6\n");
				      printTab(elem3d, NR_C+1);
				  }*/
         populateXY(SudoVal,lin,col,elem3d);
	  }
   }

}

int Sudoku_Solve(int argc,char *argv[])
{
   char * sudoValues, ** sudo3d;
   if(! Sudoku_Verify(argc,argv)) return(1);
   sudoValues = Sudoku_Make_Tab(argc,argv);
   displaySudoku(sudoValues);
   if(sudoValues == NULL) return(1);
   sudo3d = MakeSudo3d();
   populateSudo3d(sudoValues, sudo3d);
   

   return(0);
}

int main(int argc,char *argv[]) {
   return(Sudoku_Solve(argc,argv));
   return(0);
}
