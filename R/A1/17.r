# check given number is palindrome or not

n = readline(prompt = "Enter value of n \n")
n = as.numeric(n)
num <- n
rev <- 0
while(n!=0){
  rem<-n%%10  
  rev<-rem+(rev*10)  
  n<-as.integer(n/10) 
}

if(num==rev){
  print("palindrome")
}else{
  print("not palindrome")
}