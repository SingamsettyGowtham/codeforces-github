<h2><a href="https://codeforces.com/contest/2172/problem/A" target="_blank" rel="noopener noreferrer">2172A — ASCII Art Contest</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2172A](https://codeforces.com/contest/2172/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. ASCII Art Contest</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Three leading AI-powered creative assistants—Gemini, ChatGPT, and Claude—enter the first ever ASCII Art Contest, where they must impress a panel of human judges with their text-based masterpieces.</p><p>Each participant receives a score between 80 and 100 (inclusive). The organizers want to announce the final standing only if the judges' opinions are "close enough"; otherwise, they will ask the judges to reconsider.</p><p>Given the three integer scores of Gemini, ChatGPT, and Claude, determine the contest result:</p><ul> <li> If the maximum score and the minimum score differ by at least 10 points, print <span class="tex-font-style-tt">check again</span> (the judging seems inconsistent, so the panel must re-evaluate). </li><li> Otherwise, print <span class="tex-font-style-tt">final X</span>, where <span class="tex-font-style-tt">X</span> is the median of the three scores (the score that would be in the middle if all three were sorted in non-decreasing order). </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>A single line contains three integers $$$g, c, \ell$$$, representing the scores of Gemini, ChatGPT, and Claude respectively.</p><ul> <li> $$$80\le g, c, \ell \le 100$$$ </li></ul></div><div class="output-specification"><div class="section-title">Output</div><p>Print the required answer in a line.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00974708221604776" id="id005382286967344243" class="input-output-copier">Copy</div></div><pre id="id00974708221604776">88 94 95
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0025334337102659654" id="id0014626764901816613" class="input-output-copier">Copy</div></div><pre id="id0025334337102659654">final 94
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0021573741052026352" id="id000401522682221519" class="input-output-copier">Copy</div></div><pre id="id0021573741052026352">100 80 81
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002573746446100956" id="id005783427170945555" class="input-output-copier">Copy</div></div><pre id="id002573746446100956">check again
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003488401947024117" id="id0011361597076038354" class="input-output-copier">Copy</div></div><pre id="id003488401947024117">98 99 98
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002741196673478038" id="id00007609619518566424" class="input-output-copier">Copy</div></div><pre id="id002741196673478038">final 98
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001757876652666761" id="id00013935428762657076" class="input-output-copier">Copy</div></div><pre id="id001757876652666761">95 86 85
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0002440183363155235" id="id002335118976193229" class="input-output-copier">Copy</div></div><pre id="id0002440183363155235">check again
</pre></div></div></div>