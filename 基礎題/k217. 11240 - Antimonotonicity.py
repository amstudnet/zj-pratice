n=int(input())
for _ in range(n):
    cnt=0
    ans=list(map(int,input().split()))
    ans.pop(0)
    for i in range(len(ans)-1):
        if cnt%2==0 and ans[i]>ans[i+1]:
            cnt+=1
        elif cnt%2==1 and ans[i]<ans[i+1]:
            cnt+=1
    print(cnt+1)
