#!/bin/sh

ARGLIST=$*

usage () {
    echo "Usage: ajhc_dump_code.sh AJHC_ARGS"
    exit 1
}

if [ "$ARGLIST" != "" ]; then
    :
else
    usage
fi

ajhc $ARGLIST --ignore-cache \
 -dcore \
 -dcore-afterlift \
 -dcore-beforelift \
 -dcore-initial \
 -dcore-mangled \
 -dcore-mini \
 -dcore-pass \
 -dcore-steps \
 -ddatatable \
 -ddatatable-builtin \
 -de-alias \
 -de-info \
 -de-verbose \
 -doptimization-stats \
 -drules \
 -drules-spec \
 -dgrin \
 -dgrin-datalog \
 -dgrin-final \
 -dgrin-graph \
 -dgrin-initial \
 -dgrin-normalized \
 -dgrin-posteval \
 -dgrin-preeval \
 -dsteps \
 -dtags \
 -dc \
