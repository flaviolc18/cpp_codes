def find_min_moedas(moedas, n):
  qtd=0

  for i in moedas:
    while(n >= i):
      n -= i
      qtd += 1
      if(n==0):
        return qtd

print(find_min_moedas([100, 50, 25, 10, 5, 1], int(input())))