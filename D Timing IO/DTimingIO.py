import time

NO_OF_TIMES = 100

noIStart = time.time()
intList = [str(i+1) for i in range(NO_OF_TIMES)]
noIEnd = time.time()

with open("input.txt", "w") as fp:
    fp.write(" ".join(intList))

time.sleep(2)

iStart = time.time()
intList = input()
iEnd = time.time()
intList = intList.split()

noOStart = time.time()
[x for x in intList]
noOEnd = time.time()

oStart = time.time()
[print(x) for x in intList]
oEnd = time.time()

print(f"Time used w/o input : {round(noIEnd-noIStart, 7)}s")
print(f"Time used w/  input : {round(iEnd-iStart, 7)}s")
print(f"Time used w/o output: {round(noOEnd-noOStart, 7)}s")
print(f"Time used w/  output: {round(oEnd-oStart, 7)}s")