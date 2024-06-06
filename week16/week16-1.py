#week16-1
#import collections
from collections import Counter
words=["bella","label","roller"]
for i in range(3):
  #counter=collections.Counter(words[i])
  counter =Counter(words[i])
  print(words[i],counter)
#ans=collections.Counter(word[0])&collections.Counter(word[1])&collections.Counter(word[2])
ans=Counter(words[0])&Counter(words[1])&Counter(words[2])
print(ans)
