#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das string
		
int registro() //Função responsavel por Cadastra os Usuários no sistema 
{
	//Inicio criação de variáveis / string
     
	  //((char) ocupa 1 byte (8 bits) e pode ser usada para armazenar um valor inteiro sem sinal (unsigned char) entre 0 e 255 ou um valor com sinal (char) entre –128 a 127. 

	char arquivo[40]; // Essa variável arquivo sempre vai mudar (ela cria um novo Arquivo.O (char) pode ser usada para armazenar arquivos 
	char cpf[40]; // (char) pode ser usado para armazenar um valor inteiro (cpf)[40] caracteres 
	char nome[40]; // (char) pode ser usado para armazenar  nomes [40] caracteres
	char sobrenome[40]; // (char) pode ser usado para armazenar sobrenomes [40] caracteres
	char cargo[40]; // (char) pode ser usado para armazenar cargo[40] caracteres
	// final da criação de variáveis/ string
	
	printf("Digite o CPF a ser cadastrado: "); // Coletando informação do usuário.(Printf) e a descrição que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente vê. (Imprime uma string formatada na saída padrão (stdout). Ela é definida no arquivo de cabeçalho cstdio).
	scanf("%s",cpf); // ("%s") onde armazenamos as String, refere-se a string. scanf:lê dados do teclado e os atribui a variáveis
	
	strcpy(arquivo, cpf); //Responsável por copiar os valores das string
	
	FILE *file; // cria o arquivo. (FILE) Busca na Biblioteca alguma instrutura que chama (FILE) para criar um arquivo (file)
	file = fopen(arquivo, "w"); // cria o arquivo e o ("w") vai criar uma nova e escrever
	fprintf(file,cpf); // salvo o valor da variável CPF
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // (file) abrir o arquivo ,fopen(arquivo, "a") abrir o aquivo e ("a") Atualizar arquivo um arquivo que já exite. No comando anterior ("w")
	fprintf(file,","); // Salva o valor da variável com uma (",")
	fclose(file); // fechar o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // Coletando o nome a ser Consultado. (Printf) e a descrição que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente vê. (Imprime uma string formatada na saída padrão (stdout). Ela é definida no arquivo de cabeçalho cstdio). 
	scanf("%s",nome); // salvando a variavel nome em uma string
	
	file = fopen(arquivo, "a"); // (file) abrir o arquivo ,fopen(arquivo, "a") abrir o aquivo e ("a") Atualizar arquivo um arquivo que já exite. No comando anterior ("w")
	fprintf(file,nome);  // Salva o valor da variável nome
	fclose(file);  // fechar o arquivo
	
	file = fopen(arquivo, "a"); // (file) abrir o arquivo ,fopen(arquivo, "a") abrir o aquivo e ("a") Atualizar arquivo um arquivo que já exite. No comando anterior ("w")
	fprintf(file,","); // Salva o valor da variável com uma (",")
	fclose(file); // fechar o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); // Coletando o sobrenome a ser Cadastrado. (Printf) e a descrição que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente vê. (Imprime uma string formatada na saída padrão (stdout). Ela é definida no arquivo de cabeçalho cstdio). 
	scanf("%s",sobrenome); // salvando a variavel nome em uma string
	
	file = fopen(arquivo, "a"); // (file) abrir o arquivo ,fopen(arquivo, "a") abrir o aquivo e ("a") Atualizar arquivo um arquivo que já exite. No comando anterior ("w")
	fprintf(file,sobrenome);  // Salva o valor da variável sobrenome
	fclose(file); // fechar o arquivo
	
	file = fopen(arquivo, "a"); // (file) abrir o arquivo ,f// Salva o valor da variável nomeopen(arquivo, "a") abrir o aquivo e ("a") Atualizar arquivo um arquivo que já exite. No comando anterior ("w")
	fprintf(file,","); // Salva o valor da variável com uma (",")
	fclose(file); // fechar o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); // Coletando o cargo a ser cadastrado no sistema. (Printf) e a descrição que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente vê. (Imprime uma string formatada na saída padrão (stdout). Ela é definida no arquivo de cabeçalho cstdio). 
	scanf("%s",cargo); // ("%s") onde armazenamos as String, refere-se a string
	
	file = fopen(arquivo, "a"); // (file) abrir o arquivo ,fopen(arquivo, "a") abrir o aquivo e ("a") Atualizar arquivo um arquivo que já exite. No comando anterior ("w")
	fprintf(file,cargo); // Salva o valor da variável cargo
	fclose(file);	 // fechar o arquivo
	
    system("pause"); // Respondavel por limpar depois de dar entre no teclado

}

int consulta() // Função responsável por Consultar usuário no sistema
{
    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
        char cpf[40]; // (char) pode ser usado para armazenar um valor inteiro (cpf)[40] caracteres 
        char conteudo[200]; // (char) pode ser usado para armazenar um valor inteiro (conteudo)[200] caracteres 
	
        printf("Digite o CPF a ser consultado: "); // Coletando o CPF a ser consultado. (Printf) e a descrição que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente vê. (Imprime uma string formatada na saída padrão (stdout). Ela é definida no arquivo de cabeçalho cstdio).
        scanf("%s",cpf); // ("%s") onde armazenamos as String, refere-se a string
  	
        FILE *file;  // cria o arquivo. (FILE) Busca na Biblioteca alguma instrutura que chama (FILE) para criar um arquivo (file)
        file = fopen(cpf,"r"); // Consulta o arquivo CPF, ("r") Lê esse aquivo CPF
  	
        if(file == NULL) // if(file)é uma expressão que verifica se um arquivo existe, seguindo um caminho especificado, (==) Comparação e (NULL) nulo. " Se o arquivo for nulo"
    {
      	printf("Não foi possivel abrir o arquivo, não localizado!.\n"); // Já que if(file == NULL) foi igual a nulo ele da a mensagem (Não foi possivel abrir o arquivo, não localizado)
    }
	
      while(fgets(conteudo, 200, file) != NULL) // Ele esta buscando o arquivo tipo CPF.(while) enquanto, ele vai rodar 200 vezes do arquivo. so vai parar enquanto ele rodar 200 vezes que foi o estabelecido pele gente 
      
    {
	    printf("\nEssas são as informações do usuário: "); // Coleto as informação do usuário. (Printf) e a descrição que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente vê. (Imprime uma string formatada na saída padrão (stdout). Ela é definida no arquivo de cabeçalho cstdio).
	    printf("%s", conteudo); // Salva o conteudo que esta na ("%s") conteudo
	    printf("\n\n"); // \n\n pula 2 linha no final
    }
  	
    system("pause"); // Respondavel por limpar depois de dar entre no teclado

		
}

int deletar() // Função responsável por deletar usuário do sistema
{
	char cpf[40]; // (char) pode ser usado para armazenar um valor inteiro (cpf)[40] caracteres. Char pode receber numeros 
	
	printf("Digite o CPF do usuário a ser deletado: "); // Consultar o CPF a ser Deletado. (Printf) e a descrição que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente vê. (Imprime uma string formatada na saída padrão (stdout). Ela é definida no arquivo de cabeçalho cstdio).
	scanf("%s",cpf);  // ("%s") onde armazenamos as String, refere-se a string. scanf: lê dados do teclado e os atribui a variáveis
	
	remove(cpf); // acessa a pasta do arquivo e deleta o arquivo
	
	FILE *file; // cria o arquivo. (FILE) Busca na Biblioteca alguma instrutura que chama (FILE) para criar um arquivo (file)
	file = fopen(cpf,"r"); // Consulta o arquivo CPF, ("r") Lê esse aquivo CPF
	
	if(file == NULL) // if(file)é uma expressão que verifica se um arquivo existe, seguindo um caminho especificado, (==) Comparação e (NULL) nulo. " Se o arquivo for nulo"
	{
	    printf("O usuário não se encontra no sistema!\n"); // se o usuário for nulo ele da essa mensagem
	    system("pause"); // Respondavel por limpar depois de dar entre no teclado
	}	
}


int main() // Em C++, int main() é a assinatura da função principal de um programa, que indica que a função retorna um valor inteiro. 
	{
	int opcao=0; //Definindo variáveis
	int laco=1; // A expressão "int x=1" em C++ significa que a variável "x" é do tipo inteiro e tem o valor 1 .(int) é um tipo de dado básico que representa números inteiros. É usado para definir variáveis numéricas que contêm números inteiros
	
	for(laco=1;laco=1;) // é uma estrutura de repetição que permite executar um trecho de código um determinado número de vezes. 
	
		{

		system("cls"); // Limpando a tela do menu. (Sua função é limpar a tela de saída de programa que é executado no MS-DOS,)

		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
			
		printf("### Cartório da EBAC ###\n\n"); //inicio do menu
		printf("Escolha a opção desejada do menu\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n");
		printf("\t4 - Sair do sistema\n\n"); 
		printf("Opção: ");//fim do menu
				
		scanf("%d", &opcao); //armazenando a escolha do usuário, ("%d") responsável por armazenar a variável
		
		system("cls"); // Limpando a tela do menu
	
		switch(opcao) //inicio da seleção do menu, VAi chamar as funções
		{
			case 1: // (case) é usada no comando switch case para selecionar uma constante. O switch case é uma estrutura de controle que permite executar ações diferentes com base no valor de uma expressão
			registro(); // Chamada da função (registro)
			break; // O comando break no C++ encerra um loop ou um comando switch em qualquer ponto, exceto no final lógico
			
			case 2: // (case) é usada no comando switch case para selecionar uma constante. O switch case é uma estrutura de controle que permite executar ações diferentes com base no valor de uma expressão
			consulta(); // Chamada da função (consulta) 
			break;  // O comando break no C++ encerra um loop ou um comando switch em qualquer ponto, exceto no final lógico
		
			case 3: // (case) é usada no comando switch case para selecionar uma constante. O switch case é uma estrutura de controle que permite executar ações diferentes com base no valor de uma expressão
			deletar(); // Chamada da função (deletar)
			break; // O comando break no C++ encerra um loop ou um comando switch em qualquer ponto, exceto no final lógico
		    
		    
		    case 4: // (case) é usada no comando switch case para selecionar uma constante. O switch case é uma estrutura de controle que permite executar ações diferentes com base no valor de uma expressão
		    printf("Obrigado por utilizar o sistema!\n");
		    return 0; // indica que um programa foi executado com sucesso. É comumente usado na função principal de um programa, main(), para informar ao sistema operacional que a função terminou sem erros. 
		    break; // O comando break no C++ encerra um loop ou um comando switch em qualquer ponto, exceto no final lógico
		    
			default: // 1. falta; não comparência 2. ausência 3 não cumprimento 4 incumprimento de pagamento (Em C++, o termo "default" pode ser usado para referir-se a um valor ou ação pré-definida.)
			printf("Essa opção não está¡ disponível!\n"); // (Printf) e a descrição que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente vê. (Imprime uma string formatada na saída padrão (stdout). A função printf() em C++ é utilizada para imprimir uma mensagem formatada na tela do usuário. 
			system("pause"); // // Respondavel por limpar depois de dar entre no teclado
			break; // O comando break no C++ encerra um loop ou um comando switch em qualquer ponto, exceto no final lógico
		} //fim da seleção
			
	}	
}
