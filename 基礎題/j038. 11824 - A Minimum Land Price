t=int(input())
for _ in range(t):
    st=[]
    while 1:
        n=int(input())
        if n==0:break
        st.append(n)
    st.sort(reverse=True)
    sum1=0
    for i in range(len(st)):
        sum1+=2*pow(st[i],i+1)
    if sum1<=5000000:print(sum1)
    else:print('Too expensive')
