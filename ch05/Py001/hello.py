
def f1():
  it = ['a','b','c','d']
  for x in range(1, 4) :
    for y in range(3) :
      if not (x == y) :
        print("{} {} ".format(it[x], it[y]))

def f2():
  k=3.14
  x=0
  if  0< k < 10 :
    if k > 5:
      if k > 8:
        x = 0
      else :
        x = 1
    else:
      if k > 2:
        x = 3
  else:
    x = 4
  print(x)

f1()
print("Hello, uuuu")
print(255**4)
f2()