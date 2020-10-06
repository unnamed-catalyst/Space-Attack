print('To calculate your tax, enter the following details')

#Getting Details from user
ttin = int(input('Enter your total income in Rs: '))
age = int(input('Enter age : '))
sex = str(input("Enter sex (M or F): "))

#Glossary: ttin = income before tax
#          txin = income after tax

#if salary up to Rs.250,000
if ttin <= 250000:
    txin = ttin
    print('No tax deducted\nNet income after tax - Rs. ' + str(txin))
    
#if salary is bw Rs.250,001 and Rs.500,000
elif ttin >= 250001 and ttin <= 500000:
    if age <= 59 and sex.upper() == "M":
        tax = ttin*0.05
        tax = tax + tax*0.04
        txin = ttin - tax
        print('Total tax deducted = Rs. ' + str(tax))
        print('Net income after tax - Rs ' + str(txin))
    elif age >= 60 or sex.upper() == "F":
        tax = ttin*0.03
        tax = tax + tax*0.04
        txin = ttin - tax
        print('Total tax deducted = Rs. ' + str(tax))
        print('Net income after tax - Rs ' + str(txin))
        
#if salary is bw Rs. 500,001 and Rs. 1,000,000
elif ttin >= 500001 and ttin <= 1000000:
    if age <= 59 and sex.upper() == "M":
        tax = ttin*0.2 + 12500
        tax = tax + tax*0.04
        txin = ttin - tax
        print('Total tax deducted = Rs. ' + str(tax))
        print('Net income after tax - Rs ' + str(txin))
    elif age >= 60 or sex.upper() == "F":
        tax = ttin*0.2 + 7500
        tax = tax + tax*0.04
        txin = ttin - tax
        print('Total tax deducted = Rs. ' + str(tax))
        print('Net income after tax - Rs ' + str(txin))
        
#if salary is more than Rs. 1,000,000
elif ttin >= 1000001:
    if age <= 59 and sex.upper() == "M":
        tax = ttin*0.3 + 112500
        tax = tax + tax*0.04
        txin = ttin - tax
        print('Total tax deducted = Rs. ' + str(tax))
        print('Net income after tax - Rs ' + str(txin))
    elif age >= 60 or sex.upper() == "F":
        tax = ttin*0.3 + 107500
        tax = tax + tax*0.04
        txin = ttin - tax
        print('Total tax deducted = Rs. ' + str(tax))
        print('Net income after tax - Rs ' + str(txin))

        