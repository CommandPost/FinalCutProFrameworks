//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct CGColorSpace;

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

struct OZChannel {
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
};

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

struct OZChannelFolder {
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
    vector_53b492d6 *_field15;
    unsigned int _field16;
    unsigned int _field17;
};

struct OZChannelImpl;

struct OZChannelInfo;

struct OZChannelObjectRootBase {
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
    vector_53b492d6 *_field15;
    unsigned int _field16;
    unsigned int _field17;
    CDStruct_1b6d18a9 _field18;
    struct PCTimeRange _field19;
    _Bool _field20;
    _Bool _field21;
};

struct OZChannelRef {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field1;
};

struct OZChannelTimeConverter;

struct OZCompoundChannel {
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
    vector_53b492d6 *_field15;
    unsigned int _field16;
    unsigned int _field17;
    _Bool _field18;
};

struct OZCurveSetListSerializer {
    CDUnknownFunctionPointerType *_field1;
    struct vector<OZCurveSetSerializer *, std::allocator<OZCurveSetSerializer *>> _field2;
    unsigned int _field3;
};

struct OZCurveSetSerializer;

struct OZFactory;

struct PCBitmap {
    CDUnknownFunctionPointerType *_field1;
    struct weak_ptr<PCImage> _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    int _field8;
    struct PCColorSpaceHandle _field9;
    _Bool _field10;
    void *_field11;
    int _field12;
    _Bool _field13;
};

struct PCColorSpaceHandle {
    struct CGColorSpace *_field1;
};

struct PCImage;

struct PCString {
    struct __CFString *_field1;
};

struct PCTimeRange {
    CDStruct_1b6d18a9 _field1;
    CDStruct_1b6d18a9 _field2;
};

struct _Alloc_hider {
    char *_field1;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _Sp_counted_base<2>;

struct __CFString;

struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct _Alloc_hider _field1;
};

struct vector<OZChannelBase *, std::allocator<OZChannelBase *>> {
    struct _Vector_impl {
        struct OZChannelBase **_field1;
        struct OZChannelBase **_field2;
        struct OZChannelBase **_field3;
    } _field1;
};

struct vector<OZChannelRef, std::allocator<OZChannelRef>> {
    struct _Vector_impl {
        struct OZChannelRef *_field1;
        struct OZChannelRef *_field2;
        struct OZChannelRef *_field3;
    } _field1;
};

struct vector<OZCurveSetSerializer *, std::allocator<OZCurveSetSerializer *>> {
    struct _Vector_impl {
        struct OZCurveSetSerializer **_field1;
        struct OZCurveSetSerializer **_field2;
        struct OZCurveSetSerializer **_field3;
    } _field1;
};

struct vector<void *, std::allocator<void *>> {
    struct _Vector_impl {
        void **_M_start;
        void **_M_finish;
        void **_M_end_of_storage;
    } _M_impl;
};

struct weak_ptr<PCImage> {
    struct PCImage *_field1;
    struct __weak_count<2> {
        struct _Sp_counted_base<2> *_field1;
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
typedef struct vector<OZChannelBase *, std::allocator<OZChannelBase *>> {
    struct _Vector_impl {
        struct OZChannelBase **_field1;
        struct OZChannelBase **_field2;
        struct OZChannelBase **_field3;
    } _field1;
} vector_53b492d6;

typedef struct vector<OZChannelRef, std::allocator<OZChannelRef>> {
    struct _Vector_impl {
        struct OZChannelRef *_field1;
        struct OZChannelRef *_field2;
        struct OZChannelRef *_field3;
    } _field1;
} vector_6694fb0a;

typedef struct vector<void *, std::allocator<void *>> {
    struct _Vector_impl {
        void **_M_start;
        void **_M_finish;
        void **_M_end_of_storage;
    } _M_impl;
} vector_dd51e4ce;

