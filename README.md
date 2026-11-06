# 💻 Algoritmos e Pensamento Computacional

Repositório com as aulas, exercícios e projetos da disciplina **Algoritmos e Pensamento Computacional**, ministrada pelo **Prof. Marco Antonio Sanches Anastacio**, na **Universidade Cruzeiro do Sul** (2º semestre de 2026).

A disciplina introduz a programação em **linguagem C**, partindo do planejamento da solução em pseudocódigo até a construção de programas modulares que leem, processam e gravam dados.

---

## 🎯 Sobre a disciplina 

O foco da disciplina é transformar um problema em uma solução computacional: entender o problema, planejar o algoritmo e implementá-lo em C, testando diferentes casos e sendo capaz de explicar cada estrutura utilizada.

**Principais tópicos estudados:**

- 🧠 Algoritmos e pseudocódigo
- Variáveis, tipos de dados e comandos de entrada e saída
- Operadores e expressões
- Estruturas de decisão (`if`, `if...else`, `switch...case`)
- Estruturas de repetição (`for`, `while`, `do...while`)
- Vetores, matrizes e strings
- Manipulação de arquivos de texto
- Funções, modularização e estruturas (`struct`)

---

## 🗂️ Conteúdo do repositório

Cada pasta possui um `README.md` com o enunciado das atividades e o objetivo da aula ou do projeto.

### Aulas

| Aula | Tema | Principais conteúdos |
|---|---|---|
| [Aula 02](./Aula_02/README.md) | Introdução à Programação em Linguagem C | Compiladores e interpretadores, pseudocódigo, estrutura de um programa em C, tipos de dados, variáveis, `printf()` e `scanf()` |
| [Aula 03](./Aula_03/README.md) | Operadores e Expressões | Operadores aritméticos, relacionais e lógicos, precedência, divisão inteira × real, biblioteca `math.h` |
| [Aula 04](./Aula_04/README.md) | Estruturas de Decisão | `if`, `if...else`, decisões aninhadas, `switch...case` |
| [Aula 06](./Aula_06/README.md) | Estruturas de Repetição | `for`, `while`, `do...while`, validação de dados, `break` e `continue` |
| [Aula 07](./Aula_07/README.md) | Exercícios e Projeto | Revisão de repetição com contadores e acumuladores, leitura de strings |
| [Aula 08](./Aula_08/README.md) | Estruturas de Dados Básicas | Vetores, matrizes, padrões de processamento, strings |
| [Aula 09](./Aula_09/README.md) | Manipulação de Arquivos | Ponteiros (introdução), `fopen()`, `fclose()`, modos `r`/`w`/`a`, `fprintf()`, `fgets()`, `fscanf()` |
| [Aula 10](./Aula_10/README.md) | Funções e Modularização | Funções, parâmetros por valor e por referência, `struct`, vetor de estruturas |

### Projetos

| Projeto | Tema | Conteúdos aplicados |
|---|---|---|
| [Projeto 1 (Aula 05)](./Projeto_1/README.md) | **Arena Tech** — planejamento e viabilidade de uma maratona gamer | Entrada e saída, operadores, estruturas de decisão e relatório de viabilidade, com avaliação por pares |
| [Projeto 3 (Aula 07)](./Projeto_3/README.md) | **Missão Orbital** — simulador de treinamento espacial | `for`, `while`, `do...while` e condicionais para validar pontuações e classificar cadetes |

---

## 🧭 Trilha de aprendizagem

A disciplina segue uma sequência em que cada assunto se apoia no anterior:

1. **Fundamentos** → como um programa funciona, pseudocódigo, variáveis e entrada e saída.
2. **Cálculos e decisões** → operadores, precedência e estruturas condicionais.
3. **Repetição** → laços para repetir tarefas, validar dados e acumular resultados.
4. **Dados organizados** → vetores, matrizes e strings para trabalhar com conjuntos de valores.
5. **Persistência** → arquivos de texto para guardar e recuperar dados.
6. **Modularização** → funções e estruturas para organizar programas maiores.

Os projetos aplicam esses conteúdos em problemas completos: o **Projeto 1** combina cálculos e decisões, e o **Projeto 3** combina decisões e repetição.

---

## ⚙️ Como compilar e executar

Os programas são escritos em C e podem ser compilados com o GCC:

```bash
gcc programa.c -o programa
./programa
```

Quando o programa utiliza funções da biblioteca `math.h` (como `sqrt()`, `pow()` ou `ceil()`), pode ser necessário adicionar a opção `-lm` no Linux e no WSL:

```bash
gcc programa.c -o programa -lm
```

---

## 👤 Autor

Repositório organizado como registro de estudo da disciplina.

- **Nome:** _[Leonardo Delmondes Cunha]_
  
---

## 📌 Observações

- Os READMEs de cada aula e projeto descrevem os enunciados e objetivos a partir do material fornecido pelo professor.
- Material didático elaborado pelo Prof. Marco Antonio Sanches. O Projeto 3 (Missão Orbital) foi originalmente proposto pelo Prof. Vinícius Alves e adaptado para uso em aula.
