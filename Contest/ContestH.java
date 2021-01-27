import java.util.HashMap;
import java.util.Scanner;


public class ContestH {
    private static long k;
    private static long n;
    private static final long MOD = 1000000007;
    private static final long inv2 = 500000004;
    private static final long inv4 = 250000002;
    private static final long inv6 = 166666668;
    private static Scanner scanner = new Scanner(System.in);

    private static long[] phi = new long[10000005];
    private static long[] sum = new long[10000005];
    private static HashMap<Long,Long> hashMap = new HashMap<>();

    public static void main(String[] args) {
        n = scanner.nextLong();
        k = scanner.nextInt();
        initPhi(10000000);
        long ans = getAns(n,k);
        System.out.println((ans+MOD)%MOD);
    }

   private static void initPhi(int n){
        for (int i = 1;i<=n;i++) phi[i] = i;
       phi[1]=0;
        for (int i = 2;i<=n;i++){
            if (phi[i] == i){
                for (int j = i;j<=n;j+=i){
                    phi[j] = phi[j]/i*(i-1);
                }
            }
        }

        for(int i=1;i<=n;i++){
            sum[i]=(sum[i-1]+phi[i])%MOD;
        }
    }

    private static long getSum(long n){
        if(n<=1e7){
            return sum[(int)n];
        }
        if(n==1){
            return 0;
        }
        if (hashMap.containsKey(n)){
            return hashMap.get(n);
        }else{
            long part1=0,part2=0,part3=0;
            part1 = (((n%MOD)*((n-1)%MOD))%MOD*inv2)% MOD;
            long bound1 = sqrt(n);
            for (long i =2;i<=bound1;i++){
                part2= (part2 +getSum(n/i)%MOD)%MOD;
            }
            long bound2 = n/bound1-1;
            for (long i = 1;i<=bound2;i++){
                part3=(part3+ (getSum(i)*((n/i-n/(i+1))%MOD))%MOD)%MOD;
            }
            long sum = (part1-part2-part3)%MOD;
            hashMap.put(n,sum);
            return sum;
        }
    }

    private static long getAns(long n,long k){
        long sum = 0;
        long bound1 = sqrt(n);
        if (k==1){
            for (long i=1;i<=bound1;i++){
                sum= ((sum%MOD)+((i%MOD)*(getSum(n/i)%MOD))%MOD)%MOD;
            }
            for (long i=1;i<=bound1;i++){
                sum= (sum%MOD+(((((((((n/i)%MOD)*((n/i+1)%MOD))%MOD)*inv2)%MOD-(((bound1%MOD)*((bound1+1)%MOD))%MOD*inv2)%MOD)%MOD))%MOD)*phi[(int)i]%MOD)%MOD;
            }
        }else if (k==2){
            for (long i=1;i<=bound1;i++){
                sum= ((sum%MOD)+(((i%MOD)*(i%MOD))%MOD)*(getSum(n/i)%MOD))%MOD;
            }
            for (long i=1;i<=bound1;i++){
                sum= ((sum%MOD)+phi[(int)i]*((((((((n/i)%MOD)*((n/i+1)%MOD))%MOD)*((2*(n/i)+1)%MOD))%MOD)*(inv6%MOD))%MOD-((((((bound1%MOD)*((bound1+1)%MOD))%MOD)*((2*bound1+1)%MOD))%MOD)*(inv6%MOD))%MOD))%MOD;
            }
        }else if (k==3){
            for (long i=1;i<=bound1;i++){
                sum= ((sum%MOD)+(((((i%MOD)*(i%MOD))%MOD)*(i%MOD))%MOD)*(getSum(n/i)%MOD))%MOD;
            }
            for (long i=1;i<=bound1;i++){
                sum= ((sum%MOD)+phi[(int)i]*((((((((((n/i)%MOD)*((n/i)%MOD))%MOD)*((n/i+1)%MOD))%MOD)*((n/i+1)%MOD))%MOD)*(inv4%MOD))%MOD-((((((((bound1%MOD)*(bound1%MOD))%MOD)*((bound1+1)%MOD))%MOD)*((bound1+1)%MOD))%MOD)*(inv4%MOD))%MOD))%MOD;
            }
        }
        return sum;

    }

    private static long sqrt(long n){
        long k = n;
        while (k>1e9){
            k=(k+n/k)/2;
        }
        while (k*k>n){
            k=(k+n/k)/2;
        }
        return k;
    }


}
