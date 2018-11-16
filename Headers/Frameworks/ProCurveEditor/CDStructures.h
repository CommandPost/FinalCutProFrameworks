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

struct KeyframeAsset {
    unsigned int texID;
    struct CGPoint size;
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
    struct OZCurve *_field19;
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
    vector_b71873ec *_field15;
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
    vector_b71873ec *_field15;
    unsigned int _field16;
    unsigned int _field17;
    CDStruct_1b6d18a9 _field18;
    struct PCTimeRange _field19;
    _Bool _field20;
    _Bool _field21;
};

struct OZChannelRef {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
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
    vector_b71873ec *_field15;
    unsigned int _field16;
    unsigned int _field17;
    _Bool _field18;
};

struct OZCurve;

struct OZCurveSetListSerializer {
    CDUnknownFunctionPointerType *_field1;
    struct vector<OZCurveSetSerializer *, std::__1::allocator<OZCurveSetSerializer *>> _field2;
    unsigned int _field3;
};

struct OZCurveSetSerializer;

struct OZFactory;

struct OZLine2Df;

struct OZPoint2Df {
    float _field1;
    float _field2;
};

struct OZTexturedQuad2Df {
    struct OZTexturedVertex2Df _field1;
    struct OZTexturedVertex2Df _field2;
    struct OZTexturedVertex2Df _field3;
    struct OZTexturedVertex2Df _field4;
};

struct OZTexturedVertex2Df {
    struct OZPoint2Df _field1;
    struct OZPoint2Df _field2;
};

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

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CFString;

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> {
    struct OZChannelBase **_field1;
    struct OZChannelBase **_field2;
    struct __compressed_pair<OZChannelBase **, std::__1::allocator<OZChannelBase *>> {
        struct OZChannelBase **_field1;
    } _field3;
};

struct vector<OZChannelRef, std::__1::allocator<OZChannelRef>> {
    struct OZChannelRef *_field1;
    struct OZChannelRef *_field2;
    struct __compressed_pair<OZChannelRef *, std::__1::allocator<OZChannelRef>> {
        struct OZChannelRef *_field1;
    } _field3;
};

struct vector<OZCurveSetSerializer *, std::__1::allocator<OZCurveSetSerializer *>> {
    struct OZCurveSetSerializer **_field1;
    struct OZCurveSetSerializer **_field2;
    struct __compressed_pair<OZCurveSetSerializer **, std::__1::allocator<OZCurveSetSerializer *>> {
        struct OZCurveSetSerializer **_field1;
    } _field3;
};

struct vector<OZLine2Df, std::__1::allocator<OZLine2Df>> {
    struct OZLine2Df *_field1;
    struct OZLine2Df *_field2;
    struct __compressed_pair<OZLine2Df *, std::__1::allocator<OZLine2Df>> {
        struct OZLine2Df *_field1;
    } _field3;
};

struct vector<OZTexturedQuad2Df, std::__1::allocator<OZTexturedQuad2Df>> {
    struct OZTexturedQuad2Df *_field1;
    struct OZTexturedQuad2Df *_field2;
    struct __compressed_pair<OZTexturedQuad2Df *, std::__1::allocator<OZTexturedQuad2Df>> {
        struct OZTexturedQuad2Df *_field1;
    } _field3;
};

struct vector<std::__1::vector<OZTexturedQuad2Df, std::__1::allocator<OZTexturedQuad2Df>>, std::__1::allocator<std::__1::vector<OZTexturedQuad2Df, std::__1::allocator<OZTexturedQuad2Df>>>> {
    vector_c3eb4401 *_field1;
    vector_c3eb4401 *_field2;
    struct __compressed_pair<std::__1::vector<OZTexturedQuad2Df, std::__1::allocator<OZTexturedQuad2Df>>*, std::__1::allocator<std::__1::vector<OZTexturedQuad2Df, std::__1::allocator<OZTexturedQuad2Df>>>> {
        vector_c3eb4401 *_field1;
    } _field3;
};

struct vector<void *, std::__1::allocator<void *>> {
    void **__begin_;
    void **__end_;
    struct __compressed_pair<void **, std::__1::allocator<void *>> {
        void **__first_;
    } __end_cap_;
};

struct weak_ptr<PCImage> {
    struct PCImage *_field1;
    struct __shared_weak_count *_field2;
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
typedef struct vector<OZChannelBase *, std::__1::allocator<OZChannelBase *>> {
    struct OZChannelBase **_field1;
    struct OZChannelBase **_field2;
    struct __compressed_pair<OZChannelBase **, std::__1::allocator<OZChannelBase *>> {
        struct OZChannelBase **_field1;
    } _field3;
} vector_b71873ec;

typedef struct vector<OZChannelRef, std::__1::allocator<OZChannelRef>> {
    struct OZChannelRef *_field1;
    struct OZChannelRef *_field2;
    struct __compressed_pair<OZChannelRef *, std::__1::allocator<OZChannelRef>> {
        struct OZChannelRef *_field1;
    } _field3;
} vector_cdb86442;

typedef struct vector<OZLine2Df, std::__1::allocator<OZLine2Df>> {
    struct OZLine2Df *_field1;
    struct OZLine2Df *_field2;
    struct __compressed_pair<OZLine2Df *, std::__1::allocator<OZLine2Df>> {
        struct OZLine2Df *_field1;
    } _field3;
} vector_d5fe817d;

typedef struct vector<OZTexturedQuad2Df, std::__1::allocator<OZTexturedQuad2Df>> {
    struct OZTexturedQuad2Df *_field1;
    struct OZTexturedQuad2Df *_field2;
    struct __compressed_pair<OZTexturedQuad2Df *, std::__1::allocator<OZTexturedQuad2Df>> {
        struct OZTexturedQuad2Df *_field1;
    } _field3;
} vector_c3eb4401;

typedef struct vector<std::__1::vector<OZTexturedQuad2Df, std::__1::allocator<OZTexturedQuad2Df>>, std::__1::allocator<std::__1::vector<OZTexturedQuad2Df, std::__1::allocator<OZTexturedQuad2Df>>>> {
    vector_c3eb4401 *_field1;
    vector_c3eb4401 *_field2;
    struct __compressed_pair<std::__1::vector<OZTexturedQuad2Df, std::__1::allocator<OZTexturedQuad2Df>>*, std::__1::allocator<std::__1::vector<OZTexturedQuad2Df, std::__1::allocator<OZTexturedQuad2Df>>>> {
        vector_c3eb4401 *_field1;
    } _field3;
} vector_bf37bbef;

typedef struct vector<void *, std::__1::allocator<void *>> {
    void **__begin_;
    void **__end_;
    struct __compressed_pair<void **, std::__1::allocator<void *>> {
        void **__first_;
    } __end_cap_;
} vector_875fa760;

