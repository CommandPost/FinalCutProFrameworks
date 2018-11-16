//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

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
    int _field1;
    int _field2;
    int _field3;
    int _field4;
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

struct _CGLContextObject;

struct _CGLPixelFormatObject;

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

