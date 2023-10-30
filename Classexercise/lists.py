list=[52]
fi=1
li=list.len-1
print("Before modifying,")
for i in list:
    print(i)
curr=0
for i in range(1,3):
    curr=list[fi-i]
    curr=curr-1
    list.insert(fi-i,curr)
    fi+=1
for i in range(1,3):
    curr=list[li-i]
    curr=curr-1
    list.insert(fi-i,curr)
    fi+=1
print("After modifying,")
for i in list:
    print(i) 
'''
batches=[1,2,3,4]
print(len(batches))
4
print(batches[-1])
4
print(batches[0])
1
print(batches[1:])
[2, 3, 4]
print(batches[:2])
[1, 2]
print(batches[1:2])
[2]
tat=[1,2,3,4,5,6,7,8]
print(tat[2:6])
[3, 4, 5, 6]
batches
[1, 2, 3, 4]
batches[4]=5
Traceback (most recent call last):
  File "<pyshell#10>", line 1, in <module>
    batches[4]=5
IndexError: list assignment index out of range
batches.insert(4,5)
batches
[1, 2, 3, 4, 5]
batches.insert(2,-1)

batches
[1, 2, -1, 3, 4, 5]
batches[2]=0
batches
[1, 2, 0, 3, 4, 5]
batches.remove(2)
batches
[1, 0, 3, 4, 5]
batches.insert(1,1)
batches.insert(2,1)
batches
[1, 1, 1, 0, 3, 4, 5]
bathes.remove(1)
Traceback (most recent call last):
  File "<pyshell#23>", line 1, in <module>
    bathes.remove(1)
NameError: name 'bathes' is not defined. Did you mean: 'batches'?
batches.remove(1)
batches
[1, 1, 0, 3, 4, 5]
del batches[0:2]
batches
[0, 3, 4, 5]
del tat
tat
Traceback (most recent call last):
  File "<pyshell#29>", line 1, in <module>
    tat
NameError: name 'tat' is not defined
tat=[9,3,5,1,8,7,6]
sort(tat)
Traceback (most recent call last):
  File "<pyshell#31>", line 1, in <module>
    sort(tat)
NameError: name 'sort' is not defined. Did you mean: 'sorted'?
tat.sort()
tat
[1, 3, 5, 6, 7, 8, 9]
tat.sort(reverse=true)
Traceback (most recent call last):
  File "<pyshell#34>", line 1, in <module>
    tat.sort(reverse=true)
NameError: name 'true' is not defined. Did you mean: 'True'?
tat.sort(reverse=True)
tat
[9, 8, 7, 6, 5, 3, 1]
sorted(tat)
[1, 3, 5, 6, 7, 8, 9]
tat
[9, 8, 7, 6, 5, 3, 1]
tat.reverse()
tat
[1, 3, 5, 6, 7, 8, 9]
tat.sort().reverse()
Traceback (most recent call last):
  File "<pyshell#41>", line 1, in <module>
    tat.sort().reverse()
AttributeError: 'NoneType' object has no attribute 'reverse'
cls
Traceback (most recent call last):
  File "<pyshell#42>", line 1, in <module>
    cls
NameError: name 'cls' is not defined
c
Traceback (most recent call last):
  File "<pyshell#43>", line 1, in <module>
    c
NameError: name 'c' is not defined
[tat.sort()].reverse()
tat
[1, 3, 5, 6, 7, 8, 9]
batches
[0, 3, 4, 5]
tat=batches
tat
[0, 3, 4, 5]
batches
[0, 3, 4, 5]
batches.insert(4,6)
tat
[0, 3, 4, 5, 6]
batches.remove(6)
tat
[0, 3, 4, 5]
batches
[0, 3, 4, 5]
tat=list(batches)
batches.insert(4,6)
tat
[0, 3, 4, 5]
#copy
tat.clear()
tat
[]
tat=[1,1,1,3,4,5,6,6]
tat.count(1)
3
'''
