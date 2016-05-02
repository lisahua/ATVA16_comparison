#!/bin/bash

ulimit -t 1
echo $1 $2 $3 $4 $5 >> testruns.txt

case $2 in
  p1) $1 "6 -1 3 6 10" | diff 1.exp - && exit 0 ;;
  p2) $1 "4 0 2 3 4 10" | diff 12.exp - && exit 0 ;;
  p3) $1 "6 0 1 3 4 5 6" | diff 2.exp - && exit 0 ;;
  p4) $1 "0 0 2 5" | diff 3.exp - && exit 0 ;;
  p5) $1 "12 10 12 13 14" | diff 4.exp - && exit 0 ;;
  p6) $1 "20 10 12 13 14 20" | diff 5.exp - && exit 0 ;;
  p7) $1 "1 3" | diff 6.exp - && exit 0 ;;
  p8) $1 "12 1 2 4 12 15" | diff 7.exp - && exit 0 ;;
  n1) $1 "15 -1 0 2 3 10 12 13 14 15 25 30" | diff 10.exp - && exit 0 ;;
  n2) $1 "15 -1 0 2 3 10 12 13 14 15" | diff 11.exp - && exit 0 ;;
  n3) $1 "13 -1 0 2 10 12 13 14" | diff 8.exp - && exit 0 ;;
  n4) $1 "14 -4 -3 -2 0 2 13 14" | diff 9.exp - && exit 0 ;;
  s) # single-valued fitness
  let fit=0
  $1 "15 -1 0 2 3 10 12 13 14 15 25 30" | diff 10.exp - && let fit=$fit +1
  $1 "15 -1 0 2 3 10 12 13 14 15" | diff 11.exp - && let fit=$fit +1
  $1 "13 -1 0 2 10 12 13 14" | diff 8.exp - && let fit=$fit +1
  $1 "14 -4 -3 -2 0 2 13 14" | diff 9.exp - && let fit=$fit +1
  $1 "6 -1 3 6 10" | diff 1.exp - && let fit=$fit +1
  $1 "4 0 2 3 4 10" | diff 12.exp - && let fit=$fit +1
  $1 "6 0 1 3 4 5 6" | diff 2.exp - && let fit=$fit +1
  $1 "0 0 2 5" | diff 3.exp - && let fit=$fit +1
  $1 "12 10 12 13 14" | diff 4.exp - && let fit=$fit +1
  $1 "20 10 12 13 14 20" | diff 5.exp - && let fit=$fit +1
  $1 "1 3" | diff 6.exp - && let fit=$fit +1
  $1 "12 1 2 4 12 15" | diff 7.exp - && let fit=$fit +1
  let passed_all="$fit >= 11"
  echo $fit > $5

  if [ $passed_all -eq 1 ] ; then
     exit 0
  else
     exit 1
  fi ;;

esac
exit 1
