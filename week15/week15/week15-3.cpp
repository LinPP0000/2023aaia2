int equalSubstring(char* s, char* t, int maxCost) {//week15-1.c
    int N = strlen(s); //�����D�r�ꪺ����
    int ans = 0,j = 0;
    for(int i=0;i<N;i++){ //�r�ꪺ�j��
        maxCost -= abs(s[i]-t[i]);
        while (maxCost< 0){
            maxCost += abs(s[j]-t[j]);
            j += 1;
        }
        if(i-j+1>ans) ans=i-j+1;
    }
    return ans;
}
