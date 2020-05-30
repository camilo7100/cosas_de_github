import matplotlib
import matplotlib.pyplot as plt

list_t = []
list_h = []

#Se tiene que separar la coma.
with open("datos.txt", "rt") as data:
    for i in data:
        value = i.split(',')
        
        list_t.append(float(value[0]))
        list_h.append(float(value[1].rstrip('\n')))
        
fig = plt.figure(figsize=(10,10))

plt.plot(list_t, list_h)
plt.savefig("grafico.pdf")