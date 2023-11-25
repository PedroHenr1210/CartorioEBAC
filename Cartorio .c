#include <stdio.h> //biblioteca de comunica��o pelo usuario. 
#include <stdlib.h> //biblioteca de aloca��o de espa�o e mem�ria.
#include <locale.h> //Biblioteca de aloca��o de texte por regi�o.
#include <string.h> //Biblioteca de string
// ; usado para instru��o do computador


int Registrar()

{ //colchete da IntRegistrar
        
        char arquivo[40];
        char cpf[40];
        char nome[40];
        char sobrenome[40];
        char cargo[40];
        
     printf("Digite o cpf a ser cadastrado:  ");
     scanf("%s", cpf); //Scanf usa para o sistema recohecer e salvar o numero usado 
     
     strcpy(arquivo, cpf); //Responsavel por copiar os valores de string
     
     FILE *file; //Cria o arquivo file
     file = fopen(arquivo, "w"); //Pega o arquivo file pede para abri-lo no arquivo e para digitar o cpf "w"
     fprintf(file,cpf); //Usa para salvar o arquivo 
     fclose(file); //fecha o arquivo 
     
     file = fopen (arquivo, "a"); //"a" serve apenas para editar o arquivo, n�o reescrever com seria no caso "w"
     fprintf(file, ","); //"," serve para separar os char quando colocado 
     fclose(file); //Sempre lembrar de fechar o arquivo aberto "file=fopen fclose(file)"
     
     
     printf("Digite o nome a ser cadastrado:   ");
     scanf("%s", nome);
     file = fopen(arquivo, "a");
     fprintf(file,nome);
     fclose(file);
     
     file = fopen (arquivo, "a"); 
     fprintf(file, ","); 
     fclose(file);
     
     printf("Digite o sobrenome a ser cadastrado:  ");
     scanf("%s", sobrenome);
     file = fopen(arquivo, "a");
     fprintf(file,sobrenome);
     fclose(file);
     
     file = fopen (arquivo, "a"); 
     fprintf(file, ","); 
     fclose(file);
     
     printf("Digite o cargo a ser cadastrado:  ");
     scanf("%s",cargo);
     file = fopen(arquivo, "a");
     fprintf(file,cargo);
     fclose(file);
     
     system("pause");
     
     
     
} //Final do Colchete Registrar

int Consultar()

{ //Inicio do colchete Consultar
  
  setlocale(LC_ALL, "Portuguese" );
  
   char cpf [40];
   char conteudo [200];
   
   printf("Digite o CPF que deseja localizar: ");
   scanf("%s", cpf);
   
   FILE *file;
   file = fopen(cpf, "r");
   
   if(file==NULL)
   {
   	printf("N�o foi possivel localizar o CPF, por favor, tente de novo\n");

   }
	
	while(fgets(conteudo,200,file) !=NULL);
   {
   	printf("Essas s�o as informa��es do usu�rio: ");
   	printf("%s", conteudo);
   	printf("\n\n");
   }
   fclose(file); 
      system("pause");
		 	
}  //Final do colchete consultar

 
 int Deletar()
 { //Inicio do colchete deletar
 
 
 	  char cpf[40];
 	  
 	  printf("Digite qual CPF cadastrado deseja remover do arquivo:  ");
 	  scanf("%s", cpf);
 	  
 	  remove(cpf);
 	  
 	  FILE *file;
 	  file = fopen(cpf, "r");
 	  
 	  if (file == NULL)
 	  {
 	  	printf("CPF n�o encontrado e/ou deletado:   \n  ");
 	  	
 	  	system("pause");
	  }
 	  
 	  
 	  
 	  
 } //Final do colchete deletar
 
int main()

{ //Inicio do Colchete Main 

            int opcao=0;
            int x=1;
            char senhadigitada []="a";
            for(x=1;x=1;) //Macete para repeti��o da fun��o 
    
    
      {  //Inicio do colchete de retorno para menu principal  
	   //O la�o usa-se para dar inicio e fim ao comando. Nesse caso, ao chegar ap�s inserir o n�mero int=1,2 ou 3, ele retornar� para esse ponto.
	 
	  system("cls");
	  
      setlocale(LC_ALL, "Portuguese" );
    
    
           printf("\t\t## Cart�rio da EBAC ## \n");
           printf("\tEscolha a op��o desejada pelo menu: \n");
           printf("\t\t1�- Registrar nomes \n" );
           printf("\t\t2�- Consultar nomes \n" );
           printf("\t\t3�- Deletar nomes \n" );
           printf("Op��o: ");
           scanf("%d", &opcao); //scanf usa-se para escanear a escolha do usu�rio //%d usado para armazenar uma vari�vel do tipo inteiro 
    
           system("cls"); //system("cls") usado para 'limpar' as opc�es anterior da tela
    
    
             switch(opcao)
            {  //Inicio do colchete de switch
	          case 1: // Ao usar o case, sempre lembrar de terminar com o break; 
              Registrar();
	          break;
	    
	          case 2:
	          Consultar();
	 	      break;
	 	
              case 3: 
	 	      Deletar();
		      break; 
	
		
	 	     default: 
	 	     printf("Por favor, escolha um n�mero entre as op�oes mostradas a cima.");
		     system("pause");
		     break;
      	
	       }  //Final do colchete de switch 
		   
	  } // Final do colchete de retorno 
	

 
    
       
}  //Final do Colchete Main 
 
 
