<h2><a href="https://codeforces.com/contest/1973/problem/A" target="_blank" rel="noopener noreferrer">1973A — Chess For Three</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1973A](https://codeforces.com/contest/1973/problem/A) |

## Topics
`brute force` `dp` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Chess For Three</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Three friends gathered to play a few games of chess together.</p><p>In every game, two of them play against each other. The winner gets $$$2$$$ points while the loser gets $$$0$$$, and in case of a draw, both players get $$$1$$$ point each. Note that the same pair of players could have played any non-negative number of times (possibly zero). It is also possible that no games were played at all. </p><p>You've been told that their scores after all the games were played were $$$p_1$$$, $$$p_2$$$ and $$$p_3$$$. Additionally, it is guaranteed that $$$p_1 \leq p_2 \leq p_3$$$ holds.</p><p>Find the maximum number of draws that could have happened and print it. If there isn't any way to obtain $$$p_1$$$, $$$p_2$$$ and $$$p_3$$$ as a result of a non-negative number of games between the three players, print $$$-1$$$ instead.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 500$$$). The description of the test cases follows.</p><p>The first line of each test case contains three integers $$$p_1$$$, $$$p_2$$$ and $$$p_3$$$ ($$$0 \leq p_1 \leq p_2 \leq p_3 \leq 30$$$) — the scores of the three players, sorted non-decreasingly.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, print one number — the maximum possible number of draws that could've happened, or $$$-1$$$ if the scores aren't consistent with any valid set of games and results.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004807325857036674" id="id0027123296309455247" class="input-output-copier">Copy</div></div><pre id="id004807325857036674"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">0 0 0</div><div class="test-example-line test-example-line-even test-example-line-2">0 1 1</div><div class="test-example-line test-example-line-odd test-example-line-3">1 1 1</div><div class="test-example-line test-example-line-even test-example-line-4">1 1 2</div><div class="test-example-line test-example-line-odd test-example-line-5">3 3 3</div><div class="test-example-line test-example-line-even test-example-line-6">3 4 5</div><div class="test-example-line test-example-line-odd test-example-line-7">1 1 10</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0007620925837829096" id="id008320103162339068" class="input-output-copier">Copy</div></div><pre id="id0007620925837829096">0
1
-1
2
-1
6
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, no games were played at all, so no draws could occur either.</p><p>For the second example, exactly one game occurred between the second and the third player and it ended in draw, so the answer is $$$1$$$.</p><p>It's easy to see that there's no set of games achieving the scores in third example, so the answer for it is $$$-1$$$.</p></div>