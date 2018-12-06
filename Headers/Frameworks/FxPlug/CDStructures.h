//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FxBitmapImage, FxContext, FxHost, FxMatrix44, FxMetaPlug, FxMetaPlugWrapper, FxPin, FxPlug, FxPlugDescriptor, FxPlugGroupDescriptor, FxShape, FxStream, FxVector, NSArray, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSString, PROPlugIn, PROPlugInManager;

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

struct FxBitmapImagePriv {
    NSMutableData *_field1;
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
    NSDictionary *_field2;
    union {
        struct {
            struct CGImage *image;
        } cgImage;
        struct {
            struct CGContext *ctx;
        } cgContext;
        struct {
            unsigned long long texture;
            struct CGSize size;
            char isFlipped;
            struct CGColorSpace *colorSpace;
        } glTexture;
        struct {
            struct _CGLContextObject *ctx;
            struct _CGLPixelFormatObject *pf;
            id derivedCIContext;
        } glContext;
        struct {
            FxBitmapImage *bm;
        } bitmap;
        struct {
            id image;
        } ciImage;
    } _field3;
};

struct FxHostCapabilitiesPriv {
    NSString *_field1;
    unsigned int _field2;
    NSDictionary *_field3;
    NSArray *_field4;
};

struct FxHostPriv {
    PROPlugInManager *_field1;
    NSMutableArray *_field2;
    NSMutableArray *_field3;
    NSMutableArray *_field4;
    NSMutableDictionary *_field5;
    NSMutableDictionary *_field6;
    NSMutableDictionary *_field7;
    NSMutableArray *_field8;
};

struct FxImagePriv {
    CDStruct_d76d3d7a _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    double _field4;
    double _field5;
    unsigned long long _field6;
    CDUnknownFunctionPointerType _field7;
    void *_field8;
    struct CGRect _field9;
    struct FxRect _field10;
    FxMatrix44 *_field11;
    struct CGColorSpace *_field12;
};

struct FxMetaPlugPriv {
    id _field1;
    FxMetaPlugWrapper *_field2;
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
    NSMutableArray *_field1;
};

struct FxParameterListSelectionPriv {
    int _field1;
    NSArray *_field2;
};

struct FxParameterPoint2dPriv {
    char _field1;
    char _field2;
};

struct FxParameterPoint3dPriv {
    FxVector *_field1;
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
    FxPlug *_field1;
    NSMutableDictionary *_field2;
    FxStream *_field3;
    NSString *_field4;
    NSString *_field5;
    NSString *_field6;
    int _field7;
    Class _field8;
};

struct FxPlugDescriptorPriv {
    PROPlugIn *_field1;
    FxMetaPlug *_field2;
};

struct FxPlugGroupDescriptorPriv {
    NSDictionary *_field1;
};

struct FxPlugGroupPriv {
    NSMutableArray *_field1;
    FxPlugGroupDescriptor *_field2;
};

struct FxPlugPriv {
    FxHost *_field1;
    FxPlugDescriptor *_field2;
    NSArray *_field3;
    NSArray *_field4;
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

struct FxSamplePriv {
    double _field1;
    FxContext *_field2;
    FxShape *_field3;
    FxStream *_field4;
};

struct FxShapePriv {
    struct CGRect _field1;
    char _field2;
};

struct FxStreamPriv {
    FxPin *_field1;
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
    unsigned long long width;
    unsigned long long height;
    unsigned long long depth;
    unsigned long long activeChannels;
    unsigned long long imageType;
    unsigned long long origin;
    unsigned long long pixelFormat;
    char isPremultiplied;
    double pixelAspect;
} CDStruct_d76d3d7a;

