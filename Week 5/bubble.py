def bubbleSort( theSeq ):
    n = len( theSeq )

    for i in range( n - 1 ) :
        flag = 0

        for j in range(n - 1) :
            
            if theSeq[j] > theSeq[j + 1] : 
                for a in theSeq:
                    print(str(a) + ",", end ="") 
                print("")
                tmp = theSeq[j]
                theSeq[j] = theSeq[j + 1]
                theSeq[j + 1] = tmp
                flag = 1
                for a in theSeq:
                    print(str(a) + ",", end ="") 
                print("")

        if flag == 0:
            break

    return theSeq

el = [3,7,6,2,9,5] 

result = bubbleSort(el)

print (result)