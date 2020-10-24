special_tags = ['<title>','<abstract>','<body>']
stop_tags = ['</title>','</abstract>','</body>']
stop_words= list(input().split(";"))
index_term = list(input().split(";"))


acc = []
out = ''
while True:
    try:
        acc.append(input()) # Or whatever prompt you prefer to use.
    except EOFError:
        out = '\n'.join(acc)
        break
acc
