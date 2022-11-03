#Write a program in R to convert decimal number to binary 

#library(binaryLogic)

binary <- function(n) {
  if(n > 1) {
    binary(as.integer(n/2))
  }
  cat(n %% 2)
}

n =readline(prompt = "Enter a number")
binary(as.integer(n))

#print(as.binary(n))
#library(devtools)

# install 'binaryLogic'
#install_github("d4ndo/binaryLogic")
#library(binaryLogic)