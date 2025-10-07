#include <stdio.h>
#include <string.h> // Utilizado para manipulacao de strings
#include <stdlib.h> // Utilizado para limpar a tela

// Constantes para definir limite (livros)
#define maximo_livros 5
#define maximo_titulo 100
#define maximo_autor 50

// Constantes para definir limite (usuarios)
#define maximo_usuarios 5
#define maximo_nome 50

// Constantes para definir limite (emprestimos)
#define maximo_emprestimos 3


// Vetores e variaveis globais para os livros
char titulo_livro[maximo_livros][maximo_titulo];        // Armazena os titulos dos livros
char autor_livro[maximo_livros][maximo_autor];          // Armazena os autores dos livros
int disponivel_livro[maximo_livros];                    // Status: Disponivel = 1 e Emprestado = 0
int numero_livros = 0;                                  // Contador de livros cadastrados

// Vetores e variaveis globais para os usuários
char nome_usuario[maximo_usuarios][maximo_nome];        // Armazena os nomes dos usuarios
int matricula_usuario[maximo_usuarios];                 // Armazena as matriculas dos usuarios
int numero_usuarios = 0;                                // Contador de usuarios cadastrados

// Vetores e variaveis globais para os emprestimos
int numero_emprestimo_usuario[maximo_usuarios];                    // Conta livros por usuario
int emprestimos_usuario[maximo_usuarios][maximo_emprestimos];      // Livros emprestados por usuario


// Limpa o terminal/console para uma visualizacao mais organizada
void limparTela() {                                     
    #ifdef _WIN32
        system("cls"); // Windows
    #else
        system("clear"); // Linux ou Mac
    #endif
}

void menuBiblioteca() {
    printf("///////// SISTEMA DE GERENCIAMENTO DE BIBLIOTECA ////////\n");

    printf("\n1. Cadastrar Livros\n");
    printf("2. Listar Livros\n");
    printf("3. Cadastrar Usuario\n");
    printf("4. Listar Usuarios\n");
    printf("5. Emprestimo de Livros\n");
    printf("0. Sair\n");
}

void cadastrarLivro(){

    // Verifica se a quantidade maxima de livros foi atingida ou nao
    if (numero_livros < maximo_livros){ 
        printf("\n================= CADASTRAR NOVO LIVRO ====================\n");

        printf("\nTitulo: ");
        scanf(" %[^\n]",titulo_livro[numero_livros]);

        printf("Autor: ");
        scanf(" %[^\n]",autor_livro[numero_livros]);

        getchar(); // Limpa buffer do teclado

        disponivel_livro[numero_livros] = 1; // Configura o livro cadastrado como disponível
        numero_livros++; // Incrementa o contador de livros

        printf("\nLivro cadastrado com sucesso!\n");
        printf("ID Livro: %i", numero_livros);
    }
    else {
        printf("\nErro. Limite de livro(s) atingindo!\n");
        printf("Nao e possivel cadastrar mais livros.\n");
        return;
    }
}

void listarLivros(){
    char status_livro[15];

    // Verifica se algum livro foi cadastrado para listar ou nao
    if (numero_livros > 0){ 
        printf("\n================= LISTAGEM DE LIVROS ====================\n");

        for (int i = 0; i < numero_livros; i++){
            if (disponivel_livro[i] == 1){  // Verifica se o livro esta disponivel ou nao
                strcpy(status_livro, "Disponivel");
            }
            else {
                strcpy(status_livro, "Emprestado");
            }
            
            printf("\nID: %i | Titulo: %s | Autor: %s | Status: %s\n", i + 1, titulo_livro[i], autor_livro[i], status_livro);
        }
    }
    else {
        printf("\nNao existe livros cadastrados no sistema.\n");
    }
}

void cadastrarUsuario(){

    // Verifica se a quantidade maxima de usuarios foi atingida ou nao
    if (numero_usuarios < maximo_usuarios){ 
        printf("\n================= CADASTRAR NOVO USUARIO ====================\n");

        printf("\nNome: ");
        scanf(" %[^\n]",nome_usuario[numero_usuarios]);

        printf("Matricula (apenas numeros): ");
        scanf("%i",&matricula_usuario[numero_usuarios]);

        getchar(); // Limpa buffer do teclado

        // Inicia o vetor de emprestimos do usuario vazio
        for (int i = 0; i < maximo_emprestimos; i ++){
            emprestimos_usuario[numero_usuarios][i] = -1;
        }

        // O usuario ao ser cadastrado inicia com 0 livros
        numero_emprestimo_usuario[numero_usuarios] = 0;

        numero_usuarios++; // Incrementa o contador de usuario
        
        printf("\nUsuario cadastrado com sucesso!\n");
        printf("ID Usuario: %i", numero_usuarios);
    }
    else {
        printf("\nErro. Limite de usuarios atingindo!\n");
        printf("Nao e possivel cadastrar mais usuarios.\n");
        return;
    }
}

void listarUsuarios(){

    // Verifica se algum usuario foi cadastrado para listar  ou nao
    if (numero_usuarios > 0){ 
        printf("\n================= LISTAGEM DE USUARIOS ====================\n");

        for (int i = 0; i < numero_usuarios; i++){
            
            printf("\nID: %i | Nome: %s | Matricula: %i\n", i + 1, nome_usuario[i], matricula_usuario[i]);
        }
    }
    else {
        printf("\nNao existe usuarios cadastrados no sistema.\n");
    }
}

void realizarEmprestimo(){
    int id_livro, id_usuario;

    printf("\n================= EMPRESTIMO DE LIVRO ====================\n");

    // Verifica se nao existe livros e/ou usuarios cadastrados
    if (numero_livros == 0 && numero_usuarios == 0) {
        printf("\nNenhum livro e usuario cadastrados!\n");
        printf("Voce precisa cadastrar livros e usuarios primeiro, para realizar emprestimos.\n");
        return;
    }
    if (numero_livros == 0) {
        printf("\nNenhum livro cadastrado!\n");
        return;
    }
    if (numero_usuarios == 0) {
        printf("\nNenhum usuario cadastrado!\n");
        return;
    }

    printf("\nID do livro do emprestimo: ");
    scanf("%i", &id_livro);

    printf("ID do usuario do emprestimo: ");
    scanf("%i", &id_usuario);

    getchar(); // Limpa buffer do teclado

    // Verifica se os IDs informados sao validos
    if (id_livro < 1 || id_livro > numero_livros){
        printf("\nID de livro invalido!\n");
        printf("ID dos livros existentes: 1 ate %i\n", numero_livros);
        return;
    }

    if (id_usuario < 1 || id_usuario > numero_usuarios){
        printf("\nID de usuario invalido!\n");
        printf("ID dos usuarios existentes: 1 ate %i\n", numero_usuarios);
        return;
    }

    // Ajusta os indices. O usuario digita 1, mas, no vetor seria 0
    id_livro--;
    id_usuario--;

    // Verifica se usuario atingiu limite de emprestimos
    if (numero_emprestimo_usuario[id_usuario] >= maximo_emprestimos){
        printf("\nUsuario ja tem %i livros emprestados. O limite eh de %i por usuario", numero_emprestimo_usuario[id_usuario], maximo_emprestimos);
        return;
    }

    // Verifica se o livro esta disponivel
    if (disponivel_livro[id_livro] == 0){
        printf("\nLivro ja esta emprestado! Escolha outro livro.");
        return;
    }

    // Procura posicao livre no vetor de emprestimos do usuario para alocar o livro
    for (int i = 0; i < maximo_emprestimos; i++){
        if (emprestimos_usuario[id_usuario][i] == -1){
            emprestimos_usuario[id_usuario][i] = id_livro;  // Coloca o ID do livro na posicao livre
            numero_emprestimo_usuario[id_usuario]++; // Incrementa o contador de emprestimos do usuario

            disponivel_livro[id_livro] = 0; // Coloca livro como emprestado

            printf("\nEmprestimo cadastrado com sucesso!\n");

            printf("\nInformacoes do emprestimo realizado:\n");
            printf("Livro: %s\n", titulo_livro[id_livro]);
            printf("Usuario: %s\n", nome_usuario[id_usuario]);
            break;
        }
    }
 }

int main() {
    int opcao;

    do {

        // Limpa terminal para exibir novamente
        limparTela();

        // Chama o menu biblioteca
        menuBiblioteca();

        printf("\nSelecione a opcao que deseja: ");
        scanf("%i", &opcao);
        getchar(); // Limpa buffer depois de ler a opcao

        // Limpa terminal antes de exibir a opcao escolhida
        limparTela(); 

        // Executa a funcao correspondente a opcao escolhida
        switch (opcao){
            case 1:
                cadastrarLivro();
                break;

            case 2:
                listarLivros();
                break;

            case 3:
                cadastrarUsuario();
                break;

            case 4:
                listarUsuarios();
                break;

            case 5:
                realizarEmprestimo();
                break;

            case 0:
                printf("\nSaindo do sistema...\n\n");
                break;

            default: 
                printf("Opcao Invalida! Tente Novamente.\n"); // Caso o usuario insira uma opcao diferentea das disponiveis no switch
        }

        // Pausa para usuario visualizar resultados antes de voltar ao menu
        if (opcao != 0) {
            printf("\n\nPressione Enter para voltar ao Menu.....");
            getchar(); // Espera o usuário pressionar Enter
        }

    // Repete até usuário escolher sair
    } while (opcao != 0);
    
    return 0;
}
