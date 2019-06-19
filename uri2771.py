if __name__ == "__main__":
    import sys
#sys.stdin = open('in.txt', 'r')
    
while True:
    try:
        list = []
        string = input()
        temp = string.split(' ')
        n = int(temp[0])
        k = int(temp[1])

        string = input()
        temp = string.split(' ')
        for i in range(0,n):
            list.append(int(temp[i]))

        soma = 0
        list_soma = []
        #list.sort(reverse=True)
        i=0

        while i < n-1:
            j = i + 1
            while j < n-1:
                z = j + 1
                while z < n:
                    list_soma.append((list[i] + list[j] + list[z])/3)
                   # print ('{}, {}, {}'.format(list[i], list[j], list[z]))
                    z += 1

                j += 1

            i += 1
            
        list_soma.sort(reverse=True)
        print('{0:.1f}'.format(list_soma[k-1]))


    except EOFError:
        break
