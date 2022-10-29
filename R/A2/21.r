data_1 = data.frame(
  name = c("Ram","Raj","Roy"),
  age = c(20,25,15)
)
data_2 = data.frame(
  name = c("Aman","Sita"),
  age = c(10,35)
)

data_1 = rbind(data_1,data_2)
print(data_1)