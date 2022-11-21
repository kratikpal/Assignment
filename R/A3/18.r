d = read.csv("Android.csv")

#Exploring
dim(d)
str(d)

#Missing values
for (i in 1:ncol(d)) {
  print(which(is.na(d[,i])))
}
d = na.omit(d)

#Cleaning & Filtering
d$Category = as.factor(d$Category)
class(d$Category)
d = d[-which(startsWith(d$App,"?")),]
d = d[-which(endsWith(d$App,"?")),]

#Outliers
boxplot(d$Rating)
table(boxplot.stats(d$Rating)$out)
# x_out_rm ＜- x[!x %in% boxplot.stats(x)$out] 

# Analysis
print(nrow(d))
print(ncol(d))
print(summary(d))

# Training and Testing
num = round((nrow(d)*0.80))
training_d = d[1:num,]
testing_d = d[(num+1):nrow(d),]

# Linear Regression
plot(Rating ~ Number.of.ratings, data = d) #Checking linearity of data
d_lm = lm(Rating ~ Number.of.ratings, data = d)
summary(d_lm)
plot(d_lm)
