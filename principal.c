#include <stdio.h>
#include <stdlib.h>

// VARIAVEIS GLOBAIS

// CADASTRO DE CLIENTE
// DECLARA��O DA ESTRUTURA
typedef struct Endereco {
	char logradouro[100];
	char cep[8];
	char bairro[30];
	char cidade[30];
	char estado[30];
} Endereco;

typedef struct Cliente {
	int codigo;
	char nome[100];
	char cpf_cnpj[14];
	char telefone[8];
	Endereco enderecos[];
}Cadcliente;


typedef struct Produto {
    int  codigo;
    char nome[100];
    char fornecedor[100];
    char categoria;
    int quantidade;
    float valorUnitario;
}cadProduto;


// ESCOPO DAS FUNCOES
void menu();
void menuGerenciarClientes();
void menuGerenciarProdutos();
void menuGerenciarPedidos();
void imprimirCliente();
void imprimirProduto();
void imprimirCliente();

// FUN��ES COM STRUCT



int main (){

	// DECLARA��O DAS VARIAVEIS LOCAIS
	char opcaoMenu;


	// CRIANDO PONTEIRO PARA O ARQUIVO
	FILE *arquivoDeDados;

	// CRIANDO O ARQUIVO E APONTANDO PARA O PONTEIRO
	arquivoDeDados = fopen(	"arquivoDeDados.txt", "w+");

	if (arquivoDeDados!=NULL){
			// IMPRIME NO ARQUIVO
		    fputs ("fopen example",arquivoDeDados);

			//FECHA O ARQUIVO
		    fclose (arquivoDeDados);
		}

	// CHAMADA DA FUNÇÃO PARA IMPRIMIR O MENU
	menu();

	// LEITURA DAS OP��ES DO MENU

	scanf("%c", &opcaoMenu);

	// COMPARA��O DAS OP��ES DO MENU
	if(opcaoMenu == 'c' || opcaoMenu == 'C'){
		// CHAMA A FUN��O PARA EXIBIR O MENU CORRESPONDENTE
		menuGerenciarClientes();
	}
	if(opcaoMenu == 'p' || opcaoMenu == 'P'){
		// CHAMA A FUN��O PARA EXIBIR O MENU CORRESPONDENTE
		menuGerenciarProdutos();
	}
	if(opcaoMenu == 'e' || opcaoMenu == 'E'){
		// CHAMA A FUN��O PARA EXIBIR O MENU CORRESPONDENTE
		menuGerenciarPedidos();
	}
	if(opcaoMenu == 's' || opcaoMenu == 's'){
		return 0;
	}
	else{
		printf("Opcao invalida\nSaindo do sistema... \n");
	}

	system("pause");
	return 0;
}


// FUNÇÃO MENU
void menu(){
	printf("Digite um comando para prosseguir:\n");
	printf("C - Gerenciar Clientes\n");
	printf("P - Gerenciar Produtos\n");
	printf("E - Gerenciar Pedidos\n");
	printf("S - Sair\n\n");
}

// FUNÇÃO MENU GERENCIAR CLIENTES
void menuGerenciarClientes(){
	printf("============ Gerenciar Clientes ============\n");
	printf("Digite um comando para prosseguir:\n");
	printf("C - Cadastrar um cliente.\n");
	printf("L - Listar todos os clientes cadastrados.\n");
	printf("B - Buscar cliente já cadastrado.\n");
	printf("A - Atualizar um cliente cadastrado.\n");
	printf("E - Excluir um cliente cadastrado.\n");
}

// FUNÇÃO MENU GERENCIAR PRODUTOS
void menuGerenciarProdutos(){
	printf("============== Gerenciar Produtos ==============\n");
	printf("Digite um comando para prosseguir:\n");
	printf("C - Cadastrar um produto.\n");
	printf("L - Listar todos os produtos cadastrados.\n");
	printf("B - Buscar produto já cadastrado.\n");
	printf("A - Atualizar um produto cadastrado.\n");
	printf("E - Excluir um produto cadastrado.\n");
	printf("S - Atualizar estoque de um produto.\n");
}

// FUNÇÃO MENU GERENCIAR PEDIDOS
void menuGerenciarPedidos(){
	printf("============== Gerenciar Pedidos ==============\n");
	printf("Digite um comando para prosseguir:\n");
	printf("C - Cadastrar um pedido.\n");
	printf("L - Listar todos os pedidos de um cliente.\n");
	printf("D -� Listar todos os pedidos em um dia específico.\n");
}

// FUNÇÃO CADASTRAR CLIENTE
cadastrarCliente() {
    Cadcliente cliente;
    printf("Informe o código do cliente:\n");
    scanf(" %d", &cliente.codigo);
    printf("Informe o nome do cliente:\n");
    scanf(" %[^\n]s", cliente.nome);
    printf("Informe o CPF ou CNPJ do cliente:\n");
    scanf(" %[^\n]s", cliente.cpf_cnpj);
    printf("Informe o telefone do cliente:\n");
    scanf(" %[^\n]s", cliente.telefone);

    //return cliente;
}


// FUN��O IMPRIMIR CLIENTE
void imprimirCliente(Cadcliente x) {
	Cadcliente cliente;
    printf("Codigo: %d\n\n", cliente.codigo);
    printf("Nome: %s\n", cliente.nome);
    printf("CPF: %s\n", cliente.cpf_cnpj);
    printf("E-mail: %s\n", cliente.telefone);
    printf("Endereco: %s\n", cliente.enderecos);
}


// FUN��O CADASTRAR PRODUTO
cadProduto cadastrarProduto() {
    cadProduto produto;
    printf("Informe o codigo do produto:\n");
    scanf(" %d", &produto.codigo);
    printf("Informe o nome do produto:\n");
    scanf(" %[^\n]s", produto.nome);
    printf("Informe o fornecedor:\n");
    scanf(" %[^\n]s", produto.fornecedor);
    printf("Informe a quantidade:\n");
    scanf(" %d", produto.quantidade);
    printf("Informe o valor unitario do produto:\n");
    scanf(" %f", produto.valorUnitario);

    return produto;
}

//  FUN��O IMPRIMIR PRODUTO
    void imprimirProduto(cadProduto Produto) {
		cadProduto imprimeprod;
        printf("Codigo: %d\n\n", imprimeprod.codigo);
        printf("Nome: %s\n", imprimeprod.nome);
        printf("Fornecedor: %s\n", imprimeprod.fornecedor);
        printf("Quantidade; %d\n", imprimeprod.quantidade);
        printf("Valor Unitario: %.f\n", imprimeprod.valorUnitario);
}

