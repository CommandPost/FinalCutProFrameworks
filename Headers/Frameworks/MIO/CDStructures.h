//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioChannelDescription {
    unsigned int _field1;
    unsigned int _field2;
    float _field3[3];
};

struct AudioChannelLayout {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct AudioChannelDescription _field4[1];
};

struct AudioStreamBasicDescription {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct BaseDevice {
    CDUnknownFunctionPointerType *_field1;
    struct TimecodeObserverWrapper *_field2;
    CDUnknownFunctionPointerType _field3;
    char _field4;
    _Bool _field5;
    _Bool _field6;
    char _field7;
    struct Synchronizable _field8;
    struct Synchronizable _field9;
    struct Synchronizable _field10;
    struct Synchronizable _field11;
    _Bool _field12;
    double _field13;
    double _field14;
    _Bool _field15;
    char _field16;
    int _field17;
    id _field18;
    id _field19;
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct CMIOObjectPropertyAddress {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct ComponentInstanceRecord {
    long long _field1[1];
};

struct FSRef {
    unsigned char hidden[80];
};

struct SMPTETime {
    short mSubframes;
    short mSubframeDivisor;
    unsigned int mCounter;
    unsigned int mType;
    unsigned int mFlags;
    short mHours;
    short mMinutes;
    short mSeconds;
    short mFrames;
};

struct Synchronizable {
    CDUnknownFunctionPointerType *_field1;
    struct _opaque_pthread_mutex_t _field2;
    struct _opaque_pthread_t *_field3;
    unsigned long long _field4;
    struct _opaque_pthread_cond_t {
        long long _field1;
        char _field2[40];
    } _field5;
};

struct TimecodeObserverWrapper;

struct __list_node_base<MIOOP1aReaderTrackOutput *, void *> {
    struct __list_node_base<MIOOP1aReaderTrackOutput *, void *> *_field1;
    struct __list_node_base<MIOOP1aReaderTrackOutput *, void *> *_field2;
};

struct __list_node_base<opaqueCMSampleBuffer *, void *> {
    struct __list_node_base<opaqueCMSampleBuffer *, void *> *_field1;
    struct __list_node_base<opaqueCMSampleBuffer *, void *> *_field2;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct list<MIOOP1aReaderTrackOutput *, std::__1::allocator<MIOOP1aReaderTrackOutput *>> {
    struct __list_node_base<MIOOP1aReaderTrackOutput *, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<MIOOP1aReaderTrackOutput *, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<opaqueCMSampleBuffer *, std::__1::allocator<opaqueCMSampleBuffer *>> {
    struct __list_node_base<opaqueCMSampleBuffer *, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<opaqueCMSampleBuffer *, void *>>> {
        unsigned long long _field1;
    } _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

// Template types
typedef struct list<MIOOP1aReaderTrackOutput *, std::__1::allocator<MIOOP1aReaderTrackOutput *>> {
    struct __list_node_base<MIOOP1aReaderTrackOutput *, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<MIOOP1aReaderTrackOutput *, void *>>> {
        unsigned long long _field1;
    } _field2;
} list_931eae18;

typedef struct list<opaqueCMSampleBuffer *, std::__1::allocator<opaqueCMSampleBuffer *>> {
    struct __list_node_base<opaqueCMSampleBuffer *, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<opaqueCMSampleBuffer *, void *>>> {
        unsigned long long _field1;
    } _field2;
} list_4609f400;

