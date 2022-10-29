data_1 = data.frame(
  name = c("Ram","Raj","Roy"),
  age = c(20,25,15)
)
save(data_1,file = "data_1.rda")
load("data_1.rda")
print(file.info("data_1.rda"))