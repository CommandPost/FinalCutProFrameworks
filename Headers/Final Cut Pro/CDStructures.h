//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSObject<OS_dispatch_queue>;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct NSObject {
    Class _field1;
};

struct PCProcrastinatedDispatch_t {
    struct os_unfair_lock_s lock;
    double executionTime;
    double executionTimeLimit;
    NSObject<OS_dispatch_queue> *queue;
    CDUnknownBlockType block;
    CDUnknownFunctionPointerType work;
    void *workContext;
    struct PCProcrastinatedDispatch_t **executionContext;
};

struct PEValidNumberDescription {
    unsigned int maxLength;
    unsigned int maxInteger;
    unsigned int maxFractional;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} CDStruct_818bb265;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 _field1;
    CDStruct_1b6d18a9 _field2;
} CDStruct_5c5366e1;

