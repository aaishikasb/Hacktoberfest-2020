
Problem statement:

You are given words. Some words may repeat. For each word, output its number of occurrences. 
The output order should correspond with the input order of appearance of the word. 


from collections import Counter, OrderedDict
class OrderedCounter(Counter, OrderedDict):
    pass
d = OrderedCounter(input() for _ in range(int(input())))
print(len(d))
print(*d.values())
