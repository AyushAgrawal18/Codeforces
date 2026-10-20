<h2><a href="https://codeforces.com/contest/1143/problem/B" target="_blank" rel="noopener noreferrer">1143B — Nirvana</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1143B](https://codeforces.com/contest/1143/problem/B) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Nirvana</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Kurt reaches nirvana when he finds the product of all the digits of some positive integer. Greater value of the product makes the nirvana deeper.</p><p>Help Kurt find the maximum possible product of digits among all integers from $$$1$$$ to $$$n$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only input line contains the integer $$$n$$$ ($$$1 \le n \le 2\cdot10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the maximum product of digits among all integers from $$$1$$$ to $$$n$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007988616905694653" id="id0042724392515243403" class="input-output-copier">Copy</div></div><pre id="id007988616905694653">390
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001966903328563565" id="id0007829476138696578" class="input-output-copier">Copy</div></div><pre id="id001966903328563565">216
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00750615411160633" id="id0011099580983082413" class="input-output-copier">Copy</div></div><pre id="id00750615411160633">7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009129838004631295" id="id0014798974101848228" class="input-output-copier">Copy</div></div><pre id="id009129838004631295">7
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009552494435293613" id="id00843993490235936" class="input-output-copier">Copy</div></div><pre id="id009552494435293613">1000000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00014760113266435115" id="id0058951590363961" class="input-output-copier">Copy</div></div><pre id="id00014760113266435115">387420489
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example the maximum product is achieved for $$$389$$$ (the product of digits is $$$3\cdot8\cdot9=216$$$).</p><p>In the second example the maximum product is achieved for $$$7$$$ (the product of digits is $$$7$$$).</p><p>In the third example the maximum product is achieved for $$$999999999$$$ (the product of digits is $$$9^9=387420489$$$).</p></div>