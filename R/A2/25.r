data_1 = data.frame(
  name = c("Ram","Raj","Roy"),
  age = c(20,25,15)
)
print(data_1[sample(nrow(data_1),2),])