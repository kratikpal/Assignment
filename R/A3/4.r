#data("state")
d = data.frame(state.x77)
colnames(d)[which(names(d) == "Life Exp")] <- "Life.Exp"
colnames(d)[which(names(d) == "HS Grad")] <- "HS.Grad"
print(colnames(d))