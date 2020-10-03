Hrs= input("Enter no. of hours")
Rate= input("Enter Pay Rate")
HrsL= input("Enter max no. of hours")
ExR= input("Enter extra pay rate")
Hrs= float(Hrs)
Rate= float(Rate)
HrsL= float(HrsL)
ExR= float(ExR)
def computepay():
    if Hrs > HrsL :
        Excess= (Hrs)-HrsL
        Pay= (Rate*HrsL)+(Excess*ExR*Rate)
        return Pay
    else :
        Pay= Hrs*Rate
        return Pay
Salary = computepay()
print("Pay", Salary)
