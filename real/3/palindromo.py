def get_answer(texto): 
    message = texto
    dictionario = {} 
    R = [[0 for x in range(len(texto)+1)] for x in range(2)] 
    s = "@" + texto + "#"  
    for j in range(2): 
        rp = 0
        R[j][0] = 0
        i = 1
        while i <= len(texto): 
            while s[i - rp - 1] == s[i + j + rp]: 
                rp += 1
            R[j][i] = rp 
            k = 1
            while (R[j][i - k] != rp - k) and (k < rp): 
                R[j][i+k] = min(R[j][i-k], rp - k) 
                k += 1
            rp = max(rp - k, 0) 
            i += k 
    s = s[1:len(s)-1] 
    dictionario[s[0]] = 1
    for i in range(1,len(texto)): 
        for j in range(2): 
            for rp in range(R[j][i],0,-1): 
                dictionario[s[i - rp - 1 : i - rp - 1 + 2 * rp + j]] = 1
        dictionario[s[i]] = 1
    maxi = -100000
    for idx,i in enumerate(dictionario):
        #print(m,idx,i)
        for j in list(dictionario.keys())[(idx+1):]:
            p1 = message.find(i)
            p2 = message.find(j)
            if not (max(p1,p2)<min(p1+len(i),p2+len(j))):            
                maxi = max(len(i)+len(j),maxi)
    print(maxi)

get_answer("xabcbayabbaz") 
