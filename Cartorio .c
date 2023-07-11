#include <stdio.h> //biblicoteca de comunica��o com o usuario
#include <stdlib.h>//biblicoteca de aloca��o de espa�o em mem�ria
#include <locale.h>//biblicoteca de aloca��es de texto por regi�o
#include <string.h>//biclioteca responsalve por cuidar da string

int registro() //Fun��o responsavel por cadastradar os usu�rios no sistema
{
	//inicio cria��o de variaveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o de variaveis/string
	
	printf("Digite o CPF a ser cadastrado: ");//coletando informa��es do usuario
	scanf("%s", cpf);//%s refere-se as strings/variaveis
	
	strcpy(arquivo,cpf); //Responsavel por copiar os valores das string
	
	FILE *file; //Cria o arquivo
	file = fopen(arquivo, "w"); //Cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a");//cria o arquivo e o "a" significa atualizar
	fprintf(file,",");//Salvo o valor e adiciona uma ","para que as informa��es n�o fiquem juntas
	fclose(file);//fecha o arquivo
	
	printf("Digite o Nome a ser cadastrado: ");//coleta as informa��es do usuario(o Nome)
	scanf("%s",nome);//refere-se as strings/variaveis
	
	file = fopen(arquivo, "a");//Cria o arquivo 
	fprintf(file,nome);//salva o valor da variavel
	fclose(file);//fecha o arquivo

    file = fopen(arquivo, "a");//cria o arquivo
	fprintf(file,",");//Salva o valor e adiciona uma "," para  que as informa��es n�o fiquem juntas.
	fclose(file);//fecha o arquivo
	
    printf("Digite o Sobrenome a ser cadastrado: ");//Coletando as informa��es do usuario(O sobrenome)
    scanf("%s",sobrenome);//refese-se as strings
    
    file = fopen(arquivo, "a");//cria o arquivo
    fprintf(file,sobrenome);//salvo o valor da variavel
    fclose(file);//fecha o arquivo
    
    file = fopen(arquivo, "a");//cria o arquivo
	fprintf(file,",");//Salva o valor e adiciona uma "," para  que as informa��es n�o fiquem juntas.
	fclose(file);//fecha o arquivo
	
	printf("Digite o Cargo a ser cadastrado: ");//Coletando as informa��es do usuario(O seu cargo)
	scanf("%s",cargo);//refere-se as strings
	
	file = fopen(arquivo, "a");//cria o arquivo
	fprintf(file,cargo);//salva o valor da variavel
	fclose(file);//fecha o arquivo
	
	system("pause");//pausa para o usuario ver as informa��es
    
	
	
}

int consulta()
{
	
	setlocale(LC_ALL, "Portuguese");//Definindo a linguagem
	
	//inicio cria��o de variaveis/string
	char cpf[40];
	char conteudo[200];
	//fim da cria��o!
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);//%s refere-se a string
	
	FILE *file;//cria o arquivo
	file = fopen(cpf, "r");//abre o arquivo
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo,N�o localizado!.\n");
	}
	while(fgets(conteudo, 200, file) !=NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf ("\n\n");
	}
	
	    system("pause");//pausa para o usuario ver as informa��es
	
}

int deletar()
{     //inicio da cria��o
	 char cpf[40];
	 //fim da cria��o
	 
	 printf("Digite o CPF do usu�rio a ser deletado: ");
	 scanf("%s",cpf);
	 
	 remove(cpf);
	 
	 FILE *file;
	 file = fopen(cpf, "r");
	 
	 if(file == NULL);
	 {
	 	printf("O usuario n�o se encontra no sistema!.\n");
	 	system("pause");
	 }
	 
	 
}



int main()
{
	int opcao=0;//Definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
		system("cls");//Responsavel por limpar o tela

		
	

     setlocale(LC_ALL, "Portuguese");//Definindo a Linguagem
	
	 printf("### Cart�rio da EBAC ###\n\n");//Inicio do menu
 	 printf("Escolha a op��o desejada do menu\n\n");
	 printf("\t1 - Registrar nomes\n");
	 printf("\t2 - Consultar nomes\n");
	 printf("\t3 - Deletar nomes\n\n");
	 printf("Op��o:" );//Fim do menu
	
	 scanf("%d", &opcao);//armazenando a escolha do usu�rio
	
	 system("cls");
	 
	 
	 switch(opcao)//inicio da sele��o do menu
	 {
	 	case 1:
	 	registro();//chamada de fun��es de registro
		break;
		
		case 2:
	    consulta();//chamada de fun��es de consulta
		break;
	    
	    case 3:
	    deletar();//chamada de fun��es de deletar
	    break;
	    
	    default:
	    	printf("Essa op��o n�o est� disponivel!\n");
		system("pause");
		break;
	 }//fim da sele��o 
	 
	
	
	

	}
	
}

   
   
   
   
   	
   
   	
   


