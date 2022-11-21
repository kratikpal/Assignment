data_1 = data.frame(
  name = c("Ram","Raj","Roy"),
  age = c(20,25,15)
)

write.csv(data_1,"data_1.csv",row.names = F)

f1 = read.csv(file = "data_1.csv")
print(f1)

data_2 = data.frame(
  name = c("Aman","Sita"),
  age = c(10,35)
)

r1 = data.frame(name = "Aman", age = 10)

write.table(r1, file = f1, sep = ",",
            append = TRUE, quote = FALSE,
            col.names = FALSE, row.names = FALSE)