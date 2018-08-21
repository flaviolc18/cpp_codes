class Comp:
  def __init__(self):
    self.ini = 0
    self.fim = 0

n = int(input())

consulta = [Comp() for i in range(n)]

for i in consulta:
  i.ini, i.fim = [int(j) for j in input().split()]

consulta.sort(key=lambda comp : comp.fim)

livre, qtd = 0, 0

for i in consulta:
  if i.ini >= livre:
    qtd+=1
    livre = i.fim

print(qtd)