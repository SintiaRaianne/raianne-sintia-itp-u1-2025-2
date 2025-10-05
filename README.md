# Introdução a Técnicas de Programação - Unidade 1

**Aluno**: Síntia Raianne Bezerra de Souza

**Matrícula**: 20250052970

**Período**: 2025.2

## 📁 Estrutura do Projeto
- `projeto/`: Projeto principal da unidade
- `listas/`: Soluções das listas de exercícios
- `README.md`: Este arquivo
  
## 🚀 Projeto: Sistema de Gerenciamento de Biblioteca

**Descrição**: Sistema para gerenciar as operações de uma biblioteca, permitindo o cadastro de livros e usuários, a listagem dos itens registrados e a realização de empréstimos.

**Repositório**: https://github.com/SintiaRaianne/raianne-sintia-itp-u1-2025-2

**Vídeo de Demonstração**: 

### Funcionalidades Implementadas:
- **Cadastro de Livros**: Permite ao usuário adicionar novos livros ao sistema, informando o título e o autor. O sistema define o status inicial do livro como "Disponível".
- **Listagem de Livros**: Exibe todos os livros cadastrados, mostrando o ID, título, autor e o status atual.
- **Cadastro de Usuários**: Permite o registro de novos usuários, solicitando nome e matrícula. 
- **Listagem de Usuários**: Mostra todos os usuários cadastrados no sistema com seus respectivos IDs, nomes e matrículas.
- **Realização de Empréstimos**: Realiza o empréstimo, verificando a disponibilidade do livro e garantindo que o usuário não tenha ultrapassado o limite permitido de empréstimos ativos.
- **Menu Interativo**: Exibe o menu principal, permitindo que o usuário o selecione a operação desejada.
- **Limpeza de Tela**: Limpa o terminal a cada nova interação no menu, oferecendo uma interface mais organizada e agradável.
  
### Conceitos da U1 Aplicados:
- Estruturas condicionais: Utilizadas para validar opções do menu, verificar disponibilidade de livros, controlar limites de empréstimos e validar IDs de usuários e livros.
- Estruturas de repetição: Implementadas no menu principal, na listagem de livros e usuários, e na busca por posições livres no vetor de empréstimos
- Vetores: Usados para armazenar informações referentes aos livros (título, autor e status), aos usuários (nome e matrícula) e aos empréstimos (associação entre usuário e livro).
- Funções: Além da função main(), também estão sendo utilizadas outras sete funções, sendo elas: 
  - `limparTela()` → Limpa o terminal para melhor visualização e experiência
  - `menuBiblioteca()` → Exibe o menu principal de opções
  - `cadastrarLivro()` → Adiciona novos livros ao sistema
  - `listarLivros()` → Mostra todos os livros cadastrados
  - `cadastrarUsuario()` → Registra novos usuários
  - `listarUsuarios()` → Exibe usuários cadastrados
  - `realizarEmprestimo()` → Controla o processo de empréstimo de livros
  
## 📚 Listas de Exercícios

### Semana 2 - Variáveis, Tipos e Operadores:
- ✅ Problema 1: Calculadora de IMC
- ✅ Problema 2: Conversão de temperatura
- ✅ Problema 3: Cálculo de juros compostos
- ✅ Problema 4: Operações aritméticas básicas

### Semana 3 - Condicionais:
- ✅ Problema 1: Classificação de IMC
- ✅ Problema 2: Calculadora de energia elétrica
- ✅ Problema 3: Sistema de notas
- ✅ Problema 4: Pedra, papel, tesoura
- ✅ Problema 5: Calculadora de desconto progressivo
- ✅ Problema 6: Diagnóstico médico simples
- ✅ Problema 7: Sistema de equações do 2º grau
- ✅ Problema 8: Validador de triângulos

### Semana 4A - Repetições:
- ✅ Problema 1: Dobrar folha
- ✅ Problema 2: Homem Aranha
- ✅ Problema 3: Números colegas
- ✅ Problema 4: Jogo de dardos

### Semana 4B - Análise e Padrões:
- ✅ Questões 1-4: Análise de código
- ✅ Questões 5-11: Implementações

### Semana 5 - Funções:
- ✅ Problema 1: Horários das rondas
- ✅ Problema 2: Primos triplos
- ✅ Problema 3: Pousando a sonda espacial
  
### Semana 6 - Vetores:
- ✅ Problema 1: MEC - Correção ENEM
- ✅ Problema 2: Álbum de figurinhas
- ✅ Problema 3: A construção da ponte
- ✅ Problema 4: Em busca do tesouro perdido

## 🎯 Principais Aprendizados
- Configuração e uso do ambiente de desenvolvimento com GCC
- Declaração e manipulação de variáveis
- Utilização de estruturas condicionais e laços de repetição
- Modularização do código por meio de funções
- Manipulação de strings e arrays multidimensionais
- Tratamento de entrada e saída de dados com printf e scanf


## 🔧 Ambiente de Desenvolvimento
- **SO**: Windows
- **Compilador**: GCC versão 15.2.0
- **Editor**: Visual Studio Code 
