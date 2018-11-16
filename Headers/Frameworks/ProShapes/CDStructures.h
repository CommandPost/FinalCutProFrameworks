//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct OZChannel;

struct OZChannelBase {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString _field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
};

struct OZChannelFolder;

struct OZChannelInfo;

struct OZChannelShape {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString _field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZCurve *_field15;
    struct OZChannelInfo *_field16;
    CDStruct_198678f7 _field17;
    CDStruct_198678f7 _field18;
    unsigned int _field19;
    unsigned int _field20;
    struct vector<OZChannel::RecordingCallbackData, std::allocator<OZChannel::RecordingCallbackData>> *_field21;
    struct OZChannelVertexFolder _field22;
    struct OZDynamicCurve _field23;
    struct OZDynamicCurve _field24;
    double _field25;
    double _field26;
    double _field27;
    double _field28;
    double _field29;
    _Bool _field30;
    _Bool _field31;
    void *_field32;
    struct vector<double, std::allocator<double>> _field33;
    struct vector<double, std::allocator<double>> _field34;
    struct OZShape *_field35;
};

struct OZChannelTimeConverter;

struct OZChannelVertexFolder {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString _field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase*, std::allocator<OZChannelBase*>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    struct OZChannel *_field18;
};

struct OZCurve;

struct OZDynamicCurve {
    CDUnknownFunctionPointerType *_field1;
    struct OZDynamicSpline _field2;
};

struct OZDynamicSpline {
    CDUnknownFunctionPointerType *_field1;
    double _field2;
    struct OZVertex *_field3;
    struct PCSpinLock _field4;
    struct vector<OZVertex*, std::allocator<OZVertex*>> _field5;
    struct __normal_iterator<OZVertex**, std::vector<OZVertex*, std::allocator<OZVertex*>>> _field6;
    struct __normal_iterator<OZVertex**, std::vector<OZVertex*, std::allocator<OZVertex*>>> _field7;
    struct OZVertex *_field8;
    struct OZVertex *_field9;
    struct __normal_iterator<OZVertex**, std::vector<OZVertex*, std::allocator<OZVertex*>>> _field10;
    struct __normal_iterator<OZVertex**, std::vector<OZVertex*, std::allocator<OZVertex*>>> _field11;
    struct vector<OZVertex*, std::allocator<OZVertex*>> _field12;
    _Bool _field13;
    unsigned int _field14;
    unsigned int _field15;
    _Bool _field16;
    int _field17;
    int _field18;
    _Bool _field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
    CDStruct_198678f7 _field27;
    struct OZInterpolators *_field28;
    struct OZSplineNode *_field29;
};

struct OZFactory;

struct OZInterpolators;

struct OZShape;

struct OZSplineNode;

struct OZVertex;

struct PCSpinLock {
    int _field1;
};

struct PCString {
    struct __CFString *_field1;
};

struct __CFString;

struct __normal_iterator<OZVertex**, std::vector<OZVertex*, std::allocator<OZVertex*>>> {
    struct OZVertex **_field1;
};

struct vector<OZChannel::RecordingCallbackData, std::allocator<OZChannel::RecordingCallbackData>>;

struct vector<OZChannelBase*, std::allocator<OZChannelBase*>>;

struct vector<OZVertex*, std::allocator<OZVertex*>> {
    struct _Vector_impl {
        struct OZVertex **_field1;
        struct OZVertex **_field2;
        struct OZVertex **_field3;
    } _field1;
};

struct vector<double, std::allocator<double>> {
    struct _Vector_impl {
        double *_field1;
        double *_field2;
        double *_field3;
    } _field1;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

