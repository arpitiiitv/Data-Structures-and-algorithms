X=input("Enter the string of lowercase alphabets  ")
current_length = 0
max_length = 0
sub_string = []
for i in range(len(X)):
    if X[i] not in sub_string:
        sub_string.append(X[i])
        current_length = len(sub_string)
        max_length=max(current_length,max_length)
        
    else:
        sub_string = sub_string[1:]
        sub_string.append(X[i])
        

print(max_length)