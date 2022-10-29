data_1 = data.frame(
  name = c("Ram","Raj","Roy"),
  age = c(20,25,15)
)
list_1 = split(data_1,seq(nrow(data_1)))
print(list_1)