from compound import *

principal_amount = int(input ("Please, Enter the principal amount "))
interest_rate = float(input ("Please, Enter the rate of interest "))
time = int(input ("Please, Enter the time(in yrs) "))

answer = compound_interest(principal_amount,interest_rate,time)
print(answer)