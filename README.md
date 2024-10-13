# Projeto: Sistema de Gestão de Itens com Estruturas em C

## Descrição

Este projeto é um sistema simples de gestão de itens utilizando estruturas em C. O programa permite ao usuário inserir, visualizar, e manipular uma lista de itens. O sistema opera com um menu interativo que oferece as seguintes funcionalidades:

- **Inserir Item**: Adiciona um novo item, contendo código, nome e quantidade.
- **Mostrar Item**: Exibe as informações do item inserido.
- **Pesquisar Item**: A funcionalidade de pesquisa será implementada futuramente.
- **Inserir em uma posição específica**: Também será implementada futuramente.
- **Deletar Item**: Essa funcionalidade está prevista para futuras versões.

O sistema é modular, onde funções separadas são planejadas para inserir e mostrar os dados dos itens.

## Estruturas Utilizadas

O programa usa estruturas para armazenar e manipular informações dos itens em uma lista encadeada. As principais estruturas são:

- **tipo_item**: Armazena informações de cada item, incluindo o código, o nome e a quantidade.
- **tipo_celula**: Representa uma célula da lista encadeada, que contém um ponteiro para o item e um ponteiro para a próxima célula.
- **tipo_lista**: Representa a lista encadeada, que possui um ponteiro para a primeira célula e outro para a última célula, além de uma variável para armazenar o total de itens.

## Funcionalidades

1. **Menu Interativo**: O programa exibe um menu com as opções disponíveis:
   - `1 - Inserir`: Permite que o usuário adicione um item inserindo o código, nome e quantidade.
   - `2 - Mostrar`: Exibe as informações do item adicionado.
   - `0 - Sair`: Encerra o programa.

2. **Inserir Item**:
   - O usuário pode inserir os seguintes dados de um item:
     - Código do item (inteiro)
     - Nome do item (string)
     - Quantidade do item (inteiro)

3. **Mostrar Item**:
   - Exibe o código, o nome e a quantidade do item previamente inserido.

## Como Usar

### Pré-requisitos

- Um compilador de C instalado (como GCC).
- Conhecimento básico de C e estruturas de dados.

### Compilar e Executar

Para compilar o código, você pode usar o seguinte comando no terminal (usando GCC, por exemplo):

```bash
gcc nome_do_arquivo.c -o nome_do_executavel
```

Para executar o programa, use o comando:

```bash
./nome_do_executavel
```

### Exemplo de Uso

Ao executar o programa, será exibido o seguinte menu:

```
----menu----
(1) - Inserir
(2) - Mostrar
(3) - Pesquisar
(4) - Inserir em uma posição
(5) - Deletar um item
(0) - Sair

Digite uma opção:
```

O usuário pode escolher as opções digitando o número correspondente.

## Futuras Implementações

- Implementação das funcionalidades de pesquisa, inserção em uma posição específica e remoção de itens.
- Melhorias no gerenciamento da lista encadeada e tratamento de erros.
