# Fibonacci numbers
n = readline(prompt = "Enter value of n \n")
n = as.numeric(n)
fib <- numeric(n)
fib[1] <- 1
fib[2] <- 1
for(i in 3:n){
  fib[i] <- fib[i-2]+fib[i-1]
}
print(fib)