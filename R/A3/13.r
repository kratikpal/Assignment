data_1 = data.frame(
  name = c("Ram","Raj","Roy","Aman","Sita"),
  age = c(20,25,15,10,30)
)

num = round(nrow(data_1)*0.80)

print("80% data")
print(data_1[1:num,])

print("20% data")
print(data_1[(num+1),])
