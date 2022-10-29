data_1 = data.frame(
  name = c("Ram","Raj","Roy"),
  age = c(NA,25,NA)
)
data_1[is.na(data_1)] = 3
print(data_1)