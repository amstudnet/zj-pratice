while True:
    try:
        t = int(input())
        break
    except:
        continue
for _ in range(t):
    d=int(input())
    st=[]
    for i in range(d):
        name,start,end=input().split()
        
        st.append([name,int(start),int(end)])
    q=int(input())
    
    for  k in range(q):
        car=int(input())
        cnt=0
        for i in range(len(st)):
            if st[i][1]<=car<=st[i][2]:
                cnt+=1
                ans=st[i][0]
        
            
        if cnt==1:
            print(ans)
        else:
            print("UNDETERMINED")
    #print()
