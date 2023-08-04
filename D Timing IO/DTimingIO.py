import time

NO_OF_TIMES = 50000

noIoStart = time.time()
[i+1 for i in range(NO_OF_TIMES)]
noIoEnd = time.time()

ioStart = time.time()
[print(i+1) for i in range(NO_OF_TIMES)]
ioEnd = time.time()