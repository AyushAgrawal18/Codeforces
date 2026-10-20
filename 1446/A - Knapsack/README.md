<h2><a href="https://codeforces.com/contest/1446/problem/A" target="_blank" rel="noopener noreferrer">1446A — Knapsack</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1446A](https://codeforces.com/contest/1446/problem/A) |

## Topics
`constructive algorithms` `greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Knapsack</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have a knapsack with the capacity of $$$W$$$. There are also $$$n$$$ items, the $$$i$$$-th one has weight $$$w_i$$$. </p><p>You want to put some of these items into the knapsack in such a way that their total weight $$$C$$$ is at least half of its size, but (obviously) does not exceed it. Formally, $$$C$$$ should satisfy: $$$\lceil \frac{W}{2}\rceil \le C \le W$$$. </p><p>Output the list of items you will put into the knapsack or determine that fulfilling the conditions is impossible. </p><p>If there are several possible lists of items satisfying the conditions, you can output any. Note that you <span class="tex-font-style-bf">don't</span> have to maximize the sum of weights of items in the knapsack.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). Description of the test cases follows.</p><p>The first line of each test case contains integers $$$n$$$ and $$$W$$$ ($$$1 \le n \le 200\,000$$$, $$$1\le W \le 10^{18}$$$). </p><p>The second line of each test case contains $$$n$$$ integers $$$w_1, w_2, \dots, w_n$$$ ($$$1 \le w_i \le 10^9$$$) — weights of the items.</p><p>The sum of $$$n$$$ over all test cases does not exceed $$$200\,000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, if there is no solution, print a single integer $$$-1$$$. </p><p>If there exists a solution consisting of $$$m$$$ items, print $$$m$$$ in the first line of the output and $$$m$$$ integers $$$j_1$$$, $$$j_2$$$, ..., $$$j_m$$$ ($$$1 \le j_i \le n$$$, <span class="tex-font-style-bf">all $$$j_i$$$ are distinct</span>) in the second line of the output  — indices of the items you would like to pack into the knapsack.</p><p>If there are several possible lists of items satisfying the conditions, you can output any. Note that you <span class="tex-font-style-bf">don't</span> have to maximize the sum of weights items in the knapsack.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004599468939919513" id="id006616283548758765" class="input-output-copier">Copy</div></div><pre id="id004599468939919513">3
1 3
3
6 2
19 8 19 69 9 4
7 12
1 1 1 17 1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008938780586840326" id="id0017246479652600333" class="input-output-copier">Copy</div></div><pre id="id008938780586840326">1
1
-1
6
1 2 3 5 6 7</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you can take the item of weight $$$3$$$ and fill the knapsack just right.</p><p>In the second test case, all the items are larger than the knapsack's capacity. Therefore, the answer is $$$-1$$$.</p><p>In the third test case, you fill the knapsack exactly in half.</p></div>