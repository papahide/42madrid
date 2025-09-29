#!/bin/bash
find . -name "*.sh" | xargs basename -a -s ".sh"
