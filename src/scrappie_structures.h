#pragma once
#ifndef SCRAPPIE_STRUCTURES_H
#    define SCRAPPIE_STRUCTURES_H

#    include <inttypes.h>
#    include <stddef.h>

typedef struct {
    uint64_t start;
    float length;
    float mean;
    float stdv;
    int pos;
    int state;
} event_t;

typedef struct {
    size_t n;
    size_t start;
    size_t end;
    event_t *event;
} event_table;


typedef struct {
    int  pos;
    int state;
    float mean;
    float stdv;
    float start_time;
    float event_length;
    char *bases;
    //%d\t%d\t%f\t%f\t%f\t%f\t%s\n", et.event[ee].pos, et.event[ee].state, et.event[ee].mean, et.event[ee].stdv, start_time, et.event[ee].length, bases
} out_event;

typedef struct {
    size_t n;
    out_event *event_list;
} output_events;



typedef struct {
    size_t n;
    size_t start;
    size_t end;
    float *raw;
    char *readname;
} raw_table;

#endif                          /* SCRAPPIE_DATA_H */
