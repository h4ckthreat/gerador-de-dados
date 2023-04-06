#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include <windows.h>
int main()
{  
      
      
      
       
   system ("color A"); 
   int opcao,erro=0;
   char resp;
   inicio:
   fflush(stdin);
   system("cls");
   printf("*==================================================================*\n");
   printf("|         GERADOR DE NUMEROS DE CPF, CNPJ E TITULO ELEITORAL       |\n");
   printf("|                                                                  |\n");
   printf("|                  Autor: Jadson lima de souza                     |\n");
   printf("|                                                                  |\n");
   printf("|                                                                  |\n");
   printf("*==================================================================*\n\n");
   printf("*------------------------------------------*\n");
   printf("|            Menu de opcoes                |\n");
   printf("*------------------------------------------*\n");
   printf("| 1 - Gerar numeros de CPF                 |\n");
   printf("| 2 - Gerar Numeros de CNPJ                |\n");
   printf("| 3 - Gerar Numeros de TITULO ELEITORAL    |\n");
   printf("| 4 - Finalizar programa                   |\n");
   printf("*------------------------------------------*\n");
   erro=0;
   do
   {
      erro++;
      if(erro>1)
      {
         printf("Erro: Opcao invalida!\n");
         erro=1;
      }
      printf("Informe a sua opcao: ");
      scanf("%d",&opcao); fflush(stdin);
   }while(opcao>4 || opcao<1);
   switch(opcao)
   {
      case 1:
      {
         system("cls");
         int numero[9],soma1,soma2,i,erro,cpf,quant;
         int parte1,parte2,parte3,dig1;
         int parte5,parte6,parte7,dig2;
   printf("*==================================================================*\n");
   printf("|        GERADOR DE NUMEROS DE CPF, CNPJ E TITULO ELEITORAL        |\n");
   printf("|                                                                  |\n");
   printf("|                   Autor: Jadson lima de souza                    |\n");
   printf("|                                                                  |\n");
   printf("|                                                                  |\n");
   printf("*==================================================================*\n\n");
         printf("Deseja gerar quantos numeros de CPF: ");
         scanf("%d",&quant);
         printf("\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xd\xcd\xcd\xcd\xcd\n");
         //*==========================================*
         //|        Geração dos numeros do CPF        |
         //*==========================================*
         for(cpf=1;cpf<=quant;cpf++)
         {
            for(i=1;i<= 9;i++)
            {
               erro=1;
               do
               {
                  if(erro>1)
                  {
                     printf("Numero invalido.\n");
                     erro=1;
                  }
                  numero[i]=rand()%9;
                  erro++;
               }while(numero[i]>9 || numero[i]<0);     
            }
            //*==========================================*
            //|       Primeiro digito veridicador        |
            //*==========================================*
            soma1=((numero[1]*10)+
                  (numero[2]*9)+
                  (numero[3]*8)+
                  (numero[4]*7)+
                  (numero[5]*6)+
                  (numero[6]*5)+
                  (numero[7]*4)+
                  (numero[8]*3)+
                  (numero[9]*2));
            parte1=int(soma1 / 11);
            parte2=(parte1 * 11);
            parte3=(soma1 - parte2);
            dig1=(11 - parte3);
            if(dig1>9)dig1=0;
            //*==========================================*
            //|        Segundo digito veridicador        |
            //*==========================================*
            soma2=((numero[1]*11)+
                  (numero[2]*10)+
                  (numero[3]*9)+
                  (numero[4]*8)+
                  (numero[5]*7)+
                  (numero[6]*6)+
                  (numero[7]*5)+
                  (numero[8]*4)+
                  (numero[9]*3)+
                  (dig1*2));
            parte5=int(soma2 / 11);
            parte6=(parte5 * 11);
            parte7=(soma2 - parte6);
            dig2=(11 - parte7);
            if(dig2>9)dig2=0;
            //*==========================================*
            //|       Impressao do numero completo       | 
            //*==========================================*
            for(i=1;i<=9;i++)
            {
               printf("%d",numero[i]);
               if(i-1==2) printf(".");
               if(i-1==5) printf(".");
            }
            printf("-%d%d\n",dig1,dig2); //dois últimos digitos
            printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xd\xcd\xcd\xcd\xcd\n");
         
         }
         printf("\nPressione ENTER para continuar...");
         getchar();
         getchar();
         break;
      }
      case 2:
      {
         system("cls");
         int numero[12],soma1,soma2,i,erro,cnpj,quant;
         int parte1,parte2,parte3,dig1;
         int parte5,parte6,parte7,dig2;
   printf("*==================================================================*\n");
   printf("|        GERADOR DE NUMEROS DE CPF, CNPJ E TITULO ELEITORAL        |\n");
   printf("|                                                                  |\n");
   printf("|                    Autor: Jadson lima de souza                   |\n");
   printf("|                                                                  |\n");
   printf("|                                                                  |\n");
   printf("*==================================================================*\n\n");
         printf("Deseja gerar quantos numeros de CNPJ: ");
         scanf("%d",&quant);
         printf("\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xd\xcd\xcd\xcd\xcd\n");
         //*==========================================*
         //|       Geração dos numeros do CNPJ        |
         //*==========================================*
         for(cnpj=1;cnpj<=quant;cnpj++)
         {
            for(i=1;i<=8;i++)
            {
               numero[i]=rand()%9;
            }
            numero[9]=0;
            numero[10]=0;
            numero[11]=0;
            numero[12]=rand()%9;
            //*==========================================*
            //|       Primeiro digito veridicador        |
            //*==========================================*
            soma1=((numero[1]*5)+
                  (numero[2]*4)+
                  (numero[3]*3)+
                  (numero[4]*2)+
                  (numero[5]*9)+
                  (numero[6]*8)+
                  (numero[7]*7)+
                  (numero[8]*6)+
                  (numero[9]*5)+
                  (numero[10]*4)+
                  (numero[11]*3)+
                  (numero[12]*2));
            parte1=int(soma1 / 11);
            parte2=(parte1 * 11);
            parte3=(soma1 - parte2);
            dig1=(11 - parte3);
            if(dig1>9)dig1=0;
            //*==========================================*
            //|        Segundo digito veridicador        |
            //*==========================================*
            soma2=((numero[1]*6)+
                  (numero[2]*5)+
                  (numero[3]*4)+
                  (numero[4]*3)+
                  (numero[5]*2)+
                  (numero[6]*9)+
                  (numero[7]*8)+
                  (numero[8]*7)+
                  (numero[9]*6)+
                  (numero[10]*5)+
                  (numero[11]*4)+
                  (numero[12]*3)+
                  (dig1*2));
            parte5=int(soma2 / 11);
            parte6=(parte5 * 11);
            parte7=(soma2 - parte6);
            dig2=(11 - parte7);
            if(dig2>9)dig2=0;
            //*==========================================*
            //|       Impressao do numero completo       | 
            //*==========================================*
            for(i=1;i<=12;i++)
            {
               printf("%d",numero[i]);//numeros do CNPJ
               if(i==2) printf(".");//imprime um ponto depois da 2ª casa
               if(i==5) printf(".");//imprime um ponto depois da 5ª casa
               if(i==8) printf("/");//imprime uma barra depois da 8ª casa
            }
            printf("-%d%d\n",dig1,dig2); // dois últimos digitos
            printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xd\xcd\xcd\xcd\xcd\n");
         }
         printf("\nPressione ENTER para continuar...");
         getchar();
         getchar();
         break;
      }
      case 3:
      {
         system("cls");
         int numero[10],soma1,soma2,i,te,quant;
         int parte1,parte2,parte3,parte4,dig1,dig2;
   printf("*==================================================================*\n");
   printf("|          GERADOR DE NUMEROS DE CPF, CNPJ E TITULO ELEITORAL      |\n");
   printf("|                                                                  |\n");
   printf("|                   Autor: Jadson lima de souza                    |\n");
   printf("|                                                                  |\n");
   printf("|                                                                  |\n");
   printf("*==================================================================*\n\n");
         printf("Deseja gerar quantos numeros de TITULO ELEITORAL: ");
         scanf("%d",&quant);
         printf("\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xd\xcd\xcd\xcd\xcd\n");
         //*========================================================*
         //|        Geração dos numeros do TITULO ELEITORAL         |
         //*========================================================*
         for(te=1;te<=quant;te++)
         {
            for(i=1;i<=8;i++)
            {
                 numero[i]=rand()%9;
                 numero[9]=rand()%2;
                 numero[10]=rand()%8;
            }
            //*==========================================*
            //|       Primeiro digito veridicador        |
            //*==========================================*
            soma1=((numero[1]*2)+
                  (numero[2]*3)+
                  (numero[3]*4)+
                  (numero[4]*5)+
                  (numero[5]*6)+
                  (numero[6]*7)+
                  (numero[7]*8)+
                  (numero[8]*9));
            parte1=int(soma1 / 11);
            parte2=(parte1 * 11);
            dig1=(soma1 - parte2);
            if(dig1>9)dig1=0;
            //*=========================================*
            //|       Segundo digito verificador        |
            //*=========================================*
            soma2=((numero[9]*7)+
                  (numero[10]*8)+
                  (dig1*9));
            parte3=int(soma2 / 11);
            parte4=(parte3 * 11);
            dig2=(soma2 - parte4);
            if(dig2>9)dig2=0;
            //*==========================================*
            //|       Impressao do numero completo       | 
            //*==========================================*
            for(i=1;i<=10;i++)
            {
               printf("%d",numero[i]);
               if(i==4) printf(" "); //imprime um espaço apos a 4ª casa
               if(i==8) printf(" "); //imprime um espaço apos a 8ª casa
            }
            printf("%d%d\n",dig1,dig2); //dois últimos digitos
            printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xd\xcd\xcd\xcd\xcd\n");
         }
         printf("\nPressione ENTER para continuar...");
         getchar();
         getchar();
         break;
      }
      case 4:
      {
         printf("\nVoce deseja realmente finalizar o programa (s/n)? ");
         scanf("%s",&resp);
         if((resp=='s') || (resp=='S')) goto fim;
         else goto inicio;
      }
   }
   goto inicio;
   fim:;
}

