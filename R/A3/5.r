d = as.data.frame(state.x77)
colnames(d)[which(names(d) == "Life Exp")] <- "Life.Exp"
colnames(d)[which(names(d) == "HS Grad")] <- "HS.Grad"
d.model = lm(Life.Exp ~ Population + Income + Illiteracy + Murder + HS.Grad + Frost + Area,data = d)
print(summary(d.model))