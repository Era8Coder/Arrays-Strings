"""
    Standard Pattern To Convert Something INTO ZIGZAG Pattern <<-- Learn This -->>
"""

s = str(input())
num_rows = int(input())

def zig_zag(s, num_rows):
    going_down = True
    if num_rows <= 1:
        print(s)

    """
        How to initialize the 2D array in Python in Character/String/Integer or Any Other Data - Type
    """

    rows = num_rows
    cols = len(s)

    v = []
    
    for _ in range(rows):
        v.append([' ']*cols)            # How to initialise a vector

    i = 0
    j = 0
    n = len(s)
    for k in range(0,n):                # Run the Loop for "n" TIMES <<-- so that we can make new string
        v[i][j] = s[k]                                  # Making them String
        if going_down:
            if i < num_rows - 1:
                i = i + 1
            else:               # Here i = num_rows - 1
                going_down = False
                i = i - 1
                j = j + 1       # Time to Change the Column
        
        else:
            if i > 0:
                i = i - 1
                j = j + 1
            else:
                going_down = True
                i = i + 1                           # Increase i by one as you want to proceed :)

    return v

v = zig_zag(s,num_rows)
strs = ""
for i in range(len(v)):
    for j in range(len(v[i])):
        if v[i][j] != ' ':
            strs = strs + v[i][j]
        print(v[i][j], end = " ")
    print()

print(strs)