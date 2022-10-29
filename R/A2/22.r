data_1 = data.frame(
  name = c("Ram","Raj","Roy"),
  age = c(20,25,15)
)
data_1 = data_1[-c(2,3),]
print(data_1)