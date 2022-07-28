/*
ID: amir85f1
LANG: C++
TASK: 
*/
 
////////////////Δ¥Δ////////////////
//|     In The Name Of God      |//
//|                           |//
//|           Author:        |//
//|      AmirRezaFarahmand        |//
//|_____________________________|//
///////////////©2021///////////////
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define F first
#define S second
#define all(s) s.begin(), s.end()
#define pb push_back
typedef long long int ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef vector <int> vi;

struct Heap
{
    vi heap = { 0 };

    void print()
    {
        int n = heap.size();
        for (int i = 1; i < n; i++)
            cout << heap[i] << ' ';
        cout << endl;
    }

    void add(int a)
    {
        heap.pb(a);
        int idx = heap.size() - 1;
        while (idx > 1)
        {
            int idx2;
            if (idx % 2 == 0)
                idx2 = idx >> 1;
            else
                idx2 = (idx - 1) >> 1;

            if (heap[idx] < heap[idx2])
            {
                swap(heap[idx], heap[idx2]);
                idx = idx2;
            }
            else
                break;
        }
    }

    void remove(int idx)
    {
        int n = heap.size();
        swap(heap[idx], heap[n - 1]);
        heap.pop_back();
        n--;
        while (idx < n - 1)
        {
            int idx2 = idx << 1;
            int idx21 = idx2 + 1;
            if (idx21 >= n)
                break;

            if (heap[idx] > heap[idx2] && heap[idx] > heap[idx21])
            {
                if (heap[idx2] > heap[idx21])
                {
                    swap(heap[idx], heap[idx21]);
                    idx = idx21;
                }
                else
                {
                    swap(heap[idx], heap[idx2]);
                    idx = idx2;
                }
            }
            else if (heap[idx] > heap[idx2] || heap[idx] > heap[idx21])
            {
                if (heap[idx] > heap[idx21])
                {
                    swap(heap[idx], heap[idx21]);
                    idx = idx21;
                }
                else
                {
                    swap(heap[idx], heap[idx2]);
                    idx = idx2;
                }
            }
            else
                break;
        }
    }
};


bool solve()
{
    int n;
    cin >> n;
    Heap heap;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        heap.add(a);
    }

    heap.print();

    heap.add(2);

    heap.print();

    heap.remove(3);

    heap.print();
 
    return 0;
}
 
int main()
{
    ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    //cout << fixed << setprecision(5);
    //freopen("gift1.in", "r", stdin);
    //freopen("gift1.out", "w", stdout);
 
    //clock_t st = clock();
 
    int ntc = 1;
    //cin >> ntc;
    while (ntc--)
        solve();
 
 
    //clock_t en = clock();
    //cerr << "Time: " << 1000 * (en - st) / CLOCKS_PER_SEC << " ms" << '\n';
    //cerr << "Memory: " << (sizeof(dp) + sizeof(edge)) / 1048576.0 << " MB" << '\n';
}
 
//  ▄████  ██   █▄▄▄▄ ██    ▄  █ █▀▄▀█ ██      ▄   ██▄
//  █▀   ▀ █ █  █  ▄▀ █ █  █   █ █ █ █ █ █      █  █  █
//  █▀▀    █▄▄█ █▀▀▌  █▄▄█ ██▀▀█ █ ▄ █ █▄▄█ ██   █ █   █
//  █      █  █ █  █  █  █ █   █ █   █ █  █ █ █  █ █  █
//   █        █   █      █    █     █     █ █  █ █ ███▀
//    ▀      █   ▀      █    ▀     ▀     █  █   ██
