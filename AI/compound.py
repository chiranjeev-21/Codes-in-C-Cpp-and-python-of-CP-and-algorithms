def compound_interest(principal_amount , interest_rate , time):
    comp_int = principal_amount*(1 + (interest_rate/100))**(time)
    return comp_int

principal_amount = int(input ("Please, Enter the principal amount "))
interest_rate = float(input ("Please, Enter the rate of interest "))
time = int(input ("Please, Enter the time(in yrs) "))

print("The compound interest is : ",compound_interest(principal_amount,interest_rate,time))