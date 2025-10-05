# 📘 Guia de Configuração do Ambiente e Instruções de Compilação

**Descrição**: Este documento apresenta o passo a passo para configurar o ambiente de desenvolvimento em C e executar os códigos do projeto, tanto através de uma IDE quanto via linha de comando.

### ⚙️ Configuração do Ambiente
- ### Instalação do Compilador
    - Software: GCC (versão 15.2.0) no projeto
    - Download: Baixar o instalador do compilador.
    - Configuração: Após a instalação, adicione o caminho da pasta `bin` do compilador à variável de ambiente **Path** do Windows. 
    - Verificação da Instalação: Abra o Prompt de Comando e digite:

        ```bash
        gcc --version

- ### Instalação da IDE
    - Software: Visual Studio Code.
    - Download: Baixe e instale o VSCode.

- ### Instalação de extensão na IDE
    - Extensão: Dentro do VSCode, vá para a aba de Extensões
    - Instalação: Procure por C/C++ e instale a extensão oficial da Microsoft

### 📝 Instruções de Compilação e Execução
- **Método A: Execução via VSCode**
    - Abra o Arquivo: Abra qualquer arquivo com a extensão .c no VSCode
    - Execute: Após a extensão C/C++ ser instalada, um botão de "Play" (ou Run C/C++ File) aparecerá no canto superior direito da tela
    - Resultado: Ao clicar nesse botão, a extensão irá compilar e executar o código automaticamente, e a saída será exibida na aba Terminal do VSCode.

- **Método B: Compilação Manual via Terminal**
    - Abra o terminal: Navegue até a pasta onde estão seus arquivos .c
    - Compile o Código: Use o comando gcc, especificando o nome do executável (-o) e o arquivo de código-fonte.

        ```bash
        gcc -o nome_do_programa nome_do_arquivo.c

    - Execute o Programa: Após a compilação, execute o programa gerado

        ```bash
        ./nome_do_programa
    
### ⚠️ Observações Importantes
- Caso o programa utilize funções da biblioteca math.h, inclua o parâmetro -lm no final do comando de compilação. 

    Exemplo (como na Lista 5, questão 3): 

    ```bash
    gcc -o nome_programa nome_programa.c -lm
