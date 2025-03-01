import numpy as np
import time

NUM_TESTS = 10
NUM_ELEMENTS = 1000000

for _ in range(NUM_TESTS):
    data = np.random.rand(NUM_ELEMENTS) * 1000000
    
    start_time = time.time()
    sorted_data = np.sort(data)
    end_time = time.time()

    elapsed_time_ms = (end_time - start_time) * 1000
    print(f"{elapsed_time_ms:.2f} ms", end=" ")

print()
