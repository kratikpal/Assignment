data_1 = data.frame(
  name = c("Ram","Raj","Roy"),
  age = c(20,25,15)
)
library(xlsx)
write.xlsx(data_1,file = "data_1.xlsx",sheetName = "sheet1",row.names = F)
f1 = read.xlsx(file = "data_1.xlsx",sheetName = "sheet1")
print(f1)

#Analyze
print(is.data.frame(f1))
print(dim(f1))