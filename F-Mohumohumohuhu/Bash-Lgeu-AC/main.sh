#!/usr/bin/env bash
cat /dev/stdin | sed -E 's/^(mohu)+$/Yes/' | sed -E 's/(mo|hu)+/No/' | sed -E '/[0-9]+/d'
