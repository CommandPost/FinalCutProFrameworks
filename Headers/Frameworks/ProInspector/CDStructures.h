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
    struct OZCurve *_field19;
};

struct OZChannel2D {
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
    _Bool _field18;
    struct OZChannelDouble _field19;
    struct OZChannelDouble _field20;
};

struct OZChannelAngle {
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

struct OZChannelDouble {
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

struct OZChannelEnum {
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
    struct _Rb_tree_iterator<std::pair<const PCString, std::vector<PCString, std::allocator<PCString>>>> _field20;
    struct vector<int, std::allocator<int>> _field21;
    struct PCString _field22;
    unsigned int _field23;
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
    struct vector<OZChannelBase *, std::allocator<OZChannelBase *>> *_field15;
    unsigned int _field16;
    unsigned int _field17;
};

struct OZChannelGradient {
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
    struct OZChannelGradientRGBFolder _field18;
    struct OZChannelGradientAlphaFolder _field19;
    struct OZChannelDouble _field20;
    struct OZChannelEnum _field21;
    int _field22;
    _Bool _field23;
};

struct OZChannelGradientAlphaFolder {
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

struct OZChannelGradientFolder {
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

struct OZChannelGradientRGBFolder {
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

struct OZChannelGradientSample {
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
    struct OZChannelPercent _field18;
    struct OZChannelPercent _field19;
    struct OZChannelEnum _field20;
};

struct OZChannelHistogram {
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
    _Bool _field18;
    struct OZChannelEnum _field19;
    struct OZChannelHistogramSample _field20;
    struct OZChannelHistogramSample _field21;
    struct OZChannelHistogramSample _field22;
    struct OZChannelHistogramSample _field23;
    struct OZChannelHistogramSample _field24;
};

struct OZChannelHistogramSample {
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
    _Bool _field18;
    struct OZChannelDouble _field19;
    struct OZChannelDouble _field20;
    struct OZChannelDouble _field21;
    struct OZChannelDouble _field22;
    struct OZChannelDouble _field23;
};

struct OZChannelImpl;

struct OZChannelInfo;

struct OZChannelLevels {
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
    _Bool _field18;
    struct OZChannelDouble _field19;
    struct OZChannelDouble _field20;
    struct OZChannelDouble _field21;
};

struct OZChannelPercent {
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

struct OZChannelRef {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field1;
};

struct OZChannelTimeConverter;

struct OZCurve;

struct OZFactory;

struct PCColor {
    struct vector<double, std::allocator<double>> _field1;
    struct PCColorSpaceHandle _field2;
};

struct PCColorSpaceHandle {
    struct CGColorSpace *_field1;
};

struct PCString {
    struct __CFString *_field1;
};

struct _Alloc_hider {
    char *_field1;
};

struct _List_impl {
    struct _List_node_base _field1;
};

struct _List_node_base {
    struct _List_node_base *_field1;
    struct _List_node_base *_field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _Rb_tree<OZChannelBase *, OZChannelBase *, std::_Identity<OZChannelBase *>, std::less<OZChannelBase *>, std::allocator<OZChannelBase *>> {
    struct _Rb_tree_impl<std::less<OZChannelBase *>, false> _field1;
};

struct _Rb_tree<double, std::pair<const double, OZGutterSample>, std::_Select1st<std::pair<const double, OZGutterSample>>, std::less<double>, std::allocator<std::pair<const double, OZGutterSample>>> {
    struct _Rb_tree_impl<std::less<double>, false> _field1;
};

struct _Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>> {
    struct _Rb_tree_impl<std::less<int>, false> _field1;
};

struct _Rb_tree<int, std::pair<const int, int>, std::_Select1st<std::pair<const int, int>>, std::less<int>, std::allocator<std::pair<const int, int>>> {
    struct _Rb_tree_impl<std::less<int>, false> _field1;
};

struct _Rb_tree_impl<std::less<OZChannelBase *>, false> {
    struct less<OZChannelBase *> _field1;
    struct _Rb_tree_node_base _field2;
    unsigned long long _field3;
};

struct _Rb_tree_impl<std::less<double>, false> {
    struct less<double> _field1;
    struct _Rb_tree_node_base _field2;
    unsigned long long _field3;
};

struct _Rb_tree_impl<std::less<int>, false> {
    struct less<int> _field1;
    struct _Rb_tree_node_base _field2;
    unsigned long long _field3;
};

struct _Rb_tree_iterator<std::pair<const PCString, std::vector<PCString, std::allocator<PCString>>>> {
    struct _Rb_tree_node_base *_field1;
};

struct _Rb_tree_iterator<std::pair<const double, OZGutterSample>> {
    struct _Rb_tree_node_base *_field1;
};

struct _Rb_tree_node_base {
    int _field1;
    struct _Rb_tree_node_base *_field2;
    struct _Rb_tree_node_base *_field3;
    struct _Rb_tree_node_base *_field4;
};

struct __CFString;

struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct _Alloc_hider _field1;
};

struct less<OZChannelBase *>;

struct less<double>;

struct less<int>;

struct list<OZChannelBase *, std::allocator<OZChannelBase *>> {
    struct _List_impl _field1;
};

struct list<PCVector2<double>, std::allocator<PCVector2<double>>> {
    struct _List_impl _field1;
};

struct list<PCVector3<double>, std::allocator<PCVector3<double>>> {
    struct _List_impl _field1;
};

struct list<double, std::allocator<double>> {
    struct _List_impl _field1;
};

struct map<double, OZGutterSample, std::less<double>, std::allocator<std::pair<const double, OZGutterSample>>> {
    struct _Rb_tree<double, std::pair<const double, OZGutterSample>, std::_Select1st<std::pair<const double, OZGutterSample>>, std::less<double>, std::allocator<std::pair<const double, OZGutterSample>>> _field1;
};

struct map<int, int, std::less<int>, std::allocator<std::pair<const int, int>>> {
    struct _Rb_tree<int, std::pair<const int, int>, std::_Select1st<std::pair<const int, int>>, std::less<int>, std::allocator<std::pair<const int, int>>> _field1;
};

struct set<OZChannelBase *, std::less<OZChannelBase *>, std::allocator<OZChannelBase *>> {
    struct _Rb_tree<OZChannelBase *, OZChannelBase *, std::_Identity<OZChannelBase *>, std::less<OZChannelBase *>, std::allocator<OZChannelBase *>> _field1;
};

struct set<int, std::less<int>, std::allocator<int>> {
    struct _Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>> _field1;
};

struct vector<OZChannelBase *, std::allocator<OZChannelBase *>>;

struct vector<double, std::allocator<double>> {
    struct _Vector_impl {
        double *_field1;
        double *_field2;
        double *_field3;
    } _field1;
};

struct vector<int, std::allocator<int>> {
    struct _Vector_impl {
        int *_field1;
        int *_field2;
        int *_field3;
    } _field1;
};

struct vector<unsigned int, std::allocator<unsigned int>> {
    struct _Vector_impl {
        unsigned int *_field1;
        unsigned int *_field2;
        unsigned int *_field3;
    } _field1;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

// Template types
typedef struct _Rb_tree_iterator<std::pair<const double, OZGutterSample>> {
    struct _Rb_tree_node_base *_field1;
} _Rb_tree_iterator_31a39c12;

typedef struct list<OZChannelBase *, std::allocator<OZChannelBase *>> {
    struct _List_impl _field1;
} list_eea5731a;

typedef struct map<double, OZGutterSample, std::less<double>, std::allocator<std::pair<const double, OZGutterSample>>> {
    struct _Rb_tree<double, std::pair<const double, OZGutterSample>, std::_Select1st<std::pair<const double, OZGutterSample>>, std::less<double>, std::allocator<std::pair<const double, OZGutterSample>>> _field1;
} map_d7d8ae3b;

typedef struct set<OZChannelBase *, std::less<OZChannelBase *>, std::allocator<OZChannelBase *>> {
    struct _Rb_tree<OZChannelBase *, OZChannelBase *, std::_Identity<OZChannelBase *>, std::less<OZChannelBase *>, std::allocator<OZChannelBase *>> _field1;
} set_6801396c;

