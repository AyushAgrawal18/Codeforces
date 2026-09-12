<h2><a href="https://codeforces.com/contest/2025/problem/B" target="_blank" rel="noopener noreferrer">2025B — Binomial Coefficients, Kind Of</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2025B](https://codeforces.com/contest/2025/problem/B) |

## Topics
`combinatorics` `dp` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Binomial Coefficients, Kind Of</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Recently, akshiM met a task that needed binomial coefficients to solve. He wrote a code he usually does that looked like this:</p><pre class="verbatim">    for (int n = 0; n < N; n++) { // loop over n from 0 to N-1 (inclusive)<br>        C[n][0] = 1;<br>        C[n][n] = 1;<br>        for (int k = 1; k < n; k++) // loop over k from 1 to n-1 (inclusive)<br>            C[n][k] = C[n][k - 1] + C[n - 1][k - 1];<br>    }<br></pre><p>Unfortunately, he made an error, since the right formula is the following:</p><pre class="verbatim">            C[n][k] = C[n - 1][k] + C[n - 1][k - 1]<br></pre><p>But his team member keblidA is interested in values that were produced using the wrong formula. Please help him to calculate these coefficients for $$$t$$$ various pairs $$$(n_i, k_i)$$$. Note that they should be calculated according to the first (wrong) formula.</p><p>Since values $$$C[n_i][k_i]$$$ may be too large, print them modulo $$$10^9 + 7$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^5$$$) — the number of pairs. Next, $$$t$$$ pairs are written in two lines.</p><p>The second line contains $$$t$$$ integers $$$n_1, n_2, \dots, n_t$$$ ($$$2 \le n_i \le 10^5$$$).</p><p>The third line contains $$$t$$$ integers $$$k_1, k_2, \dots, k_t$$$ ($$$1 \le k_i  \lt  n_i$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ integers $$$C[n_i][k_i]$$$ modulo $$$10^9 + 7$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009704125879794745" id="id006434985863210296" class="input-output-copier">Copy</div></div><pre id="id0009704125879794745"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-even test-example-line-0">2 5 5 100000 100000 100000 100000</div><div class="test-example-line test-example-line-even test-example-line-0">1 2 3 1 33333 66666 99999</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006263611290248734" id="id0034374947855492477" class="input-output-copier">Copy</div></div><pre id="id006263611290248734">2
4
8
2
326186014
984426998
303861760
</pre></div></div></div>