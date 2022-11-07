data_1 = data.frame(
  name = c("Ram",NA,"Raj","Roy",NA),
  age = c(15,20,25,NA,15)
)

print(mean(data_1$age,na.rm = T))