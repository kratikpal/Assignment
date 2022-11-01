data_1 = data.frame(
  name = c("Ram","Raj"),
  age = c(20,25)
)

data_2 = data.frame(
  name = c("Raj","Sita"),
  gender = c("M","F")
)

print("Inner join")
print(merge(data_1,data_2,by = "name"))
print("Outer join")
print(merge(data_1,data_2,by = "name",all = T))
print("Left join")
print(merge(data_1,data_2,by = "name",all.x = T))
print("Right join")
print(merge(data_1,data_2,by = "name",all.y = T))