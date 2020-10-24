special_tags = ['<title>','<abstract>','<body>']
stop_tags = ['</title>','</abstract>','</body>']
stop_words= list(input().split(";"))
index_term = list(input().split(";"))
import time
def get_init(texto):
    special = None
    for idx,tag in enumerate(special_tags):
        if tag in texto:
            special=tag
            break
    return special,idx
def get_end(texto):
    stop  = None
    for idx,tag in enumerate(stop_tags):
        if tag in texto:
            stop =tag
    return stop,idx


html = {}
while(1):
    key = "" 
    first = input()
    initial,id1  = get_init(first)
    ending = stop_tags[id1]
    texto = ''
    end = ''
    if ending in first:
        texto+=first[len(initial):len(ending)]
        html[initial] =[texto]
    else:
        texto+=first[len(initial):]
        while(end != ending):
            aux_text = input()
            end,id2  = get_end(aux_text)
            if end not is None
            texto += aux_text
        if end not is None:
            texto = 
