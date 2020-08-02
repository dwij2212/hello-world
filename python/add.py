import sys
try:
    a = int(sys.argv[1])
    b = int(sys.argv[2])
except TypeError:
    print("Enter valid numbers")

print(f"Sum is {a + b}")

