#EMI calculation
p=int(input('enter p:'))
T=int(input('enter t:'))
R=float(input('enter r:'))
Si=(p*T*R)/100
EMI=(p+Si)/(T*12)
print('EMI:',EMI)
