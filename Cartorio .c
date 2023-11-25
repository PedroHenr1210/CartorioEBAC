#include <stdio.h> //biblioteca de comunicação pelo usuario. 
#include <stdlib.h> //biblioteca de alocação de espaço e memória.
#include <locale.h> //Biblioteca de alocação de texte por região.
#include <string.h> //Biblioteca de string
// ; usado para instrução do computador


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
     
     file = fopen (arquivo, "a"); //"a" serve apenas para editar o arquivo, não reescrever com seria no caso "w"
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
   	printf("Não foi possivel localizar o CPF, por favor, tente de novo\n");

   }
	
	while(fgets(conteudo,200,file) !=NULL);
   {
   	printf("Essas são as informações do usuário: ");
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
 	  	printf("CPF não encontrado e/ou deletado:   \n  ");
 	  	
 	  	system("pause");
	  }
 	  
 	  
 	  
 	  
 } //Final do colchete deletar
 
int main()

{ //Inicio do Colchete Main 

            int opcao=0;
            int x=1;
            char senhadigitada []="a";
            for(x=1;x=1;) //Macete para repetição da função 
    
    
      {  //Inicio do colchete de retorno para menu principal  
	   //O laço usa-se para dar inicio e fim ao comando. Nesse caso, ao chegar após inserir o número int=1,2 ou 3, ele retornará para esse ponto.
	 
	  system("cls");
	  
      setlocale(LC_ALL, "Portuguese" );
    
    
           printf("\t\t## Cartório da EBAC ## \n");
           printf("\tEscolha a opção desejada pelo menu: \n");
           printf("\t\t1ª- Registrar nomes \n" );
           printf("\t\t2ª- Consultar nomes \n" );
           printf("\t\t3ª- Deletar nomes \n" );
           printf("Opção: ");
           scanf("%d", &opcao); //scanf usa-se para escanear a escolha do usuário //%d usado para armazenar uma variável do tipo inteiro 
    
           system("cls"); //system("cls") usado para 'limpar' as opcões anterior da tela
    
    
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
	 	     printf("Por favor, escolha um número entre as opçoes mostradas a cima.");
		     system("pause");
		     break;
      	
	       }  //Final do colchete de switch 
		   
	  } // Final do colchete de retorno 
	

 
    
       
}  //Final do Colchete Main 
 
 
