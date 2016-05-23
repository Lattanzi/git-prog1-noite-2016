#include <stdio.h>

struct info
{
  char nome[30];
  float av1;
};

int main()
{
       int i,j,cont;
       cont=0;
       i=0;
       j=0;
       
      struct info aluno[30];
      struct info aux[30];
      
       for (i=0;i<30;i++)
       {      
          printf("\nEntre com o nome do aluno %d: ", i+1);
          scanf("%s",aluno[i].nome);
          printf("\nEntre com a Av1 de %s: ", aluno[i].nome);
          scanf("%f", &aluno[i].av1);
      }
     for(cont=0; cont<30; cont++)
      {
              for (j=0; j<30; j++)
              {
                   if (aluno[j].av1 < aluno[j+1].av1)
                   {
                       aux[j] = aluno[j];
                       aluno[j] = aluno[j+1];
                       aluno[j+1] = aux[j];
                   }
              }
      }
      
       printf("\n\tListagem AV1\t\n");
       printf("\n=========================\n");
       printf("\n Nome\t\t\t\t Av1\t\n");
        for(i=0; i<30;i++)
        {
          printf("%s\t\t\t\t%.2f\t\n", aluno[i].nome, aluno[i].av1);
        }
        
  return 0;
}