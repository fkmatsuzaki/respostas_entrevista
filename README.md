# respostas_entrevista
Respostas do questionário

//1 - Identificação
Felipe Kenndy Matsuzaki
fkmatsuzaki@gmail.com
(11)980.558.185

//Questão 2
arquivo cpp : https://raw.githubusercontent.com/fkmatsuzaki/respostas_entrevista/main/questao2.cpp
O código está comentado, mas a resolução é simples, 
basta verificar o resto da divisão do número analizado pelos números propostos em if em sequencia,
no caso de i ser multiplo  de ambos, o texto é concatenado.

Para verificá-lo pode se utilizar um compilador online, inclusive deixe esse codigo salvo em um link compartilhável
https://onlinegdb.com/SyBvTEuhP , basta dar "Run".


//Questão 3
arquivo cpp : https://raw.githubusercontent.com/fkmatsuzaki/respostas_entrevista/main/questao3.cpp
Existem basicamente 2 condições para ser possivel utilizar as operaçõess de concatenar e remover de forma que seja possível construir a string t à partir da string s com um numero k exato de operações.
Se k for grande o suficiente é possivel remover todos caracteres de s e montar t do zero, dessa forma se k >= a soma dos comprimentos de s e t, é possivel.
A outra forma é de que s e t tenham seus começos iguais e o numero de caracteres diferentes sejam menor igual a k, e se sobrarem passos, é necessario que esses passos que sobraram sejam em numero par, para ser possivel remover de s e adicionar em t.

Para verificá-lo pode se utilizar um compilador online, inclusive deixe esse codigo salvo em um link compartilhável
https://onlinegdb.com/5F-IsV7Ei , basta dar "Run".

//Questão 4
sqlite : 

Select * from (select Nome, Nota, Valor from Alunos
inner join Notas on (Valor >= Valor_Min and Valor <= Valor_Max)
where Nota >= 8
order by Nota desc, Nome) as s1
union ALL
Select * From (select Null, Nota, Valor from Alunos
inner join Notas on (Valor >= Valor_Min and Valor <= Valor_Max)
where Nota < 8
order by Nota desc, Valor) as s2

Para verificá-lo pode se utilizar uma ide de sql online, inclusive deixe esse codigo salvo em um link compartilhável
https://sqliteonline.com/#fiddle=a8c165559c07b770741f157b6f8b604b89698de9a3ebdae9958393598c5d2fbc, basta dar "Run".

//Questão 5
- resposta: polimorfismo pois as classes B e C derivam de A, tem comportamentos diferentes mas aos olhos do metodo analisado, elas são A. Dessa forma é possivel deixar o código preparado para futuras classes que derivam de A.

//Questão 6
arquivo cpp : https://raw.githubusercontent.com/fkmatsuzaki/respostas_entrevista/main/questao6.cpp

As strings geralmente são terminadas com o caracter '\0', dessa forma é só percorrê-la e verificar quantos passos foram dados até chegar ao seu fim.

Para verificá-lo pode se utilizar um compilador online, inclusive deixe esse codigo salvo em um link compartilhável
https://onlinegdb.com/FQpYAnN_X , basta dar "Run".

//Questão 7
resposta:
SELECT name FROM dogs 
UNION 
SELECT name FROM cats

o union já remove duplicadas.
