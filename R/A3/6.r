d.model2 = update(d.model, ~. -Income -Illiteracy -Area)
print(summary(d.model2))
