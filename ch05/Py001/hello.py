# ([0-9]{3}[1-9]|[0-9]{2}[1-9][0-9]{1}|[0-9]{1}[1-9][0-9]{2}|[1-9][0-9]{3})-(((0[13578]|1[02])-(0[1-9]|[12][0-9]|3[01]))|((0[469]|11)-(0[1-9]|[12][0-9]|30))|(02-(0[1-9]|[1][0-9]|2[0-8])))
# (19|20)[0-9]{2}

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