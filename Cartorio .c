#include <stdio.h> //biblicoteca de comunicação com o usuario
#include <stdlib.h>//biblicoteca de alocação de espaço em memória
#include <locale.h>//biblicoteca de alocações de texto por região
#include <string.h>//biclioteca responsalve por cuidar da string

int registro() //Função responsavel por cadastradar os usuários no sistema
{
	//inicio criação de variaveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de variaveis/string
	
	printf("Digite o CPF a ser cadastrado: ");//coletando informações do usuario
	scanf("%s", cpf);//%s refere-se as strings/variaveis
	
	strcpy(arquivo,cpf); //Responsavel por copiar os valores das string
	
	FILE *file; //Cria o arquivo
	file = fopen(arquivo, "w"); //Cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); //Fecha o arquivo
	
	file = fopen(arquivo, "a");//cria o arquivo e o "a" significa atualizar
	fprintf(file,",");//Salvo o valor e adiciona uma ","para que as informações não fiquem juntas
	fclose(file);//fecha o arquivo
	
	printf("Digite o Nome a ser cadastrado: ");//coleta as informações do usuario(o Nome)
	scanf("%s",nome);//refere-se as strings/variaveis
	
	file = fopen(arquivo, "a");//Cria o arquivo 
	fprintf(file,nome);//salva o valor da variavel
	fclose(file);//fecha o arquivo

    file = fopen(arquivo, "a");//cria o arquivo
	fprintf(file,",");//Salva o valor e adiciona uma "," para  que as informações não fiquem juntas.
	fclose(file);//fecha o arquivo
	
    printf("Digite o Sobrenome a ser cadastrado: ");//Coletando as informações do usuario(O sobrenome)
    scanf("%s",sobrenome);//refese-se as strings
    
    file = fopen(arquivo, "a");//cria o arquivo
    fprintf(file,sobrenome);//salvo o valor da variavel
    fclose(file);//fecha o arquivo
    
    file = fopen(arquivo, "a");//cria o arquivo
	fprintf(file,",");//Salva o valor e adiciona uma "," para  que as informações não fiquem juntas.
	fclose(file);//fecha o arquivo
	
	printf("Digite o Cargo a ser cadastrado: ");//Coletando as informações do usuario(O seu cargo)
	scanf("%s",cargo);//refere-se as strings
	
	file = fopen(arquivo, "a");//cria o arquivo
	fprintf(file,cargo);//salva o valor da variavel
	fclose(file);//fecha o arquivo
	
	system("pause");//pausa para o usuario ver as informações
    
	
	
}

int consulta()
{
	
	setlocale(LC_ALL, "Portuguese");//Definindo a linguagem
	
	//inicio criação de variaveis/string
	char cpf[40];
	char conteudo[200];
	//fim da criação!
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);//%s refere-se a string
	
	FILE *file;//cria o arquivo
	file = fopen(cpf, "r");//abre o arquivo
	
	if(file == NULL)
	{
		printf("Não foi possivel abrir o arquivo,Não localizado!.\n");
	}
	while(fgets(conteudo, 200, file) !=NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf ("\n\n");
	}
	
	    system("pause");//pausa para o usuario ver as informações
	
}

int deletar()
{     //inicio da criação
	 char cpf[40];
	 //fim da criação
	 
	 printf("Digite o CPF do usuário a ser deletado: ");
	 scanf("%s",cpf);
	 
	 remove(cpf);
	 
	 FILE *file;
	 file = fopen(cpf, "r");
	 
	 if(file == NULL);
	 {
	 	printf("O usuario não se encontra no sistema!.\n");
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
	
	 printf("### Cartório da EBAC ###\n\n");//Inicio do menu
 	 printf("Escolha a opção desejada do menu\n\n");
	 printf("\t1 - Registrar nomes\n");
	 printf("\t2 - Consultar nomes\n");
	 printf("\t3 - Deletar nomes\n\n");
	 printf("Opção:" );//Fim do menu
	
	 scanf("%d", &opcao);//armazenando a escolha do usuário
	
	 system("cls");
	 
	 
	 switch(opcao)//inicio da seleção do menu
	 {
	 	case 1:
	 	registro();//chamada de funções de registro
		break;
		
		case 2:
	    consulta();//chamada de funções de consulta
		break;
	    
	    case 3:
	    deletar();//chamada de funções de deletar
	    break;
	    
	    default:
	    	printf("Essa opção não está disponivel!\n");
		system("pause");
		break;
	 }//fim da seleção 
	 
	
	
	

	}
	
}

   
   
   
   
   	
   
   	
   


