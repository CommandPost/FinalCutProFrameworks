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
    struct PCString *_field6;
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

struct OZChannelImpl;

struct OZChannelInfo;

struct OZChannelShape {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct OZChannelImpl *_field15;
    struct OZChannelImpl *_field16;
    struct OZChannelInfo *_field17;
    struct OZChannelInfo *_field18;
    struct OZChannelVertexFolder _field19;
    struct OZDynamicCurve _field20;
    struct OZDynamicCurve _field21;
    double _field22;
    double _field23;
    double _field24;
    double _field25;
    double _field26;
    _Bool _field27;
    _Bool _field28;
    void *_field29;
    struct vector<double, std::allocator<double>> _field30;
    struct vector<double, std::allocator<double>> _field31;
    struct OZShape *_field32;
};

struct OZChannelTimeConverter;

struct OZChannelVertexFolder {
    CDUnknownFunctionPointerType *_field1;
    struct OZFactory *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    struct PCString _field5;
    struct PCString *_field6;
    struct OZChannelFolder *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    void *_field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct OZChannelTimeConverter *_field14;
    struct vector<OZChannelBase *, std::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
    struct OZChannel *_field18;
};

struct OZDynamicCurve {
    CDUnknownFunctionPointerType *_field1;
    struct OZDynamicSpline _field2;
    struct OZSplineState _field3;
};

struct OZDynamicSpline {
    CDUnknownFunctionPointerType *_field1;
    struct PCSpinLock _field2;
    struct vector<OZVertex *, std::allocator<OZVertex *>> _field3;
    struct __normal_iterator<OZVertex **, std::vector<OZVertex *, std::allocator<OZVertex *>>> _field4;
    struct __normal_iterator<OZVertex **, std::vector<OZVertex *, std::allocator<OZVertex *>>> _field5;
    struct OZVertex *_field6;
    struct OZVertex *_field7;
    struct __normal_iterator<OZVertex **, std::vector<OZVertex *, std::allocator<OZVertex *>>> _field8;
    struct __normal_iterator<OZVertex **, std::vector<OZVertex *, std::allocator<OZVertex *>>> _field9;
    struct vector<OZVertex *, std::allocator<OZVertex *>> _field10;
    _Bool _field11;
    int _field12;
    int _field13;
    _Bool _field14;
    _Bool _field15;
    struct OZInterpolators *_field16;
    struct OZSplineNode *_field17;
    struct OZSplineState *_field18;
};

struct OZFactory;

struct OZInterpolators;

struct OZShape;

struct OZSplineNode;

struct OZSplineState {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    struct {
        long long _field1;
        int _field2;
        unsigned int _field3;
        long long _field4;
    } _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    _Bool _field10;
};

struct OZVertex;

struct PCSpinLock {
    int _field1;
};

struct PCString {
    struct __CFString *_field1;
};

struct __CFString;

struct __normal_iterator<OZVertex **, std::vector<OZVertex *, std::allocator<OZVertex *>>> {
    struct OZVertex **_field1;
};

struct vector<OZChannelBase *, std::allocator<OZChannelBase *>>;

struct vector<OZVertex *, std::allocator<OZVertex *>> {
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

