#Generate Sigmoid output, input from (-8,8), 256 step, each step 0.0625
import math

def sig(x):
    temp = 1/(math.exp(-x) + 1)
    return temp

def main():
    input = -8.0
    while(input < 8.0):
        result = sig(input)
        #四舍五入，保留小数点后4位
        result = round(result, 4)
        
				#convet input/output to binary between -128 to +128, functIn -> -128,128 ,  FunctOut (0,16)
        functIn = round(input/0.0625)
        functOut = round(result/0.0625)
        
				#Convert an integer number to a binary string.
        binIn = str(bin(int(functIn)))
        binOut = str(bin(int(functOut)))
        
        #convert negative input to 2's complemnet here, should be some simpler way to do this:
        if(input < 0):
            a = 4
            if(len(binIn) < 11): #make right lengths, need to do twos compliment
                while(len(binIn) < 11):
                    binIn = binIn[:3] + "0" + binIn[3:]
                binIn = binIn[3:]
                result = ""
                found = False
                for a in reversed(binIn):
                    if found == False:
                        if a == "1":
                            result = "1" + result
                            found = True
                        else:
                            result = "0" + result
                    else:
                        if a == "1":
                            result = "0" + result
                        else:
                            result = "1" + result
                binIn = result
            else:
                binIn = binIn[3:]
        else:
            binIn = binIn[2:]
            while(len(binIn) < 8):
                binIn = "0" + binIn
        binOut = binOut[2:]
        while(len(binOut) < 5): #adjust output length to 5
            binOut = "0" + binOut
        print "Out " + str(functOut) + " In " + str(functIn) 
        print "\"" + binOut + "\"" + " when input = \"" + binIn + "\" else"
        input += 0.0625

main()
