/*
dp(i,j) = min{ dp(i,k) + dp(k+1,j) + S }
 
Evident, S satisface convexitatea. Dar pentru că acest lucru este în copac, dacă există o mulțime de noduri copil
Utilizarea directă a inegalităților patrulaterale va degenera până la complexitatea n ^ 3

Dacă în acest moment este fixat unidimensional,
Ecuația devine dp [j] = min {dp [k] + w (k + 1, j)}, w (k + 1, j) = dp [k + 1] [j] + S
Aceasta este o ecuație tipică 1D1D, unde w satisface și convexitatea, astfel încât monotonicitatea decizională poate fi folosită:
În primul rând, pentru un i fix, să presupunem că dp [x] punctul de decizie optim k este a,
Picant, datorită convexității, punctul optim de decizie de dp [x + 1] poate fi enumerat de la o
Dar complexitatea este încă n ^ 3

În schimb, considerăm efectul fiecărui x asupra următoarelor x + 1, x + 2, x + ..
Evident, cele mai multe puncte de decizie trebuie să fie sub forma unui segment, așa că folosiți o stivă pentru a menține aceste intervale.
Pentru x-ul curent, găsiți intervalul în care se află x, puteți obține punctul de decizie optim al lui x.
Apoi actualizați stiva cu cel mai mare punct de decizie din x:
    Din partea superioară a stivei, căutați fiecare interval
    Vechiul punct de decizie (intervalul stânga final) și noul punct de decizie x punctul de demarcație (primul punct de decizie nou este mai bun decât vechiul superior x ')
    Apoi actualizați intervalul (ștergeți intervalul vechi sau restrângeți intervalul vechi)

    Optimizarea aici este că punctul de întrerupere corect al intervalului nu este menținut, deci nu este necesară modificarea sfârșitului drept al intervalului.
*/



void dfs(int u,int fa,int cur)
{
    seq[cur] = u;
    dp[cur][cur] = A[u];
    int head = 0;
    int tail = 0;
    Stack[tail++] = Node(cur,cur);
    LL sum = A[seq[cur]];
    for(int i = cur+1;i <= n;++i)
    {
        sum += A[seq[i]];
        while(head + 1 < tail && Stack[head+1].L <= i)
            head++;
        dp[cur][i] = cal(cur,Stack[head].pos,i) + sum;
        while(true)
        {
            int L = max(i+1,Stack[tail-1].L);
            int R = n;
            while( L <= R)
            {
                int mid = (L+R) >> 1;
                if(cal(cur,Stack[tail-1].pos,mid) < cal(cur,i,mid)) //老决策更优
                    L = mid+1;
                else
                    R = mid-1;
            }
            int p = L;
            if(p <= Stack[tail-1].L)
                tail--;
            else
            {
                Stack[tail++] = Node(p,i);
                break;
            }

        }
    }
    res[u] = dp[cur][n];
    for(int i = 0;i < G[u].size();++i)
    {
        int v = G[u][i];
        if(v != fa)
            dfs(v,u,cur-1);
    }

}
