//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FxMatrix44;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGColorSpace;

struct CGContext;

struct CGDataProvider;

struct CGImage;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct Fx3DInfo {
    id _field1;
    id _field2;
    id _field3;
    double _field4;
    char _field5;
};

struct FxAllLevels {
    struct FxLevels RGBLevels;
    struct FxLevels redLevels;
    struct FxLevels greenLevels;
    struct FxLevels blueLevels;
    struct FxLevels alphaLevels;
};

struct FxBitmapImagePriv {
    id _field1;
    unsigned long long _field2;
    struct CGSize _field3;
    int _field4;
    struct CGColorSpace *_field5;
    struct CGContext *_field6;
    struct CGImage *_field7;
    struct CGDataProvider *_field8;
};

struct FxBitmapPriv {
    void *_field1;
    unsigned long long _field2;
    char _field3;
};

struct FxConnectionMap {
    struct map<int, FxConnectionMap::FxConnection, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, FxConnectionMap::FxConnection>>> connections;
};

struct FxContextPriv {
    int _field1;
    id _field2;
    union {
        struct {
            struct CGImage *_field1;
        } _field1;
        struct {
            struct CGContext *_field1;
        } _field2;
        struct {
            unsigned long long _field1;
            struct CGSize _field2;
            char _field3;
            struct CGColorSpace *_field4;
        } _field3;
        struct {
            struct _CGLContextObject *_field1;
            struct _CGLPixelFormatObject *_field2;
            id _field3;
        } _field4;
        CDStruct_183fa7cb _field5;
        CDStruct_183fa7cb _field6;
    } _field3;
};

struct FxHostCapabilitiesPriv {
    id _field1;
    unsigned int _field2;
    id _field3;
    id _field4;
};

struct FxHostPriv {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
};

struct FxImagePriv {
    CDStruct_4a07eeda _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    double _field4;
    double _field5;
    unsigned long long _field6;
    CDUnknownFunctionPointerType _field7;
    void *_field8;
    struct CGRect _field9;
    struct FxRect _field10;
    id _field11;
    struct CGColorSpace *_field12;
    unsigned long long _field13;
    int _field14;
};

struct FxKeyframeInfo {
    unsigned long long _field1;
    CDUnion_2516e51e _field2;
    unsigned long long _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
};

struct FxLevels {
    double inputBlackPoint;
    double inputWhitePoint;
    double gamma;
    double outputBlackPoint;
    double outputWhitePoint;
};

struct FxLightInfo {
    unsigned long long _field1;
    CDUnion_2516e51e _field2;
    unsigned long long _field3;
    id _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    char _field9;
    float _field10;
    float _field11;
    struct FxPoint3D _field12;
    struct FxPoint3D _field13;
};

struct FxMetaPlugPriv {
    id _field1;
    id _field2;
};

struct FxParameterAnglePriv {
    char _field1;
    double _field2;
    double _field3;
};

struct FxParameterColorPriv {
    char _field1;
};

struct FxParameterGroupPriv {
    id _field1;
};

struct FxParameterListSelectionPriv {
    int _field1;
    id _field2;
};

struct FxParameterPoint2dPriv {
    char _field1;
    char _field2;
};

struct FxParameterPoint3dPriv {
    id _field1;
};

struct FxParameterSliderPriv {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    char _field6;
};

struct FxParameterTextPriv {
    char _field1;
};

struct FxPathGeometryInfo {
    double curvature;
    struct CGPoint radius;
    struct CGPoint size;
    FxMatrix44 *transform;
};

struct FxPinPriv {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    int _field7;
    Class _field8;
};

struct FxPlugDescriptorPriv {
    id _field1;
    id _field2;
};

struct FxPlugGroupDescriptorPriv {
    id _field1;
};

struct FxPlugGroupPriv {
    id _field1;
    id _field2;
};

struct FxPlugPriv {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
};

struct FxPoint3D {
    double _field1;
    double _field2;
    double _field3;
};

struct FxRect {
    int left;
    int bottom;
    int right;
    int top;
};

struct FxRemoteTiming {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    CDStruct_1b6d18a9 _field5;
    CDStruct_1b6d18a9 _field6;
    CDStruct_1b6d18a9 _field7;
    CDStruct_1b6d18a9 _field8;
    CDStruct_1b6d18a9 _field9;
    CDStruct_1b6d18a9 _field10;
    CDStruct_1b6d18a9 _field11;
    CDStruct_1b6d18a9 _field12;
    CDStruct_1b6d18a9 _field13;
};

struct FxSamplePriv {
    double _field1;
    id _field2;
    id _field3;
    id _field4;
};

struct FxShapePriv {
    struct CGRect _field1;
    char _field2;
};

struct FxStreamPriv {
    id _field1;
};

struct FxTexturePriv {
    unsigned int _field1;
    unsigned int _field2;
    char _field3;
};

struct FxTransformPriv {
    struct CGPoint _field1;
    float _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
};

struct FxVertex {
    struct CGPoint _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    double _field4;
    unsigned long long _field5;
};

struct _CGLContextObject;

struct _CGLPixelFormatObject;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct map<_opaque_pthread_t *, Fx3DInfo, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, Fx3DInfo>>> {
    struct __tree<std::__1::__value_type<_opaque_pthread_t *, Fx3DInfo>, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, Fx3DInfo>, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, Fx3DInfo>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, Fx3DInfo>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, Fx3DInfo>, std::__1::less<_opaque_pthread_t *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<_opaque_pthread_t *, FxRemoteTiming, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, FxRemoteTiming>>> {
    struct __tree<std::__1::__value_type<_opaque_pthread_t *, FxRemoteTiming>, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, FxRemoteTiming>, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, FxRemoteTiming>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, FxRemoteTiming>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, FxRemoteTiming>, std::__1::less<_opaque_pthread_t *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<_opaque_pthread_t *, FxTransactionSet, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, FxTransactionSet>>> {
    struct __tree<std::__1::__value_type<_opaque_pthread_t *, FxTransactionSet>, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, FxTransactionSet>, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, FxTransactionSet>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, FxTransactionSet>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, FxTransactionSet>, std::__1::less<_opaque_pthread_t *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<_opaque_pthread_t *, NSArray<FxRemotePath *>*, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, NSArray<FxRemotePath *>*>>> {
    struct __tree<std::__1::__value_type<_opaque_pthread_t *, NSArray<FxRemotePath *>*>, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, NSArray<FxRemotePath *>*>, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, NSArray<FxRemotePath *>*>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, NSArray<FxRemotePath *>*>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, NSArray<FxRemotePath *>*>, std::__1::less<_opaque_pthread_t *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<_opaque_pthread_t *, std::__1::vector<FxLightInfo, std::__1::allocator<FxLightInfo>>, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, std::__1::vector<FxLightInfo, std::__1::allocator<FxLightInfo>>>>> {
    struct __tree<std::__1::__value_type<_opaque_pthread_t *, std::__1::vector<FxLightInfo, std::__1::allocator<FxLightInfo>>>, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, std::__1::vector<FxLightInfo, std::__1::allocator<FxLightInfo>>>, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, std::__1::vector<FxLightInfo, std::__1::allocator<FxLightInfo>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, std::__1::vector<FxLightInfo, std::__1::allocator<FxLightInfo>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, std::__1::vector<FxLightInfo, std::__1::allocator<FxLightInfo>>>, std::__1::less<_opaque_pthread_t *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<_opaque_pthread_t *, unsigned long long, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, unsigned long long>>> {
    struct __tree<std::__1::__value_type<_opaque_pthread_t *, unsigned long long>, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, unsigned long long>, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, unsigned long long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, unsigned long long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, unsigned long long>, std::__1::less<_opaque_pthread_t *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<int, FxConnectionMap::FxConnection, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, FxConnectionMap::FxConnection>>> {
    struct __tree<std::__1::__value_type<int, FxConnectionMap::FxConnection>, std::__1::__map_value_compare<int, std::__1::__value_type<int, FxConnectionMap::FxConnection>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, FxConnectionMap::FxConnection>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, FxConnectionMap::FxConnection>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, FxConnectionMap::FxConnection>, std::__1::less<int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct vector<FxLightInfo, std::__1::allocator<FxLightInfo>> {
    struct FxLightInfo *_field1;
    struct FxLightInfo *_field2;
    struct __compressed_pair<FxLightInfo *, std::__1::allocator<FxLightInfo>> {
        struct FxLightInfo *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
} CDStruct_183fa7cb;

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
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDUnion_2516e51e _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    double _field4;
    double _field5;
    struct _CGLContextObject *_field6;
    unsigned long long _field7;
} CDStruct_6b9ed609;

// Template types
typedef struct map<_opaque_pthread_t *, Fx3DInfo, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, Fx3DInfo>>> {
    struct __tree<std::__1::__value_type<_opaque_pthread_t *, Fx3DInfo>, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, Fx3DInfo>, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, Fx3DInfo>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, Fx3DInfo>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, Fx3DInfo>, std::__1::less<_opaque_pthread_t *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_fc121dd1;

typedef struct map<_opaque_pthread_t *, FxRemoteTiming, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, FxRemoteTiming>>> {
    struct __tree<std::__1::__value_type<_opaque_pthread_t *, FxRemoteTiming>, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, FxRemoteTiming>, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, FxRemoteTiming>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, FxRemoteTiming>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, FxRemoteTiming>, std::__1::less<_opaque_pthread_t *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_8d734ddb;

typedef struct map<_opaque_pthread_t *, FxTransactionSet, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, FxTransactionSet>>> {
    struct __tree<std::__1::__value_type<_opaque_pthread_t *, FxTransactionSet>, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, FxTransactionSet>, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, FxTransactionSet>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, FxTransactionSet>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, FxTransactionSet>, std::__1::less<_opaque_pthread_t *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_dba1109d;

typedef struct map<_opaque_pthread_t *, NSArray<FxRemotePath *>*, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, NSArray<FxRemotePath *>*>>> {
    struct __tree<std::__1::__value_type<_opaque_pthread_t *, NSArray<FxRemotePath *>*>, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, NSArray<FxRemotePath *>*>, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, NSArray<FxRemotePath *>*>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, NSArray<FxRemotePath *>*>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, NSArray<FxRemotePath *>*>, std::__1::less<_opaque_pthread_t *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_6caee8e2;

typedef struct map<_opaque_pthread_t *, std::__1::vector<FxLightInfo, std::__1::allocator<FxLightInfo>>, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, std::__1::vector<FxLightInfo, std::__1::allocator<FxLightInfo>>>>> {
    struct __tree<std::__1::__value_type<_opaque_pthread_t *, std::__1::vector<FxLightInfo, std::__1::allocator<FxLightInfo>>>, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, std::__1::vector<FxLightInfo, std::__1::allocator<FxLightInfo>>>, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, std::__1::vector<FxLightInfo, std::__1::allocator<FxLightInfo>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, std::__1::vector<FxLightInfo, std::__1::allocator<FxLightInfo>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, std::__1::vector<FxLightInfo, std::__1::allocator<FxLightInfo>>>, std::__1::less<_opaque_pthread_t *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_fa897196;

typedef struct map<_opaque_pthread_t *, unsigned long long, std::__1::less<_opaque_pthread_t *>, std::__1::allocator<std::__1::pair<_opaque_pthread_t *const, unsigned long long>>> {
    struct __tree<std::__1::__value_type<_opaque_pthread_t *, unsigned long long>, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, unsigned long long>, std::__1::less<_opaque_pthread_t *>, true>, std::__1::allocator<std::__1::__value_type<_opaque_pthread_t *, unsigned long long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_opaque_pthread_t *, unsigned long long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_opaque_pthread_t *, std::__1::__value_type<_opaque_pthread_t *, unsigned long long>, std::__1::less<_opaque_pthread_t *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_bfa44047;

typedef struct vector<FxLightInfo, std::__1::allocator<FxLightInfo>> {
    struct FxLightInfo *_field1;
    struct FxLightInfo *_field2;
    struct __compressed_pair<FxLightInfo *, std::__1::allocator<FxLightInfo>> {
        struct FxLightInfo *_field1;
    } _field3;
} vector_85ccc8a3;

#pragma mark Typedef'd Unions

typedef union {
    double _field1;
    struct *_field2;
} CDUnion_2516e51e;

