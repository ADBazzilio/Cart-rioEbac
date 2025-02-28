#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string
		
int registro() //Fun��o responsavel por Cadastra os Usu�rios no sistema 
{
	//Inicio cria��o de vari�veis / string
     
	  //((char) ocupa 1 byte (8 bits) e pode ser usada para armazenar um valor inteiro sem sinal (unsigned char) entre 0 e 255 ou um valor com sinal (char) entre �128 a 127. 

	char arquivo[40]; // Essa vari�vel arquivo sempre vai mudar (ela cria um novo Arquivo.O (char) pode ser usada para armazenar arquivos 
	char cpf[40]; // (char) pode ser usado para armazenar um valor inteiro (cpf)[40] caracteres 
	char nome[40]; // (char) pode ser usado para armazenar  nomes [40] caracteres
	char sobrenome[40]; // (char) pode ser usado para armazenar sobrenomes [40] caracteres
	char cargo[40]; // (char) pode ser usado para armazenar cargo[40] caracteres
	// final da cria��o de vari�veis/ string
	
	printf("Digite o CPF a ser cadastrado: "); // Coletando informa��o do usu�rio.(Printf) e a descri��o que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente v�. (Imprime uma string formatada na sa�da padr�o (stdout). Ela � definida no arquivo de cabe�alho cstdio).
	scanf("%s",cpf); // ("%s") onde armazenamos as String, refere-se a string. scanf:l� dados do teclado e os atribui a vari�veis
	
	strcpy(arquivo, cpf); //Respons�vel por copiar os valores das string
	
	FILE *file; // cria o arquivo. (FILE) Busca na Biblioteca alguma instrutura que chama (FILE) para criar um arquivo (file)
	file = fopen(arquivo, "w"); // cria o arquivo e o ("w") vai criar uma nova e escrever
	fprintf(file,cpf); // salvo o valor da vari�vel CPF
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // (file) abrir o arquivo ,fopen(arquivo, "a") abrir o aquivo e ("a") Atualizar arquivo um arquivo que j� exite. No comando anterior ("w")
	fprintf(file,","); // Salva o valor da vari�vel com uma (",")
	fclose(file); // fechar o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // Coletando o nome a ser Consultado. (Printf) e a descri��o que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente v�. (Imprime uma string formatada na sa�da padr�o (stdout). Ela � definida no arquivo de cabe�alho cstdio). 
	scanf("%s",nome); // salvando a variavel nome em uma string
	
	file = fopen(arquivo, "a"); // (file) abrir o arquivo ,fopen(arquivo, "a") abrir o aquivo e ("a") Atualizar arquivo um arquivo que j� exite. No comando anterior ("w")
	fprintf(file,nome);  // Salva o valor da vari�vel nome
	fclose(file);  // fechar o arquivo
	
	file = fopen(arquivo, "a"); // (file) abrir o arquivo ,fopen(arquivo, "a") abrir o aquivo e ("a") Atualizar arquivo um arquivo que j� exite. No comando anterior ("w")
	fprintf(file,","); // Salva o valor da vari�vel com uma (",")
	fclose(file); // fechar o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); // Coletando o sobrenome a ser Cadastrado. (Printf) e a descri��o que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente v�. (Imprime uma string formatada na sa�da padr�o (stdout). Ela � definida no arquivo de cabe�alho cstdio). 
	scanf("%s",sobrenome); // salvando a variavel nome em uma string
	
	file = fopen(arquivo, "a"); // (file) abrir o arquivo ,fopen(arquivo, "a") abrir o aquivo e ("a") Atualizar arquivo um arquivo que j� exite. No comando anterior ("w")
	fprintf(file,sobrenome);  // Salva o valor da vari�vel sobrenome
	fclose(file); // fechar o arquivo
	
	file = fopen(arquivo, "a"); // (file) abrir o arquivo ,f// Salva o valor da vari�vel nomeopen(arquivo, "a") abrir o aquivo e ("a") Atualizar arquivo um arquivo que j� exite. No comando anterior ("w")
	fprintf(file,","); // Salva o valor da vari�vel com uma (",")
	fclose(file); // fechar o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); // Coletando o cargo a ser cadastrado no sistema. (Printf) e a descri��o que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente v�. (Imprime uma string formatada na sa�da padr�o (stdout). Ela � definida no arquivo de cabe�alho cstdio). 
	scanf("%s",cargo); // ("%s") onde armazenamos as String, refere-se a string
	
	file = fopen(arquivo, "a"); // (file) abrir o arquivo ,fopen(arquivo, "a") abrir o aquivo e ("a") Atualizar arquivo um arquivo que j� exite. No comando anterior ("w")
	fprintf(file,cargo); // Salva o valor da vari�vel cargo
	fclose(file);	 // fechar o arquivo
	
    system("pause"); // Respondavel por limpar depois de dar entre no teclado

}

int consulta() // Fun��o respons�vel por Consultar usu�rio no sistema
{
    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
        char cpf[40]; // (char) pode ser usado para armazenar um valor inteiro (cpf)[40] caracteres 
        char conteudo[200]; // (char) pode ser usado para armazenar um valor inteiro (conteudo)[200] caracteres 
	
        printf("Digite o CPF a ser consultado: "); // Coletando o CPF a ser consultado. (Printf) e a descri��o que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente v�. (Imprime uma string formatada na sa�da padr�o (stdout). Ela � definida no arquivo de cabe�alho cstdio).
        scanf("%s",cpf); // ("%s") onde armazenamos as String, refere-se a string
  	
        FILE *file;  // cria o arquivo. (FILE) Busca na Biblioteca alguma instrutura que chama (FILE) para criar um arquivo (file)
        file = fopen(cpf,"r"); // Consulta o arquivo CPF, ("r") L� esse aquivo CPF
  	
        if(file == NULL) // if(file)� uma express�o que verifica se um arquivo existe, seguindo um caminho especificado, (==) Compara��o e (NULL) nulo. " Se o arquivo for nulo"
    {
      	printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n"); // J� que if(file == NULL) foi igual a nulo ele da a mensagem (N�o foi possivel abrir o arquivo, n�o localizado)
    }
	
      while(fgets(conteudo, 200, file) != NULL) // Ele esta buscando o arquivo tipo CPF.(while) enquanto, ele vai rodar 200 vezes do arquivo. so vai parar enquanto ele rodar 200 vezes que foi o estabelecido pele gente 
      
    {
	    printf("\nEssas s�o as informa��es do usu�rio: "); // Coleto as informa��o do usu�rio. (Printf) e a descri��o que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente v�. (Imprime uma string formatada na sa�da padr�o (stdout). Ela � definida no arquivo de cabe�alho cstdio).
	    printf("%s", conteudo); // Salva o conteudo que esta na ("%s") conteudo
	    printf("\n\n"); // \n\n pula 2 linha no final
    }
  	
    system("pause"); // Respondavel por limpar depois de dar entre no teclado

		
}

int deletar() // Fun��o respons�vel por deletar usu�rio do sistema
{
	char cpf[40]; // (char) pode ser usado para armazenar um valor inteiro (cpf)[40] caracteres. Char pode receber numeros 
	
	printf("Digite o CPF do usu�rio a ser deletado: "); // Consultar o CPF a ser Deletado. (Printf) e a descri��o que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente v�. (Imprime uma string formatada na sa�da padr�o (stdout). Ela � definida no arquivo de cabe�alho cstdio).
	scanf("%s",cpf);  // ("%s") onde armazenamos as String, refere-se a string. scanf: l� dados do teclado e os atribui a vari�veis
	
	remove(cpf); // acessa a pasta do arquivo e deleta o arquivo
	
	FILE *file; // cria o arquivo. (FILE) Busca na Biblioteca alguma instrutura que chama (FILE) para criar um arquivo (file)
	file = fopen(cpf,"r"); // Consulta o arquivo CPF, ("r") L� esse aquivo CPF
	
	if(file == NULL) // if(file)� uma express�o que verifica se um arquivo existe, seguindo um caminho especificado, (==) Compara��o e (NULL) nulo. " Se o arquivo for nulo"
	{
	    printf("O usu�rio n�o se encontra no sistema!\n"); // se o usu�rio for nulo ele da essa mensagem
	    system("pause"); // Respondavel por limpar depois de dar entre no teclado
	}	
}


int main() // Em C++, int main() � a assinatura da fun��o principal de um programa, que indica que a fun��o retorna um valor inteiro. 
	{
	int opcao=0; //Definindo vari�veis
	int laco=1; // A express�o "int x=1" em C++ significa que a vari�vel "x" � do tipo inteiro e tem o valor 1 .(int) � um tipo de dado b�sico que representa n�meros inteiros. � usado para definir vari�veis num�ricas que cont�m n�meros inteiros
	
	for(laco=1;laco=1;) // � uma estrutura de repeti��o que permite executar um trecho de c�digo um determinado n�mero de vezes. 
	
		{

		system("cls"); // Limpando a tela do menu. (Sua fun��o � limpar a tela de sa�da de programa que � executado no MS-DOS,)

		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
			
		printf("### Cart�rio da EBAC ###\n\n"); //inicio do menu
		printf("Escolha a op��o desejada do menu\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n");
		printf("\t4 - Sair do sistema\n\n"); 
		printf("Op��o: ");//fim do menu
				
		scanf("%d", &opcao); //armazenando a escolha do usu�rio, ("%d") respons�vel por armazenar a vari�vel
		
		system("cls"); // Limpando a tela do menu
	
		switch(opcao) //inicio da sele��o do menu, VAi chamar as fun��es
		{
			case 1: // (case) � usada no comando switch case para selecionar uma constante. O switch case � uma estrutura de controle que permite executar a��es diferentes com base no valor de uma express�o
			registro(); // Chamada da fun��o (registro)
			break; // O comando break no C++ encerra um loop ou um comando switch em qualquer ponto, exceto no final l�gico
			
			case 2: // (case) � usada no comando switch case para selecionar uma constante. O switch case � uma estrutura de controle que permite executar a��es diferentes com base no valor de uma express�o
			consulta(); // Chamada da fun��o (consulta) 
			break;  // O comando break no C++ encerra um loop ou um comando switch em qualquer ponto, exceto no final l�gico
		
			case 3: // (case) � usada no comando switch case para selecionar uma constante. O switch case � uma estrutura de controle que permite executar a��es diferentes com base no valor de uma express�o
			deletar(); // Chamada da fun��o (deletar)
			break; // O comando break no C++ encerra um loop ou um comando switch em qualquer ponto, exceto no final l�gico
		    
		    
		    case 4: // (case) � usada no comando switch case para selecionar uma constante. O switch case � uma estrutura de controle que permite executar a��es diferentes com base no valor de uma express�o
		    printf("Obrigado por utilizar o sistema!\n");
		    return 0; // indica que um programa foi executado com sucesso. � comumente usado na fun��o principal de um programa, main(), para informar ao sistema operacional que a fun��o terminou sem erros. 
		    break; // O comando break no C++ encerra um loop ou um comando switch em qualquer ponto, exceto no final l�gico
		    
			default: // 1. falta; n�o compar�ncia 2. aus�ncia 3 n�o cumprimento 4 incumprimento de pagamento (Em C++, o termo "default" pode ser usado para referir-se a um valor ou a��o pr�-definida.)
			printf("Essa op��o n�o est� dispon�vel!\n"); // (Printf) e a descri��o que vai ser imprimido na tela de saida do C++, tudo aquilo que a gente v�. (Imprime uma string formatada na sa�da padr�o (stdout). A fun��o printf() em C++ � utilizada para imprimir uma mensagem formatada na tela do usu�rio. 
			system("pause"); // // Respondavel por limpar depois de dar entre no teclado
			break; // O comando break no C++ encerra um loop ou um comando switch em qualquer ponto, exceto no final l�gico
		} //fim da sele��o
			
	}	
}
