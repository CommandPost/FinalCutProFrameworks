//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

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

struct FxHeliumImagePriv {
    HGRef_0de1db7e _field1;
};

struct FxKeyframeInfo {
    unsigned long long _field1;
    double _field2;
    unsigned long long _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
};

struct FxRect {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct HGBitmap;

struct HGNode {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    int _field3;
    int _field4;
    void *_field5;
    int _field6;
    int _field7;
    float *_field8;
    int _field9;
    struct HGShaderEntry *_field10;
    struct HGNodeInput **_field11;
    int _field12;
    struct HGBitmap *_field13;
    _Bool _field14;
    struct set<HGNodeInput *, std::less<HGNodeInput *>, std::allocator<HGNodeInput *>> _field15;
    int _field16;
    struct HGNode *_field17;
    struct HGRect _field18;
    struct HGRect _field19;
    struct HGRenderer *_field20;
    struct HGBitmap *_field21;
    int _field22;
    int _field23;
    int _field24;
    struct HGShaderBinding _field25;
    struct HGNodeChain *_field26;
    struct HGShaderEntry *_field27;
    int _field28;
};

struct HGNodeChain;

struct HGNodeInput;

struct HGRect {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct HGRef<HGNode> {
    struct HGNode *_field1;
};

struct HGRenderer;

struct HGShaderBinding {
    int _field1[1];
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct HGShaderEntry;

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
    struct OZCurve *_field15;
    struct OZChannelInfo *_field16;
    struct OZChannelFade *_field17;
    struct vector<OZChannel::RecordingCallbackData, std::allocator<OZChannel::RecordingCallbackData>> *_field18;
};

struct OZChannelFade;

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
    struct vector<OZChannelBase *, std::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
};

struct OZChannelInfo;

struct OZChannelTimeConverter;

struct OZCurve;

struct OZFactory;

struct PCString {
    struct __CFString *_field1;
};

struct _Rb_tree<HGNodeInput *, HGNodeInput *, std::_Identity<HGNodeInput *>, std::less<HGNodeInput *>, std::allocator<HGNodeInput *>> {
    struct _Rb_tree_impl<std::less<HGNodeInput *>, false> _field1;
};

struct _Rb_tree_impl<std::less<HGNodeInput *>, false> {
    struct less<HGNodeInput *> _field1;
    struct _Rb_tree_node_base _field2;
    unsigned long long _field3;
};

struct _Rb_tree_node_base {
    int _field1;
    struct _Rb_tree_node_base *_field2;
    struct _Rb_tree_node_base *_field3;
    struct _Rb_tree_node_base *_field4;
};

struct __CFString;

struct less<HGNodeInput *>;

struct set<HGNodeInput *, std::less<HGNodeInput *>, std::allocator<HGNodeInput *>> {
    struct _Rb_tree<HGNodeInput *, HGNodeInput *, std::_Identity<HGNodeInput *>, std::less<HGNodeInput *>, std::allocator<HGNodeInput *>> _field1;
};

struct vector<OZChannel::RecordingCallbackData, std::allocator<OZChannel::RecordingCallbackData>>;

struct vector<OZChannelBase *, std::allocator<OZChannelBase *>>;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    char _field8;
    double _field9;
} CDStruct_4a07eeda;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

// Template types
typedef struct HGRef<HGNode> {
    struct HGNode *_field1;
} HGRef_0de1db7e;

