/*
题意：n 个点的无向完全图中删除 m 条边，问点 s 到其他点的最短路长度。

题解：

补图上的 BFS 是非常经典的问题。
一般的做法是用链表（或者偷懒用 std::set）维护还没 BFS 过的点。
当要扩展点 u 的时候，遍历一次还没访问过的点 v，
如果 uv 没边，那么将 v 入队。否则将 v 留在未扩展点中。

很明显，后者只会发生 m 次，前者只会发生 n 次，所以复杂度是 O(n + m)O(n+m).
*/
