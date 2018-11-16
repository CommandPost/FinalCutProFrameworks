//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioBufferList {
    unsigned int _field1;
    struct AudioBuffer _field2[1];
};

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

struct AudioStreamPacketDescription;

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

struct ImageDescription;

struct MIORADPlugInMediaSpecifier {
    unsigned int _field1;
    struct opaqueCMSampleBuffer *_field2;
    struct opaqueCMSampleBuffer *_field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
};

struct MIORADPlugInMediaSpecifier_Deprecated {
    unsigned int _field1;
    char *_field2;
    unsigned int _field3;
    long long _field4;
    long long _field5;
    long long _field6;
    int _field7;
    struct ImageDescription *_field8;
    unsigned int _field9;
    id _field10;
    void *_field11;
    struct AudioBufferList *_field12;
    unsigned int _field13;
    struct AudioStreamPacketDescription *_field14;
    long long _field15;
    long long _field16;
    long long _field17;
    int _field18;
    struct AudioStreamBasicDescription *_field19;
    unsigned int _field20;
    struct AudioChannelLayout *_field21;
    unsigned int _field22;
    char *_field23;
    unsigned int _field24;
    id _field25;
    void *_field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned char _field29;
    unsigned char _field30;
    unsigned char _field31;
    unsigned int _field32;
    struct __CFDictionary *_field33;
    struct __CFDictionary *_field34;
    struct __CFDictionary *_field35;
    struct __CFDictionary *_field36;
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
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field2;
    struct _opaque_pthread_t *_field3;
    unsigned long long _field4;
    struct _opaque_pthread_cond_t {
        long long _field1;
        char _field2[40];
    } _field5;
};

struct TimecodeInfo {
    long long counter;
    unsigned long long frameQuanta;
    char isDropFrame;
    char isValid;
};

struct TimecodeObserverWrapper;

struct __CFDictionary;

struct opaqueCMSampleBuffer;

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

typedef struct {
    CDStruct_e83c9415 source;
    CDStruct_e83c9415 target;
} CDStruct_82206317;

