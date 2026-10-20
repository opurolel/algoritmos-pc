📘 Aula 02 — Introdução à Programação em Linguagem C

Nesta aula foram apresentados os fundamentos da programação e da linguagem C, desde o conceito de programa de computador até a escrita dos primeiros códigos, passando pelo uso de pseudocódigo para planejar a solução antes de programar.

Durante a aula, foram estudados o funcionamento de compiladores e interpretadores, a estrutura básica de um programa em C, os tipos de dados, as variáveis e os comandos de entrada e saída, além de exercícios práticos para aplicar esses conceitos.

Conteúdos praticados:

💻 Programa de computador e linguagens de programação
Compilador × interpretador
Níveis de abstração, paradigmas e tipagem de linguagens
IDEs (Visual Studio Code, Dev-C++, Code::Blocks, NetBeans e Eclipse)
Pseudocódigo (algoritmo, inicio, fim, leia, escreva)
Estrutura básica de um programa em C (#include, main(), return 0)
Tipos de dados (int, float, double, char)
Variáveis: declaração, identificadores e inicialização
Comandos de saída: printf() e especificadores de formato (%d, %c, %s, %f, %lf, %.2f)
Comando de entrada: scanf()
Formatação de campos na saída (%5d, %06d, %7.3f)
Acentuação com locale.h e setlocale()
Conversão implícita e explícita (casting)
Cálculos com fórmulas matemáticas
💻 Exemplos desenvolvidos

Foram apresentados algoritmos em pseudocódigo para calcular o quadrado de um número, a média entre dois números e registrar idade e profissão do usuário. Em C, foram desenvolvidos o “Olá, mundo”, a exibição dos dados de um aluno (RGM e média), o cálculo da área de um círculo e o programa da cafeteria universitária. Também foram demonstradas a conversão implícita e explícita de tipos, mostrando por que (5 + 2) / 2 resulta em 3.00 e como o casting leva ao resultado correto de 3.50.

📝 Exercícios

Exemplo de aplicação — Cafeteria universitária

Programa que lê a quantidade de cafés comprados por um estudante e o preço unitário de cada café, calcula o valor total da compra e exibe o resultado.

1. Perímetro da circunferência

Programa que lê o raio de uma peça circular (em cm), calcula o perímetro da circunferência com a fórmula 2 * pi * raio e exibe o resultado com duas casas decimais.

2. Jardim retangular

Programa que lê o comprimento e a largura de um jardim retangular (em metros), calcula o perímetro (2 * (comprimento + largura)) e a área (comprimento * largura) e exibe os resultados com duas casas decimais. Também foi apresentado o algoritmo em pseudocódigo correspondente.

3. Semanas de gestação em meses

Algoritmo e programa que leem a quantidade de semanas de gestação e calculam a quantidade aproximada de meses correspondentes, considerando 7 dias por semana e 30 dias por mês.

4. Consumo diário de água

Algoritmo e programa que leem a massa corporal de uma pessoa (em kg) e exibem a quantidade aproximada de água recomendada por dia em litros, considerando 35 ml por quilograma.

5. Média aritmética

Algoritmo e programa que leem as duas notas de um aluno e exibem sua média aritmética com duas casas decimais.

🎯 Objetivo da aula

Introduzir a programação em linguagem C e compreender como transformar um algoritmo em um programa executável:

Pseudocódigo → planejar a solução antes de escrever o código.
Variáveis e tipos de dados → armazenar e manipular informações na memória.
printf() e scanf() → exibir resultados e receber dados do usuário.
Conversão de tipos → garantir que os cálculos produzam o resultado esperado.

A aula também permitiu aplicar esses conceitos em situações práticas envolvendo cálculos de perímetro, área, médias e conversões de unidades.

Algumas observações:

Título da pasta/aula: usei “Aula 02 — Introdução à Programação em Linguagem C”, conforme o nome do arquivo. Se na sua pasta estiver diferente, é só ajustar.
Exercício 1 (perímetro): o exemplo do PDF usa raio 5.30 e resultado 33.29, que é consistente com π ≈ 3,14159.
Rótulos no PDF: nos exercícios 2 a 5, o slide rotula a saída esperada como “Entrada” (provável erro de digitação do professor). Não afeta o README, mas fica a dica caso queira registrar as saídas esperadas.
