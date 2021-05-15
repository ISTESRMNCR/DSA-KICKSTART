from collections import defaultdict
 
def  AnagramsTogether(words):
    groupedWords = defaultdict(list)
 
    for word in words:
        groupedWords["".join(sorted(word))].append(word)
 
    
    for group in groupedWords.values():
        print(" ".join(group))     
 
 
  
arr =  ["cat", "dog", "tac", "god", "act"] 
AnagramsTogether(arr)    
