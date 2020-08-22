import math

print(abs(-100))
print(math.ceil(1234.567))
print(math.floor(1234.567))
print(math.trunc(1234.567))
print(round(1234.567, 2))
print(pow(2, 4))
print(math.factorial(5))
print(math.sqrt(10000))
print(divmod(10, 3))
print(math.gcd(96, 36))
print(math.nan)
print(math.inf)

data = ['はくさい', 'ねぎ', 'レタス', 'ブロッコリー']
print(min(data, key = lambda n: len(n)))
print(max(data, key = lambda n: len(n)))

print(math.pi)
print(round(math.cos(math.pi / 180 * 60), 1))
print(round(math.sin(math.pi / 180 * 30), 1))
print(round(math.tan(math.pi / 180 * 45), 1))
print(math.e)
print(math.exp(2))
print(math.log(125, 5))
print(math.log10(100))
print(math.frexp(0.0123))
print(math.modf(3.14159))
print(math.copysign(3.14159, -3.0))