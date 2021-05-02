"use strict";

const input = require("fs").readFileSync("/dev/stdin", "utf8").split("\n");
const T = parseInt(input[0], 10);
for(let testcase=0; testcase<T; testcase++){
    const X = input[testcase*2+2].split(" ").map(s => parseInt(s, 10));
    const ans1 = X.filter(pattern => (pattern === 0 || pattern === 2)).length;
    const ans2 = X.filter(pattern => (pattern === 1 || pattern === 2)).length;
    console.log(ans1, ans2);
}
