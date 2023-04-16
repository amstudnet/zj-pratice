while 1:
    ans=input().split()
    a=int(ans[0])
    #b=ans[1]
    if a==0:break
    b=ans[1]
    cnt=len(b)//a
    k=0
    for i in range(a):
        print(b[k:k+cnt][::-1],end="")
        k+=cnt
    print()
