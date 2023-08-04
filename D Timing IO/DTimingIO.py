import time

NO_OF_TIMES = 50000

noIoStart = time.time()
[i+1 for i in range(NO_OF_TIMES)]
noIoEnd = time.time()

ioStart = time.time()
[print(i+1) for i in range(NO_OF_TIMES)]
ioEnd = time.time()

print(f"Time used w/o IO: {round(noIoEnd-noIoStart, 7)}ms")
print(f"Time used w/  IO: {round(ioEnd-ioStart, 7)}ms")