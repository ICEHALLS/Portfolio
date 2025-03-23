##Existem 3 tipos de comandos condicionais, if(se), elif(senão,se) e else (senão).Exemplo

if 1==1:
	print('1 é igual a 1')

if 1==2:
	print('1 é igual a 2')

elif 1==1:
	print('1 é igual a 1')


if 1==2:
	print('um é igual a um')
else:
	print('1 não é igual a 2')



##No caso do elif podemos repeti-lo diversas vezes e caso nenhuma das condições sejam satisfeitas podemos colocar um else. Por exemplo:

valor = 999

if valor<0:
	print('valor negativo')

elif valor<100:
	print('valor pequeno')

elif valor<1000:
	print('valor medio')

else:
	print('valor grande')



##Operadores relacionais

##==: Comparador de igualdade, como vimos que no Python para atribuir um valor a uma variável utilizamos o =, precisamos de uma outra forma de verificar se valores são iguais e para isso utilizamos o ==

##! = : Diferença, utilizamos para comparar de dois valores são diferentes

##<: Compara se o valor à esquerda do símbolo é menor que o valor a direita

##>: Compara se o valor à esquerda do símbolo é maior que o valor da direita

##>= : Compara se o valor à esquerda do símbolo é maior ou igual que o valor da direita

##< = : Compara se o valor à esquerda do símbolo é menor ou igual que o valor da direita

####OPERADORES LÓGICOS

#operador and

M = 10 

if M > 5 and M < 15:
	print('o valor de M está entre 5 e 15')

else:
	print('miau')


#operador or

N = 20

if valor == 5 or valor > 15:
	print('O valor é igual a cinco OU maior que 15')