def fibonacci(n):
    if(n <= 1):
        return n
    return fibonacci(n-2) + fibonacci(n-1)


if "__main__":
    n = int(input("Bir sayı girin: "))
    print(fibonacci(n))