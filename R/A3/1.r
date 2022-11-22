data_1 = data.frame(
  name = c("Ram","Raj","Roy"),
  age = c(20,25,15)
)

write.csv(data_1,"data_1.csv",row.names = F)

f1 = read.csv(file = "data_1.csv")
print(f1)

#Analyze
print(is.data.frame(f1))
print(dim(f1))
