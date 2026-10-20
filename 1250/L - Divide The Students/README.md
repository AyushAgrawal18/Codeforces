<h2><a href="https://codeforces.com/contest/1250/problem/L" target="_blank" rel="noopener noreferrer">1250L — Divide The Students</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1250L](https://codeforces.com/contest/1250/problem/L) |

## Topics
`binary search` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">L. Divide The Students</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A group of students has recently been admitted to the Faculty of Computer Sciences at the Berland State University. Now the programming teacher wants to divide them into three subgroups for practice sessions.</p><p>The teacher knows that a lot of programmers argue which language is the best. The teacher doesn't want to hear any arguments in the subgroups, so she wants to divide the students into three subgroups so that no pair of students belonging to the same subgroup want to argue.</p><p>To perform this division, the teacher asked each student which programming language he likes. There are $$$a$$$ students who answered that they enjoy Assembler, $$$b$$$ students stated that their favourite language is Basic, and $$$c$$$ remaining students claimed that C++ is the best programming language — and there was a large argument between Assembler fans and C++ fans.</p><p>Now, knowing that Assembler programmers and C++ programmers can start an argument every minute, the teacher wants to divide the students into three subgroups so that every student belongs to exactly one subgroup, and there is no subgroup that contains at least one Assembler fan and at least one C++ fan. Since teaching a lot of students can be difficult, the teacher wants the size of the largest subgroup to be minimum possible.</p><p>Please help the teacher to calculate the minimum possible size of the largest subgroup!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 5$$$) — the number of test cases in the input. Then test cases follow.</p><p>Each test case consists of one line containing three integers $$$a$$$, $$$b$$$ and $$$c$$$ ($$$1 \le a, b, c \le 1000$$$) — the number of Assembler fans, Basic fans and C++ fans, respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print one integer — the minimum size of the largest subgroup if the students are divided in such a way that there is no subgroup that contains at least one Assembler fan and at least one C++ fan simultaneously.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006546425670526013" id="id00980357749417994" class="input-output-copier">Copy</div></div><pre id="id006546425670526013">5
3 5 7
4 8 4
13 10 13
1000 1000 1000
13 22 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0020034654897380433" id="id005795302164958465" class="input-output-copier">Copy</div></div><pre id="id0020034654897380433">5
6
13
1000
14
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0004002584507811591" id="id007692672541254274" class="input-output-copier">Copy</div></div><pre id="id0004002584507811591">5
1 3 4
1000 1000 1
4 1 2
325 226 999
939 861 505
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000976162704376572" id="id007691019714953953" class="input-output-copier">Copy</div></div><pre id="id000976162704376572">3
667
3
517
769
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Explanation of the answers for the example $$$1$$$:</p><ol><li> The first subgroup contains $$$3$$$ Assembler fans and $$$2$$$ Basic fans, the second subgroup — $$$5$$$ C++ fans, the third subgroup — $$$2$$$ C++ fans and $$$3$$$ Basic fans. </li><li> The first subgroup contains $$$4$$$ Assembler fans, the second subgroup — $$$6$$$ Basic fans, the third subgroup — $$$2$$$ Basic fans and $$$4$$$ C++ fans. </li><li> The first subgroup contains all Assembler fans, the second subgroup — all Basic fans, the third subgroup — all C++ fans. </li><li> The first subgroup contains all Assembler fans, the second subgroup — all Basic fans, the third subgroup — all C++ fans. </li><li> The first subgroup contains $$$12$$$ Assembler fans and $$$2$$$ Basic fans, the second subgroup — $$$1$$$ Assembler fan and $$$13$$$ Basic fans, the third subgroup — $$$7$$$ Basic fans and $$$7$$$ C++ fans. </li></ol></div>