data_1 = data.frame(
  name = c("Ram",NA,"Raj","Roy",NA),
  age = c(15,20,25,NA,15)
)
print("NULL values in column1")
print(which(is.na(data_1$name)))
print("NULL values in column2")
print(which(is.na(data_1$age)))