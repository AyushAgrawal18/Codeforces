<h2><a href="https://codeforces.com/contest/2035/problem/B" target="_blank" rel="noopener noreferrer">2035B — Everyone Loves Tres</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2035B](https://codeforces.com/contest/2035/problem/B) |

## Topics
`constructive algorithms` `greedy` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Everyone Loves Tres</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><div class="epigraph"><div class="epigraph-text"><span class="tex-font-style-it">There are 3 heroes and 3 villains, so 6 people in total.</span></div></div><p>Given a positive integer $$$n$$$. Find the <span class="tex-font-style-bf">smallest</span> integer whose decimal representation has length $$$n$$$ and consists only of $$$3$$$s and $$$6$$$s such that it is divisible by both $$$33$$$ and $$$66$$$. If no such integer exists, print $$$-1$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1\le t\le 500$$$) — the number of test cases.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$1\le n\le 500$$$) — the length of the decimal representation.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the smallest required integer if such an integer exists and $$$-1$$$ otherwise.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0026633955790336206" id="id001586920100354442" class="input-output-copier">Copy</div></div><pre id="id0026633955790336206"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-odd test-example-line-5">5</div><div class="test-example-line test-example-line-even test-example-line-6">7</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0017980904992537305" id="id0009682235054680444" class="input-output-copier">Copy</div></div><pre id="id0017980904992537305">-1
66
-1
3366
36366
3336366
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For $$$n=1$$$, no such integer exists as neither $$$3$$$ nor $$$6$$$ is divisible by $$$33$$$.</p><p>For $$$n=2$$$, $$$66$$$ consists only of $$$6$$$s and it is divisible by both $$$33$$$ and $$$66$$$.</p><p>For $$$n=3$$$, no such integer exists. Only $$$363$$$ is divisible by $$$33$$$, but it is not divisible by $$$66$$$.</p><p>For $$$n=4$$$, $$$3366$$$ and $$$6666$$$ are divisible by both $$$33$$$ and $$$66$$$, and $$$3366$$$ is the smallest.</p></div>