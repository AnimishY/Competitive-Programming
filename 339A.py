strings = input().strip()
data = strings.split('+')
data = [int(i) for i in data]
data.sort()
sorted_strings = [str(i) for i in data]
output = '+'.join(sorted_strings)
print(output)