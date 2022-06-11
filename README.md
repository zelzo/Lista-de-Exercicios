# Lista-de-Exercicios
<div style="display: inline-block;">
<img align="center" alt="C++" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
<img align="center" height="28px" width="112px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
</a> 
</div>

<p> </p>
<p> </p>

## Grupo
- Celso Vinícius S. F.
- Pedro H. Pires Dias

## Problema 1: Listas
<p align="justify">
Considerando nossos modelos de lista (i.e., linear e dinâmica), realize as solicitações de implementação a seguir, considerando para isso estruturar sua solução da seguinte forma:
</p>

- Uma implementação magma que conecte todas as letras por um único menu para execução.
- Uma implementação magma que conecte todas as letras por um único menu para execução.
<p align="justify">
A) Escreva uma função recursiva e outra não recursiva para contar o número de elementos pares e impares contidos em uma lista dinâmica.
</p>
<p align="justify">
B) Crie uma função que simule um pequeno jogo que utiliza duas listas (i.e., L1 e L2). Nesse, cada lista possui tamanho máximo de 3 entradas e cada posição deve armazenar um número inteiro aleatório entre 1 e 13. Nesse jogo, após preencher ambas as listas, selecione também de forma aleatória mais um valor entre 1 e 13 e mostre-o na tela. A regra do jogo é a seguinte: Ambas as listas devem ser apresentadas por leitura sequencial a partir de suas posições de paridade, ou seja, {{L1[0], L2[0]}, {L1[1], L2[1]}, {L1[2], L2[2]}}. Cada par deve ser subtraído do valor apresentado e ganha o jogo a lista que apresentar a maior soma final. Mostre o ganhador ao final.
</p>
<p align="justify">
C) Escreva uma função que receba duas listas x = [x1, x2, . . . , xn] e y = [y1, y2, . . . , yn] e retorne uma lista z = [(x1, yn),(x2, yn−1, . . . ,(xn, y1)]. Ao final, as listas x e y devem estar vazias.
</p>
<p align="justify">
D) Escreva uma função que receba pares de listas x = [x1, x2, . . . , xn] e y = [y1, y2, . . . , ym] com n, m > 0 e n = m. Calcule a distância euclidiâna entre os múltiplos pares recebidos e encontre os k pares mais próximos.
</p>

### Resolução 1: A
<p align="justify">
...
</p>

### Resolução 1: B
<p align="justify">
...
</p>

### Resolução 1: C
<p align="justify">
...
</p>

### Resolução 1: D
<p align="justify">
...
</p>

## Problema 2: Pilhas
  <p align="justify">
É de nosso conhecimento que a estrutura do tipo pilha define regras de manipulação que não podem ser modificadas e que essas são comumente citadas como ações de PUSH (empilhar) e POP (desempilhar). Sabendo-se disso e mediante as regras de desenvolvimento já apresentadas faça:
  </p>
    <p align="justify">
A) Escreva uma função que receba uma equação matemática qualquer e retorne duas pilhas. Uma contendo os operandos empilhados da esquerda para a direita e outra contendo os operadores seguindo mesma linha de leitura.
  </p>
   <p align="justify">
B) Considerando a função elaborada no item (a), crite uma segunda função que apresente a operação matemática em notação prefixa e posfixa. Veja alguns exemplos na tabela abaixo (i.e., Tabela 1.)
  </p>
  <p align="center">
	  <img align="center" height="300px" width="300px" src="imgs/tabela1.png"/> 
  </p>
   <p align="justify">
C) Elabore uma função que receba uma pilha P1 com 20 posições preenchidas por númerosinteiros aleatórios entre 1 e 99. Para cada número da pilha, utilize a função totiente de Euler para encontrar para esse número os co-primos. Mostre-os na tela como resultado de sua execução.
  </p>
    <p align="justify">
D) Crie uma função para realizar o calculo de fibonacci para um valor de N. Contudo, utilizeuma pilha para armazenar os pré resultados, utilizando-os para outros calculos sempre que possível. Para tanto, considere manter no topo da pilha o cálculo para o valor de (n-1). Crie uma forma de identificar para qual n-1 o valor foi cálculado para não utilizar valores incorretos para calculos longos. Feito isso responda: Manter os cálculos em pilha pode ajudar a economizar computações? Quando seria melhor empregado?
  </p>

### Resolução 2: A
<p align="justify">
...
</p>

### Resolução 2: B
<p align="justify">
...
</p>

### Resolução 2: C
<p align="justify">
...
</p>

### Resolução 2: D
<p align="justify">
...
</p>

## Problema 3: Filas
<p align="justify">
Uma estrutura baseada em fila tem por definição a regra de sempre remover do início e inserir novos elementos no final. Sabendo-se disso, vamos praticar a utilização desse conceito nos seguintes problemas:
</p>
<p align="justify">
A) Escreva uma função que receba pares de filas, ambas de tanho n, divida ambas ao meio e ligue as metadas para compor duas novas filas, as quais devem ser retornadas para o usuário. Tais filas devem ser definidas como dinâmicas.
</p>
<p align="justify">
B) Escreva uma função que aplica uma equação matemática qualquer aos numeros de uma fila. Essa equação tem por objetivo produzir um indexador para a fila dada como entrada, logo, precisa ser retornado junto com a fila para o usuário.
</p>
<p align="justify">
C) Elabore uma função que receba um conjunto de filas, todas com valores de indexação conforme item (b). Ordene esse grupo de filas pelo método da bolha e as retorne ao usuário considerando o maior valor de indexação como cabeça dessa ordem.
</p>

### Resolução 3: A
<p align="justify">
...
</p>

### Resolução 3: B
<p align="justify">
...
</p>

### Resolução 3: C
<p align="justify">
...
</p>

## Compilação e Execução
<p align="justify">
O código disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:
</p>

| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
