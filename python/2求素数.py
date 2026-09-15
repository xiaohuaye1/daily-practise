primes = []
for i in range(2, 100):
    is_prime = True
    for j in range(2, i):
        if i % j == 0:
            is_prime = False
            break
    if is_prime:
        primes.append(i)
print(f"Found {len(primes)} prime numbers: {primes}")