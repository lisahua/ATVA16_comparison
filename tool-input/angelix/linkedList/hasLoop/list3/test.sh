#!/bin/bash

ulimit -t 1
echo $1 $2 $3 $4 $5 >> testruns.txt
case $2 in
  p1) $1 "" | diff 1.exp - && exit 0 ;;
  p2) $1 "N1 H" | diff 2.exp - && exit 0 ;;
  p3) $1 "N1 N2 N3 H" | diff 7.exp - && exit 0 ;;
  n1) $1 "N1 N1" | diff 3.exp - && exit 0 ;;
  n2) $1 "N1 N2 N1" | diff 4.exp - && exit 0 ;;
  n3) $1 "N1 N2 N3 N1" | diff 5.exp - && exit 0 ;;
  n4) $1 "N1 N2 N2" | diff 6.exp - && exit 0 ;;
  n5) $1 "N1 N2 N3 N3" | diff 8.exp - && exit 0 ;;
  n6) $1 "N1 N2 N3 N2" | diff 9.exp - && exit 0 ;;

  s) # single-valued fitness 
  let fit=0
  $1 "" | diff 1.exp - && let fit=$fit+1
  $1 "N1 H" | diff 2.exp - && let fit=$fit+1
  $1 "N1 N2 N3 H" | diff 7.exp - && let fit=$fit+1
  $1 "N1 N1" | diff 3.exp - && let fit=$fit+1
  $1 "N1 N2 N1" | diff 4.exp - && let fit=$fit+1
  $1 "N1 N2 N3 N1" | diff 5.exp - && let fit=$fit+1
  $1 "N1 N2 N2" | diff 6.exp - && let fit=$fit+1
  $1 "N1 N2 N3 N3" | diff 8.exp - && let fit=$fit+1
  $1 "N1 N2 N3 N2" | diff 9.exp - && let fit=$fit+1
  let passed_all="$fit >= 8"
  echo $fit > $5
  if [ $passed_all -eq 1 ] ; then 
    exit 0 
  else
    exit 1 
  fi ;;


esac 
exit 1
